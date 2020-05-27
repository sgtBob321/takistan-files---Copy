#include "..\..\script_macros.hpp"
/*
	File: fn_phoneCall.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_selectedRow"];

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;

_selectedRow = lnbCurSelRow _numbers;

if(_selectedRow isEqualTo -1) exitWith {hint "Please select a number you want to call from your contacts";};
if(player getVariable ["phone_flymode", false]) exitWith {hint "You can not call anyone in flight mode!";};

_name = _numbers lnbData [_selectedRow, 0];
_number = _numbers lnbData [_selectedRow, 1];

if(_name isEqualTo "EXTRA" && _number isEqualTo "EXTRA") exitWith {_selectedRow spawn life_fnc_phoneExtra;};
if(_name isEqualTo "SPACER" && _number isEqualTo "SPACER") exitWith {hint "Please select a number you want to call from your contacts";};

_overtime = missionNamespace getVariable [format["phone_overtime_%1", getPlayerUID player], false];
_overtimeSecs = missionNamespace getVariable [format["phone_overtimeSecs_%1", getPlayerUID player], 0];

if(life_phone_mobileActive) exitWith {hint "You are already in a call!";};
if(((count life_phone_channelList)-1) < 0) exitWith {hint "There are currently no free telephone lines!";};
if(_overtime) exitWith {hint format["You can only call someone in %1min again!", [_overtimeSecs, "MM:SS"] call BIS_fnc_secondsToString];};
if((player getVariable [format["phone_isBlocked_%1", _number], 0]) isEqualTo 1) exitWith {hint "You can not call a blocked number!";};

closeDialog 0;

_numberDone = _number call life_fnc_phoneCreateNumber;
_busyCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_busyTime"));
_ringCounter = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_ringTime"));

player setVariable ["phone_callStop", false, true];
player setVariable ["phone_isCalling", true, true];
life_phone_sound = true;

true spawn life_fnc_phoneMobileEffect;
"calltone" spawn life_fnc_phonePlaySound;

waitUntil{life_phone_mobileActive};

_mobileDisplay 	= uiNamespace getVariable ["life_mobilephone_dialog", displayNull];
_displayText   	= _mobileDisplay displayCtrl 98761;
_leftText		= _mobileDisplay displayCtrl 98762;
_rightText		= _mobileDisplay displayCtrl 98763;

_rightText ctrlSetStructuredText parseText format["<t align='center' size='0.6'>- %1 -<br/>Cancel</t>", getText(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancelName")];

life_phone_keyHandler = (findDisplay 46) displayAddEventHandler ["KeyDown", {
	_ctrl = _this select 0;
	_code = _this select 1;
	_shift = _this select 2;
	_ctrlKey = _this select 3;
	_alt = _this select 4;
	
	_cancelKey = getNumber(missionConfigFile >> "CfgPhone" >> "phone_keyCodeCancel");
	
	if(_code isEqualTo _cancelKey) then {
		if(!_shift && !_ctrlKey && !_alt) then {
			player setVariable ["phone_callStop", true, true];
			(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];
		};
	};
	
	false;
}];

_user = _number call life_fnc_phoneFindPlayer;
_isCalling = false;
_isBlocked = false;
_hasFlymode = false;

if(!isNull _user) then {
	_isCalling = _user getVariable ["phone_isCalling", false];
	_block = _user getVariable [format["phone_isBlocked_%1", life_phone_number], 0];
	_hasFlymode = _user getVariable ["phone_flymode", false];
	if(_block isEqualTo 1) then {_isBlocked = true;};
	
	if(!_isBlocked && !_hasFlymode) then {
		[player, life_phone_number] remoteExec ["life_fnc_phoneAddCall", _user];
	};
};

_ringtoneTime = 0;
for "_i" from 0 to _ringCounter do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='1.1'>
	Calling %1...<br/>
	%2<br/>
	<br/>
	%3
	</t>", _name, _numberDone, [_ringtoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	
	if(_i isEqualTo _busyCounter && (isNull _user || _isCalling || _isBlocked || _hasFlymode)) exitWith {};
	if(!isNull _user && _user getVariable ["phone_callCanceled", false]) exitWith {};
	if(!isNull _user && _user getVariable ["phone_callAccepted", false]) exitWith {};
	if(!isNull _user && !alive _user) exitWith {};
	if(!(_i <= _busyCounter) && isNull _user) exitWith {};
	if(player getVariable ["phone_callStop", false] || !alive player) exitWith {};
	
	sleep 1;
	_ringtoneTime = _ringtoneTime + 1;
};

life_phone_sound = false;
"stop" call life_fnc_phonePlaySound;

if(isNull _user && _ringtoneTime isEqualTo _busyCounter) exitWith {[_user, "The person you have called is not available at the moment!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _hasFlymode) exitWith {[_user, "The person you have called is on flight mode!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _isBlocked) exitWith {[_user, "The person you have called has blocked you!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _isCalling) exitWith {[_user, "The person you have called is on the phone!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && _user getVariable ["phone_callCanceled", false]) exitWith {[_user, "The person you called rejected the call it!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && !(_user getVariable ["phone_callAccepted", false])) exitWith {[_user, "The person did not answer the phone!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(!isNull _user && !alive _user) exitWith {[_user, "The person you called is not available at the moment!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(player getVariable ["phone_callStop", false] || !alive player) exitWith {[_user, "You have ended the call!", "normal"] spawn life_fnc_phoneSetPlayer;};

_maxTime = (getNumber(missionConfigFile >> "CfgPhone" >> "phone_maxTime") * 60);
_phoneTime = 0;

for "_i" from 0 to 1 step 0 do {
	_displayText ctrlSetStructuredText parseText format["<t align='center' size='1.1'>
	Calling with %1<br/>
	%2<br/>
	<br/>
	%3
	</t>", _name, _numberDone, [_phoneTime, "MM:SS"] call BIS_fnc_secondsToString];
	sleep 1;
	_phoneTime = _phoneTime + 1;
	
	if(_phoneTime isEqualTo _maxTime) exitWith {};
	if(!alive _user) exitWith {};
	if(_user getVariable ["phone_callCanceled", false]) exitWith {};
	if(player getVariable ["phone_callStop", false] || !alive player) exitWith {};
	if(!(_user in allPlayers)) exitWith {};
};

(findDisplay 46) displayRemoveEventHandler ["KeyDown", life_phone_keyHandler];
[getPlayerUID player, _phoneTime] remoteExec ["ton_fnc_phoneOvertime", 2];

if(!(_user in allPlayers)) exitWith {[_user, "The person you have called is not available at the moment!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(_phoneTime isEqualTo _maxTime) exitWith {[_user, format["The call ended automatically after %1 minutes!", (_maxTime / 60)], "normal"] spawn life_fnc_phoneSetPlayer;};
if(!alive _user) exitWith {[_user, "The person you called is no longer available!", "busy"] spawn life_fnc_phoneSetPlayer;};
if(_user getVariable ["phone_callCanceled", false]) exitWith {[_user, "The call has ended!", "normal"] spawn life_fnc_phoneSetPlayer;};
if(player getVariable ["phone_callStop", false] || !alive player) exitWith {[_user, "You have ended the call!", "normal"] spawn life_fnc_phoneSetPlayer;};
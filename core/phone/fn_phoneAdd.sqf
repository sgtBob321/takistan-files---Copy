#include "..\..\script_macros.hpp"
/*
	File: fn_phoneAdd.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_number", "_name", "_phoneNumbers"];

_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];

disableSerialization;

_display 		= findDisplay 987654;
_numberField 	= _display displayCtrl 9876544;
_nameField 		= _display displayCtrl 9876545;

_number = ctrlText _numberField;
_name = ctrlText _nameField;

_numberDone = _number call life_fnc_phoneCreateNumber;

_minNumber 	= (count (getText(missionConfigFile >> "CfgPhone" >> "phone_number")));
_maxNumber 	= (8 + _minNumber);
_minName 	= (getArray(missionConfigFile >> "CfgPhone" >> "phone_maxMinNameLength") select 0);
_maxName 	= (getArray(missionConfigFile >> "CfgPhone" >> "phone_maxMinNameLength") select 1);

if(count _name < _minNumber) exitWith {hint "The name entered must not be shorter than 4 characters!";};
if(count _number < _minName) exitWith {hint "The entered number must not be shorter than 6 digits!";};
if(count _name > _maxName) exitWith {hint "The name entered must not be longer than 20 characters!";};
if(count _number > _maxNumber) exitWith {hint "The entered number can not be longer than 20 digits!";};

_numberByte = toArray(_number);
_nameByte = toArray(_name);
_numberAllowed = toArray("0123456789");
_nameAllowed = toArray("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz");
_badNumber = false;
_badName = false;

{if(!(_x in _numberAllowed)) exitWith {_badNumber = true;};} foreach _numberByte;
{if(!(_x in _nameAllowed)) exitWith {_badName = true;};} foreach _nameByte;
if(_badNumber) exitWith {hint "You can only use numbers in your contacts!";};
if(_badName) exitWith {hint "You may not use special characters or spaces in your name!";};

_extraChannel = [];
{
	_extraChannel pushBack (_x select 1);
} forEach (getArray(missionConfigFile >> "CfgPhone" >> "phone_extraChannel"));

if(_number in _extraChannel) exitWith {hint "You can not add numbers from existing channels!";};
if(_number isEqualTo life_phone_number) exitWith {hint "You can not save your own phone number!";};

_isNumber = false;
_isName = false;

{
	_userName = _x select 0;
	_userNumber = _x select 1;
	
	if(_number isEqualTo _userNumber) exitWith {_isNumber = true};
	if(_name isEqualTo _userName) exitWith {_isName = true;};
} forEach _phoneNumbers;

if(_isNumber) exitWith {hint format["The number (%1) is already in your contacts!", _numberDone]};
if(_isName) exitWith {hint format["The name (%1) is already in your contacts!", _name]};

_isOnline = false;
{
	_playerNumber = _x getVariable "phone_ownNumber";
	if(_playerNumber isEqualTo _number) exitWith {
		_isOnline = true;
	};
} forEach allPlayers;

if(!_isOnline) exitWith {hint format["The player with the phone number (%1) is currently not online or has been typed incorrectly!", _numberDone]};

_phoneNumbers pushBack [_name, _number, 0];
profileNamespace setVariable ["phone_Numbers", _phoneNumbers];
saveProfileNamespace;

hint format["You have successfully added the number (%2) with the name (%1) to your contacts list.", _name, _numberDone];

call life_fnc_phoneRefreshList;
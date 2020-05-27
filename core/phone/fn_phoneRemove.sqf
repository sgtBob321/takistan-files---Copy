#include "..\..\script_macros.hpp"
/*
	File: fn_phoneRemove.sqf
	Author: nflug
	
	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/
private["_phoneNumbers"];

_phoneNumbers = profileNamespace getVariable ["phone_Numbers", []];

disableSerialization;

_display 		= findDisplay 987654;
_numbers 		= _display displayCtrl 9876541;

_selectedRow = lnbCurSelRow _numbers;

if(_selectedRow isEqualTo -1) exitWith {hint "Please select a person to remove!";};

_name = _numbers lnbData [_selectedRow, 0];
_number = _numbers lnbData [_selectedRow, 1];

if((_name isEqualTo "SPACER" && _number isEqualTo "SPACER") || (_name isEqualTo "EXTRA" && _number isEqualTo "EXTRA")) exitWith {hint "Please select a person to remove!";};

_numberDone = _number call life_fnc_phoneCreateNumber;

_phoneIndex = -1;
{
	_userName = _x select 0;
	_userNumber = _x select 1;
	
	if(_userName isEqualTo _name && _userNumber isEqualTo _number) exitWith {
		_phoneIndex = _forEachIndex;
	};
} forEach _phoneNumbers;

_phoneNumbers deleteAt _phoneIndex;
profileNamespace setVariable ["phone_Numbers", _phoneNumbers];
saveProfileNamespace;

hint format["You have successfully removed the number (%2) with the name (%1) from your contacts.", _name, _numberDone];

call life_fnc_phoneRefreshList;
#include "..\..\..\script_macros.hpp"
/*
 Created by repentz
*/

params [
    ["_vehicle",objNull,[objNull]]
];

private ["_payCheck"];

_payCheck = selectRandom [750,1000,1500,1750,2000];

life_cash = life_cash + _payCheck;
hint format ["Congratulations you have finished the police documents mission and recived the reward of $%1. Enjoy!", [_payCheck] call life_fnc_numberText];

["copMission"] spawn mav_ttm_fnc_addExp;
player removeAction life_collectMoneys;
player setVariable ["taskStart",false,true];

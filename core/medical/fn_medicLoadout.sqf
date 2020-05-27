#include "..\..\script_macros.hpp"
/*
    File: fn_medicLoadout.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Loads the medic out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player ForceaddUniform "medic_uni1";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player addItem "Medkit";

[true,"cprKit",1] call life_fnc_handleInv;
[true,"bandage",10] call life_fnc_handleInv;
[true,"personallight",1] call life_fnc_handleInv;
[true,"toolkit",1] call life_fnc_handleInv;
[true,"donuts",2] call life_fnc_handleInv;
[true,"waterBottle",2] call life_fnc_handleInv;

[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;

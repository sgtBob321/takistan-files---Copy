#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

if (hasInterface) then {
    player addEventHandler ["GetOutMan", {
        life_seatbelt = false;
        //[] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

if (hasInterface) then {
    player addEventHandler ["GetInMan", {
        life_seatbelt = false;
        //[] call life_fnc_hudUpdate; //--Enable if you are putting a hud option to display when your seatbelt is on
    }];
};

[] execVM "core\init.sqf";
[] execVM "briefing.sqf";

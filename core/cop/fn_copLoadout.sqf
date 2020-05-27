/*
    File: fn_copLoadout.sqf
    Author: Bryan "Tonic" Boardwine
    Edited: Itsyuka

    Description:
    Loads the cops out with the default gear.
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

//Load player with default cop gear.
player addUniform "MET_black_Uniform";
player addVest "V_SGT_N7Vest";
player addBackpack "AM_PoliceBelt";

player addMagazine "CSW_Taser_Probe_Mag";
player addWeapon "CSW_M26C";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";
player addMagazine "CSW_Taser_Probe_Mag";

/* ITEMS */
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "ItemGPS";
player linkItem "tf_anprc152_1";
player linkItem "Oase_ID_Card_Police";

[true,"toolkit",1] call life_fnc_handleInv;
[true,"donuts",2] call life_fnc_handleInv;
[true,"waterBottle",2] call life_fnc_handleInv;
[true,"spikeStrip",1] call life_fnc_handleInv;
[true,"bandage",3] call life_fnc_handleInv;
[true,"cprKit",1] call life_fnc_handleInv;
[true,"handcuffs",3] call life_fnc_handleInv;
[true,"keys",1] call life_fnc_handleInv;

[] call life_fnc_saveGear;

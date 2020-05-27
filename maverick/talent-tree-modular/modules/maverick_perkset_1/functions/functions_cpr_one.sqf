scriptName "functions_cpr_one";

#define __filename "functions_cpr_one.sqf"
_ownsDependency1 = [life_currentExpPerks, "perk_cpr_two"] call mav_ttm_fnc_hasPerk;


if (!_ownsDependency1) then {
	mav_ttm_var_cprChance = 25;
};

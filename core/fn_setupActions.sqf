/*
    File: fn_setupActions.sqf
    Author:

    Description:
    Master addAction file handler for all client-based actions.
*/

switch (playerSide) do {
    case civilian: {
        //Drop fishing net
        life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
        (surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];     
	   //Rob person
        life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
        !isNull cursorObject && player distance cursorObject < 3.5 && isPlayer cursorObject && animationState cursorObject == "Incapacitated" && !(cursorObject getVariable ["robbed",false]) ']];		
		//ID
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Show Identity Card</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID card</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];	
		//sitting
        life_actions pushBack (player addAction["<t color='#0099FF'>Otur</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
		//Gang
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
		// Suicide Bomb
	    life_actions pushBack (player addAction["<t color='#FF0000'>Activate Suicide Vest</t>",life_fnc_suicideBomb,"",0,false,false,"",' vest player == "V_HarnessOGL_gry" && alive player && playerSide == civilian && !life_istazed && !(player getVariable "restrained") && !(player getVariable "Escorting") && !(player getVariable "transporting")']);	
		//job
        life_actions pushBack (player addAction ["Repair Near Objects",ADTC_fnc_Repair,"",0,false,false,"",'(player getVariable ["Job",""] == "Repair") &&(isnull objectParent player) ']);       
		//Phone
		//life_actions pushBack (player addAction["Phone",{call life_fnc_phoneInit;}]);	
	};
	case west:  
	{  
		//barrier
		life_actions = life_actions + [player addAction ["Remove Police Barrier",life_fnc_removePlaceable,"",0,false,false,"",'!isNull cursorTarget && (playerSide == west) && (cursorTarget getVariable ["placeable",false]) && !(animationState cursorTarget == "Incapacitated") && !(player getVariable["restrained",false])']];
		//Sieze Object
		life_actions pushBack (player addAction["Seize Objects",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'((count(nearestObjects [player,["WeaponHolder"],3])>0) || (count(nearestObjects [player,["GroundWeaponHolder"],3])>0) || (count(nearestObjects [player,["WeaponHolderSimulated"],3])>0))']);
		//Gang
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Capture Gang Location</t>",life_fnc_areaCapture,"",0,false,false,"",' ((typeOf cursorTarget) == "Flag_Red_F") ']];
		//ID Card
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Show badge</t>",{[player, switch (playerSide) do {case west:{call life_coplevel}; case independent:{call life_medicLevel}; case east:{call life_adaclevel};},([] call life_fnc_DienstausweisLizenzen)] remoteExec ["life_fnc_DienstausweisZeigen",cursorObject];},"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Show Identity Card</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID card</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];	
		//CopEnter - Driver Seat		
		life_actions = life_actions + [player addAction[localize "STR_pAct_DriverSeat",life_fnc_copEnter,"driver",200,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']];		
		//CopEnter - Passenger Seat		
		life_actions = life_actions + [player addAction[localize "STR_pAct_PassengerSeat",life_fnc_copEnter,"passenger",100,false,false,"",'!isNull cursorTarget && ((cursorTarget isKindOf "Car")||(cursorTarget isKindOf "Air")||(cursorTarget isKindOf "Ship")) && (locked cursorTarget) != 0 && cursorTarget distance player < 3.5']]; 		
		//CopEnter - Exit
		life_actions = life_actions + [player addAction[localize "STR_pAct_GoOut",life_fnc_copEnter,"exit",100,false,false,"",'(vehicle player != player) && (locked(vehicle player)==2)']];
		//sitting
        life_actions pushBack (player addAction["<t color='#0099FF'>Otur</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
	};
	//EMS
    case independent: { 
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Show badge</t>",{[player, switch (playerSide) do {case west:{call life_coplevel}; case independent:{call life_medicLevel}; case east:{call life_adaclevel};},([] call life_fnc_DienstausweisLizenzen)] remoteExec ["life_fnc_DienstausweisZeigen",cursorObject];},"",1,false,true,"",' playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" ']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>Show Identity Card</t>",{[player] remoteExec ["life_fnc_persozeigen",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID</t>",{[player,0] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false])']];
		life_actions = life_actions + [player addAction["<t color='#00FF00'>View ID card</t>",{[player,1] remoteExecCall ["life_fnc_PersoZeigenAnfordern",cursorObject];},"",1,false,true,"",'!isNull cursorTarget && (player distance cursorTarget) < 3  && cursorTarget isKindOf "Man" && isPlayer cursorObject && (cursorObject getVariable ["restrained",false]) && (side cursorObject in [east,west,independent])']];
		//sitting
        life_actions pushBack (player addAction["<t color='#0099FF'>Otur</t>",{[cursorObject,player] execVM "scripts\sitdown.sqf"},true,1,true,true,"""",'player distance cursorObject < 3 && {([str cursorObject,"bench"] call KRON_StrInStr || [str cursorObject,"chair"] call KRON_StrInStr)} ']);
	};
};

life_actions pushBack (player addAction["<t color = '#D660D6'>Put on Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' !life_seatbelt && vehicle player != player ']);
life_actions pushBack (player addAction["<t color = '#D660D6'>Remove Seatbelt</t>",life_fnc_seatbelt,"",7,false,false,"",' life_seatbelt && vehicle player != player ']);

[] spawn {
	waitUntil {!isNil "life_adminlevel"};
	if ((call life_adminlevel) > 0) then {life_actions = life_actions + [player addAction["<t color='#FF0000'>Show server team badge</t>",{hint format["You showt %3 (%1, %2) your server team badge.",getPlayerUID cursorObject, side cursorObject, name cursorObject]; [getPlayerUID player,profileName] remoteExec ["life_fnc_ServerteamZeigen",cursorObject];},"",0,false,false,"",'(call life_adminlevel) > 0 && (isPlayer cursorObject) && (alive cursorObject) && cursorObject isKindOf "Man"']];};
};

life_actions = life_actions + [player addAction["Hide badges",{("rsc_Serverteamausweis" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; ("dienstausweis" call BIS_fnc_rscLayer) cutText ["","PLAIN"]; ("perso" call BIS_fnc_rscLayer) cutText ["","PLAIN"];},"",1,false,true,"",'(!(isNull (uiNameSpace getVariable ["ui_Personalausweis",displayNull])) || !(isNull (uiNameSpace getVariable ["ui_Dienstausweis",displayNull])) || !(isNull (uiNameSpace getVariable ["ui_Serverteamausweis",displayNull]))) && alive player']];



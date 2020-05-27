scriptName "fn_attackMe";
/*--------------------------------------------------------------------
	Author: Maverick (ofpectag: MAV)
    File: fn_attackMe.sqf

	<Maverick Applications>
    Written by Maverick Applications (www.maverick-apps.de)
    You're not allowed to use this file without permission from the author!
--------------------------------------------------------------------*/
#define __filename "fn_attackMe.sqf"

_time = getNumber(missionConfigFile >> "Maverick_ConvoySidemission" >> "Config" >> "MakePlayersHostileFor");
hint format["Attention: You have engaged a convoy. You are hostile towards all players for %1 minutes. You cannot enter vehicles of friends, only drive them alone.",_time / 60];

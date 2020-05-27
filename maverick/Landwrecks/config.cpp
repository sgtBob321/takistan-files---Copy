/*
	Author: Maverick Applications
	Desc: Altis Life landwreck
*/

//Customize your settings to fit your server setup!
class Maverick_landwrecks {

    //How often (in seconds) should a landwreck spawn, if no wreck is on the map?
    landwreckInterval = 4200; //1800 = 30min

    //Define the possible locations for your landwrecks.
    //getPosATL format -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
	Positions[] = {
        {7470.28,10515.8,0},
        {4055.58,10033,0},
        {1000.34,6750.65,0},
        {10703,2487.12,0}
	};

    //Define the radius, in which the wreck randomly spawns around the given center position
    Radius = 130;

    //Define the possible sets of virtual items the user can loot from the wreck.
	landLoot[] = {
        {"morphine","goldbar","storagesmall","storagebig","apple","redgull"},
        {"tbacon","storagesmall","zipties","tbacon","morphine","redgull","tbacon"},
        {"goldbar","storagebig","codeCracker","redgull","tbacon"},
        {"redgull","tbacon"}
	};

	//What shall be displayed as text to gather the items from the land? (The text of the addAction ingame)
	landLootText = "Retrieve the loot";

    //The message when the user has got all the loot successfully.
    landLootSuccess = "You successfully claimed the crashsite's loot for you!";

    //The message in case something fails, or the user can not carry all the items.
    landLootFail = "You can not carry all the loot. Make some room first!";

	//Define the message, that should appear when a landwreck spawns (broadcasted to all clients).
	SpawnMSG = "MV22 Crash Site\n\nA crashed MV22 has been located! It may contain important items and it has been marked on your map!";

    //Define the message, that should appear when a landwreck disappears after a user looted it (broadcasted to all clients).
	DeleteMSG = "MV22 Crash Site\n\nThe MV22 crash site has been successfully looted and has despawned!";
};
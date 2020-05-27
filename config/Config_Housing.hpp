#define true 1
#define false 0

/*
    price - Cost of the building
    numberCrates - Allowed number of crates
    restrictedPos[] - Same as the old fn_getBuildingPositions. A list of restricted building positions (i.e, to stop spawning outside, or by windows etc)
        default: {}
    canGarage - True if the building can be used as a garage (need to buy ontop)
        default: false
    garageSpawnPos[] - worldToModel position to spawn vehicles, leave {} if canGarage is false.
        default: {}
    garageSpawnDir - Offset to garage direction to spawn at (+-90 etc). It will be used in the manner: getDir _garage + spawnDir
        default: 0
    garageBlacklists[] - List of blacklisted houses for buying garages
        default: {}
*/

class Housing {

    class Takistan {

	// Houses without Garages
        class Land_House_K_2_basehide_EP1 {
            price = 350000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-1,2,2};
        };

        class Land_House_L_3_EP1 {
            price = 600000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2.35,1,2.8};
        };

        class Land_jbad_House5 {
            price = 100000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2.35,1,2.8};
        };

        class Land_House_L_4_EP1 {
            price = 700000;
            numberCrates = 3;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {3,-2,2};
        };

        class Land_House_L_6_EP1 {
            price = 450000;
            numberCrates = 4;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1,2,3};
        };

        class Land_House_L_7_EP1 {
            price = 120000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {0,-2,4};
        };

        class Land_House_L_8_EP1 {
            price = 200000;
            numberCrates = 1;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.5,0,3.2};
        };

        class Land_House_L_9_EP1 {
            price = 100000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {2,1,2};
        };

        class Land_House_K_1_EP1 {
            price = 160000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {-2,0,2.4};
        };

        class Land_House_K_3_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_K_5_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_K_6_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_K_7_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_K_8_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_1_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_1_v2_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_2_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_3_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_4_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };

	class Land_House_C_5_EP1 {
            price = 130000;
            numberCrates = 2;
            restrictedPos[] = {};
            canGarage = false;
            garageSpawnPos[] = {};
            garageSpawnDir = 0;
            garageBlacklists[] = {};
            lightPos[] = {1.2,0.2,2.5};
        };
    };
};

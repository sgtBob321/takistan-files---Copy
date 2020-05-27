/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*/
class VirtualShops {
    //Virtual Shops
    class market {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "";
        items[] = { "rice", "axe", "sugar", "tobacco", "goldcoin", "timber", "cloth", "pepsi", "cocaCola", "monsterEnergy", "doritos", "shittynoodles", "kfc", "easterEggs", "beer", "whiskey", "moonshine", "waterBottle", "rabbit", "apple", "redgull", "tbacon", "pickaxe", "toolkit", "fuelFull", "peach", "storagesmall", "storagebig", "rabbit_raw", "hen_raw", "rooster_raw", "sheep_raw", "goat_raw" };
    };

    class med_market {
        name = "STR_Shops_Market";
        side = "med";
        conditions = "";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "toolkit", "fuelFull", "peach", "defibrillator" };
    };

    class rebel {
        name = "STR_Shops_Rebel";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "zipties" };
    };

	class southgov {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "license_civ_southgov";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "zipties" };
    };

	class northgov {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "license_civ_northgov";
        items[] = { "waterBottle", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "zipties" };
    };

    class raven {
        name = "STR_Shops_Raven";
        side = "civ";
        conditions = "";
        items[] = { "waterBottle", "cprKit", "codeCracker", "rabbit", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "toolkit", "fuelFull", "peach", "boltcutter", "blastingcharge", "zipties", "blindfold" };
    };

	 class bounty {
        name = "STR_Shops_Market";
        side = "civ";
        conditions = "license_civ_bounty";
        items[] = { "waterBottle", "gpstracker", "dogwhistle", "cprKit", "rabbit", "apple", "redgull", "tbacon", "lockpick", "toolkit", "fuelFull", "peach", "zipties", "blindfold" };
    };

    class wongs {
        name = "STR_Shops_Wongs";
        side = "civ";
        conditions = "";
        items[] = { "turtle_soup", "turtle_raw" };
    };

    class coffee {
        name = "STR_Shops_Coffee";
        side = "civ";
        conditions = "";
        items[] = { "coffee", "donuts" };
    };

    class f_station_coffee {
        name = "STR_Shop_Station_Coffee";
        side = "";
        conditions = "";
        items[] = { "coffee", "donuts", "redgull", "toolkit", "fuelFull"};
    };

    class drugdealer {
        name = "STR_Shops_DrugDealer";
        side = "civ";
        conditions = "";
        items[] = { "cocaine_processed", "heroin_processed", "marijuana", "LSD", "ecstacy" };
    };

    class oil {
        name = "STR_Shops_Oil";
        side = "civ";
        conditions = "";
        items[] = { "oil_processed", "pickaxe", "fuelFull" };
    };

    class fishmarket {
        name = "STR_Shops_FishMarket";
        side = "civ";
        conditions = "";
        items[] = { "salema_raw", "salema", "ornate_raw", "ornate", "mackerel_raw", "mackerel", "tuna_raw", "tuna", "mullet_raw", "mullet", "catshark_raw", "catshark" };
    };

    class glass {
        name = "STR_Shops_Glass";
        side = "civ";
        conditions = "";
        items[] = { "glass" };
    };

    class iron  {
        name = "STR_Shops_Minerals";
        side = "civ";
        conditions = "";
        items[] = { "iron_refined", "copper_refined" };
    };

    class diamond {
        name = "STR_Shops_Diamond";
        side = "civ";
        conditions = "";
        items[] = { "diamond_uncut", "diamond_cut" };
    };

    class salt {
        name = "STR_Shops_Salt";
        side = "civ";
        conditions = "";
        items[] = { "salt_refined" };
    };

    class cement {
        name = "STR_Shops_Cement";
        side = "civ";
        conditions = "";
        items[] = { "cement" };
    };

    class gold {
        name = "STR_Shops_Gold";
        side = "civ";
        conditions = "";
        items[] = { "goldbar" };
    };

    class cop {
        name = "STR_Shops_Cop";
        side = "cop";
        conditions = "";
        items[] = { "donuts", "dogwhistle", "gpstracker", "morphine", "panicbutton", "bandages", "handcuffs", "keys", "coffee", "spikeStrip", "waterBottle", "rabbit", "apple", "redgull", "toolkit", "fuelFull", "defusekit", "defibrillator", "cprKit" };
    };
};

/*
*    CLASS:
*        variable = Variable Name
*        displayName = Item Name
*        weight = Item Weight
*        buyPrice = Item Buy Price
*        sellPrice = Item Sell Price
*        illegal = Illegal Item
*        edible = Item Edible (-1 = Disabled)
*        icon = Item Icon
*        processedItem = Processed Item
*/
class VirtualItems {
    //Virtual Items

	class gpstracker {
        variable = "gpstracker";
        displayName = "STR_Item_gpstracker";
        weight = 2;
        buyPrice = 678;
        sellPrice = 369;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_gps.paa";
    };

	class dogwhistle {
        variable = "dogwhistle";
        displayName = "STR_Item_dogwhistle";
        weight = 2;
        buyPrice = 5;
        sellPrice = 1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_dogwhistle.paa";
    };

	class ecstacy {
        variable = "ecstacy";
        displayName = "STR_Item_EcstacyP";
        weight = 1;
        buyPrice = -1;
        sellPrice = 15;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_marijuana.paa";
    };

    class chemicalbarrels {
        variable = "chemicalbarrels";
        displayName = "STR_Item_ChemicalBarrels";
        weight = 10;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_marijuana.paa";
    };

	//Custom Food/Water
    class doritos {
        variable = "doritos";
        displayName = "STR_Doritos";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 10;
        icon = "images\icons\ico_doritos.paa";
    };

	class zipties {
        variable = "zipties";
        displayName = "STR_Item_ZipTies";
        weight = 1;
        buyPrice = 10;
        sellPrice = 2;
        illegal = true;
        edible = -1;
        icon = "images\icons\ziptie.paa";
    };

	class blindfold {
        variable = "blindfold";
        displayName = "STR_Item_Blindfold";
        weight = 1;
        buyPrice = 2;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\blindfold.paa";
    };

	class codeCracker {
        variable = "codeCracker";
        displayName = "STR_Item_codeCracker";
        weight = 2;
        buyPrice = 1500;
        sellPrice = 500;
        illegal = true;
        edible = -1;
        icon = "images\icons\codeCracker.paa";
    };

	class panicbutton {
        variable = "panicbutton";
        displayName = "STR_Item_panicbutton";
        weight = 5;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_panicbutton.paa";
    };

    class pepsi {
        variable = "pepsi";
        displayName = "STR_Pepsi";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 25;
        icon = "images\icons\ico_pepsi.paa";
    };

    class cocacola {
        variable = "cocacola";
        displayName = "STR_CocaCola";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = 50;
        icon = "images\icons\ico_cocacola.paa";
    };

    class monsterEnergy {
        variable = "monsterEnergy";
        displayName = "STR_MonsterEnergy";
        weight = 1;
        buyPrice = 1;
        sellPrice = 1;
        illegal = false;
        edible = 60;
        icon = "images\icons\ico_monsterEnergy.paa";
    };

    class shittynoodles {
        variable = "shittynoodles";
        displayName = "STR_Noddles";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 25;
        icon = "images\icons\ico_shittyNoodles.paa";
    };

    class kfc {
        variable = "kfc";
        displayName = "STR_KFC";
        weight = 1;
        buyPrice = 15;
        sellPrice = 10;
        illegal = false;
        edible = 70;
        icon = "images\icons\ico_kfc.paa";
    };

    class easterEggs {
        variable = "easterEggs";
        displayName = "STR_EasterEggs";
        weight = 1;
        buyPrice = 5;
        sellPrice = 1;
        illegal = false;
        edible = 50;
        icon = "images\icons\ico_easterEggs.paa";
    };


    //end food.drink

    //alchohol
    class beer {
		variable = "beer";
		displayName = "STR_Item_beer";
		weight = 2;
		buyPrice = 5;
		sellPrice = 1;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_beer.paa";
	};

	class whiskey {
		variable = "whiskey";
		displayName = "STR_Item_whiskey";
		weight = 2;
		buyPrice = 20;
		sellPrice = 10;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_whiskey.paa";
	};

	class moonshine {
		variable = "moonshine";
		displayName = "STR_Item_moonshine";
		weight = 2;
		buyPrice = 100;
		sellPrice = 32;
		illegal = false;
		edible = 100;
		icon = "images\icons\ico_moonshine.paa";
	};

    //end alch

    //Misc
    class pickaxe {
        variable = "pickaxe";
        displayName = "STR_Item_Pickaxe";
        weight = 2;
        buyPrice = 40;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_pickaxe.paa";
    };

    class defibrillator {
        variable = "defibrillator";
        displayName = "STR_Item_Defibrillator";
        weight = 4;
        buyPrice = 1000;
        sellPrice = 450;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_defibrillator.paa";
    };

    class toolkit {
        variable = "toolkit";
        displayName = "STR_Item_Toolkit";
        weight = 4;
        buyPrice = 100;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "\a3\weapons_f\items\data\UI\gear_toolkit_ca.paa";
    };

    class fuelEmpty {
        variable = "fuelEmpty";
        displayName = "STR_Item_FuelE";
        weight = 2;
        buyPrice = -1;
        sellPrice = 30;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_fuelEmpty.paa";
    };

    class fuelFull {
        variable = "fuelFull";
        displayName = "STR_Item_FuelF";
        weight = 5;
        buyPrice = 60;
        sellPrice = 50;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_fuel.paa";
    };

    class spikeStrip {
        variable = "spikeStrip";
        displayName = "STR_Item_SpikeStrip";
        weight = 15;
        buyPrice = 2;
        sellPrice = 1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_spikeStrip.paa";
    };

    class lockpick {
        variable = "lockpick";
        displayName = "STR_Item_Lockpick";
        weight = 1;
        buyPrice = 200;
        sellPrice = 75;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_lockpick.paa";
    };

    class goldbar {
        variable = "goldBar";
        displayName = "STR_Item_GoldBar";
        weight = 6;
        buyPrice = -1;
        sellPrice = 4739;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_goldBar.paa";
    };

	class handcuffs {
        variable = "handcuffs";
        displayName = "STR_Item_cuff";
        weight = 1;
        buyPrice = 1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\cuffs.paa";
    };

    class keys {
        variable = "keys";
        displayName = "STR_Item_key";
        weight = 1;
        buyPrice = 2;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\keys.paa";
    };

	class cprKit {
        variable = "cprKit";
        displayName = "STR_Item_CPRMediKit";
        weight = 5;
        buyPrice = 10;
        sellPrice = 5;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_defib.paa";
    };

	class morphine {
        variable = "morphine";
        displayName = "STR_Item_Morphine";
        weight = 2;
        buyPrice = 500;
        sellPrice = 300;
        illegal = true;
        edible = -1;
        icon = "images\icons\Morphine.paa";
    };

    class bandages {
        variable = "bandages";
        displayName = "STR_Item_Bandages";
        weight = 2;
        buyPrice = 20;
        sellPrice = 10;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_bandages.paa";
    };

    class blastingcharge {
        variable = "blastingCharge";
        displayName = "STR_Item_BCharge";
        weight = 15;
        buyPrice = 3500;
        sellPrice = 1000;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_blastingCharge.paa";
    };

    class boltcutter {
        variable = "boltCutter";
        displayName = "STR_Item_BCutter";
        weight = 5;
        buyPrice = 70;
        sellPrice = 10;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_boltCutter.paa";
    };

    class defusekit {
        variable = "defuseKit";
        displayName = "STR_Item_DefuseKit";
        weight = 2;
        buyPrice = 3;
        sellPrice = 2;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_defuseKit.paa";
    };

    class storagesmall {
        variable = "storageSmall";
        displayName = "STR_Item_StorageBS";
        weight = 5;
        buyPrice = 7500;
        sellPrice = 5000;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_storageSmall.paa";
    };

    class storagebig {
        variable = "storageBig";
        displayName = "STR_Item_StorageBL";
        weight = 10;
        buyPrice = 15000;
        sellPrice = 12500;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_storageBig.paa";
    };

    //Mined Items
    class oil_unprocessed {
        variable = "oilUnprocessed";
        displayName = "STR_Item_OilU";
        weight = 7;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_oilUnprocessed.paa";
    };

    class oil_processed {
        variable = "oilProcessed";
        displayName = "STR_Item_OilP";
        weight = 6;
        buyPrice = -1;
        sellPrice = 33;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_oilProcessed.paa";
    };

    class copper_unrefined {
        variable = "copperUnrefined";
        displayName = "STR_Item_CopperOre";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_copperOre.paa";
    };

    class copper_refined {
        variable = "copperRefined";
        displayName = "STR_Item_CopperIngot";
        weight = 3;
        buyPrice = -1;
        sellPrice = 4;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_copper.paa";
    };

    class iron_unrefined {
        variable = "ironUnrefined";
        displayName = "STR_Item_IronOre";
        weight = 5;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_ironOre.paa";
    };

    class iron_refined {
        variable = "ironRefined";
        displayName = "STR_Item_IronIngot";
        weight = 1;
        buyPrice = -1;
        sellPrice = 83;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_iron.paa";
    };

    class salt_unrefined {
        variable = "saltUnrefined";
        displayName = "STR_Item_Salt";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_saltUnprocessed.paa";
    };

    class salt_refined {
        variable = "saltRefined";
        displayName = "STR_Item_SaltR";
        weight = 1;
        buyPrice = -1;
        sellPrice = 280;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_saltProcessed.paa";
    };

    class sand {
        variable = "sand";
        displayName = "STR_Item_Sand";
        weight = 3;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_sand.paa";
    };

    class glass {
        variable = "glass";
        displayName = "STR_Item_Glass";
        weight = 8;
        buyPrice = -1;
        sellPrice = 20;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_glass.paa";
    };

    class diamond_uncut {
        variable = "diamondUncut";
        displayName = "STR_Item_DiamondU";
        weight = 16;
        buyPrice = -1;
        sellPrice = 750;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_diamondUncut.paa";
    };

    class diamond_cut {
        variable = "diamondCut";
        displayName = "STR_Item_DiamondC";
        weight = 4;
        buyPrice = -1;
        sellPrice = 289;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_diamondCut.paa";
    };

    class rock {
        variable = "rock";
        displayName = "STR_Item_Rock";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_rock.paa";
    };

    class cement {
        variable = "cement";
        displayName = "STR_Item_CementBag";
        weight = 1;
        buyPrice = -1;
        sellPrice = 6;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_cement.paa";
    };

    //Drugs
    class heroin_unprocessed {
        variable = "heroinUnprocessed";
        displayName = "STR_Item_HeroinU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_heroinUnprocessed.paa";
        processedItem = "heroin_processed";
    };

    class heroin_processed {
        variable = "heroinProcessed";
        displayName = "STR_Item_HeroinP";
        weight = 2;
        buyPrice = 56;
        sellPrice = 46;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_heroinProcessed.paa";
    };

    class cannabis {
        variable = "cannabis";
        displayName = "STR_Item_Cannabis";
        weight = 4;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cannabis.paa";
        processedItem = "marijuana";
    };

    class marijuana {
        variable = "marijuana";
        displayName = "STR_Item_Marijuana";
        weight = 3;
        buyPrice = 46;
        sellPrice = 36;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_marijuana.paa";
    };

    class cocaine_unprocessed {
        variable = "cocaineUnprocessed";
        displayName = "STR_Item_CocaineU";
        weight = 6;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cocaineUnprocessed.paa";
        processedItem = "cocaine_processed";
    };

    class cocaine_processed {
        variable = "cocaineProcessed";
        displayName = "STR_Item_CocaineP";
        weight = 4;
        buyPrice = -1;
        sellPrice = 76;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_cocaineProcessed.paa";
    };

    //Drink
    class redgull {
        variable = "redgull";
        displayName = "STR_Item_RedGull";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_redgull.paa";
    };

    class coffee {
        variable = "coffee";
        displayName = "STR_Item_Coffee";
        weight = 1;
        buyPrice = 4;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_coffee.paa";
    };

    class waterBottle {
        variable = "waterBottle";
        displayName = "STR_Item_WaterBottle";
        weight = 1;
        buyPrice = 3;
        sellPrice = 1;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_waterBottle.paa";
    };

    //Food
    class apple {
        variable = "apple";
        displayName = "STR_Item_Apple";
        weight = 2;
        buyPrice = 8;
        sellPrice = 6;
        illegal = false;
        edible = 10;
        icon = "images\icons\ico_apple.paa";
    };

    class peach {
        variable = "peach";
        displayName = "STR_Item_Peach";
        weight = 1;
        buyPrice = 8;
        sellPrice = 7;
        illegal = false;
        edible = 10;
        icon = "images\icons\ico_peach.paa";
    };

    class tbacon {
        variable = "tbacon";
        displayName = "STR_Item_TBacon";
        weight = 1;
        buyPrice = 4;
        sellPrice = 3;
        illegal = false;
        edible = 40;
        icon = "images\icons\ico_tBacon.paa";
    };

    class donuts {
        variable = "donuts";
        displayName = "STR_Item_Donuts";
        weight = 1;
        buyPrice = 2;
        sellPrice = 1;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_donuts.paa";
    };

    class rabbit_raw {
        variable = "rabbitRaw";
        displayName = "STR_Item_RabbitRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_rabbitRaw.paa";
    };

    class rabbit {
        variable = "rabbit";
        displayName = "STR_Item_Rabbit";
        weight = 1;
        buyPrice = 15;
        sellPrice = 13;
        illegal = false;
        edible = 20;
        icon = "images\icons\ico_rabbit.paa";
    };

    class salema_raw {
        variable = "salemaRaw";
        displayName = "STR_Item_SalemaRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 45;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_salemaRaw.paa";
    };

    class salema {
        variable = "salema";
        displayName = "STR_Item_Salema";
        weight = 8;
        buyPrice = 75;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class ornate_raw {
        variable = "ornateRaw";
        displayName = "STR_Item_OrnateRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 55;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_ornateRaw.paa";
    };

    class ornate {
        variable = "ornate";
        displayName = "STR_Item_Ornate";
        weight = 8;
        buyPrice = 175;
        sellPrice = 55;
        illegal = false;
        edible = 25;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class mackerel_raw {
        variable = "mackerelRaw";
        displayName = "STR_Item_MackerelRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 55;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_mackerelRaw.paa";
    };

    class mackerel {
        variable = "mackerel";
        displayName = "STR_Item_Mackerel";
        weight = 8;
        buyPrice = 250;
        sellPrice = 55;
        illegal = false;
        edible = 30;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class tuna_raw {
        variable = "tunaRaw";
        displayName = "STR_Item_TunaRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 55;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_tunaRaw.paa";
    };

    class tuna {
        variable = "tuna";
        displayName = "STR_Item_Tuna";
        weight = 8;
        buyPrice = 125;
        sellPrice = 55;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class mullet_raw {
        variable = "mulletRaw";
        displayName = "STR_Item_MulletRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 55;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_mulletRaw.paa";
    };

    class mullet {
        variable = "mullet";
        displayName = "STR_Item_Mullet";
        weight = 8;
        buyPrice = 400;
        sellPrice = 55;
        illegal = false;
        edible = 80;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class catshark_raw {
        variable = "catsharkRaw";
        displayName = "STR_Item_CatSharkRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 300;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_catsharkRaw.paa";
    };

    class catshark {
        variable = "catshark";
        displayName = "STR_Item_CatShark";
        weight = 8;
        buyPrice = 750;
        sellPrice = 55;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_cookedFish.paa";
    };

    class turtle_raw {
        variable = "turtleRaw";
        displayName = "STR_Item_TurtleRaw";
        weight = 8;
        buyPrice = -1;
        sellPrice = 100;
        illegal = true;
        edible = -1;
        icon = "images\icons\ico_turtleRaw.paa";
    };

    class turtle_soup {
        variable = "turtleSoup";
        displayName = "STR_Item_TurtleSoup";
        weight = 2;
        buyPrice = 100;
        sellPrice = 55;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_turtleSoup.paa";
    };

    class hen_raw {
        variable = "henRaw";
        displayName = "STR_Item_HenRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_wholeChickenRaw.paa";
    };

    class hen {
        variable = "hen";
        displayName = "STR_Item_Hen";
        weight = 1;
        buyPrice = 115;
        sellPrice = 85;
        illegal = false;
        edible = 65;
        icon = "images\icons\ico_wholeChicken.paa";
    };

    class rooster_raw {
        variable = "roosterRaw";
        displayName = "STR_Item_RoosterRaw";
        weight = 1;
        buyPrice = -1;
        sellPrice = 65;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_chickenDrumstickRaw.paa";
    };

    class rooster {
        variable = "rooster";
        displayName = "STR_Item_Rooster";
        weight = 115;
        buyPrice = 90;
        sellPrice = 85;
        illegal = false;
        edible = 45;
        icon = "images\icons\ico_chickenDrumstick.paa";
    };

    class sheep_raw {
        variable = "sheepRaw";
        displayName = "STR_Item_SheepRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 95;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_lambChopRaw.paa";
    };

    class sheep {
        variable = "sheep";
        displayName = "STR_Item_Sheep";
        weight = 2;
        buyPrice = 155;
        sellPrice = 115;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_lambChop.paa";
    };

    class goat_raw {
        variable = "goatRaw";
        displayName = "STR_Item_GoatRaw";
        weight = 2;
        buyPrice = -1;
        sellPrice = 115;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_muttonLegRaw.paa";
    };

    class goat {
        variable = "goat";
        displayName = "STR_Item_Goat";
        weight = 2;
        buyPrice = 175;
        sellPrice = 135;
        illegal = false;
        edible = 100;
        icon = "images\icons\ico_muttonLeg.paa";
    };

	//new resouces
	class sugarU {
		variable = "sugarU";
		displayName = "STR_Item_sugarU";
		weight = 3;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "";
	};

	class sugar {
		variable = "sugar";
		displayName = "STR_Item_sugar";
		weight = 1;
		buyPrice = -1;
		sellPrice = 5;
		illegal = false;
		edible = -1;
		icon = "";
	};

	class tobaccoU {
		variable = "tobaccoU";
		displayName = "STR_Item_tobaccoU";
		weight = 1;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "";
	};

	class tobacco {
		variable = "tobacco";
		displayName = "STR_Item_tobacco";
		weight = 1;
		buyPrice = -1;
		sellPrice = 6;
		illegal = false;
		edible = -1;
		icon = "";
	};

	class riceU {
		variable = "riceU";
		displayName = "STR_Item_RiceU";
		weight = 3;
		buyPrice = -1;
		sellPrice = -1;
		illegal = false;
		edible = -1;
		icon = "";
	};

    class rice {
        variable = "rice";
        displayName = "STR_Item_RiceP";
        weight = 1;
        buyPrice = -1;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        icon = "";
    };

	class yeast {
        variable = "yeast";
        displayName = "STR_Item_YeastU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

	class hops {
        variable = "hops";
        displayName = "STR_Item_HopsU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

	class rye {
        variable = "rye";
        displayName = "STR_Item_RyeU";
        weight = 2;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "";
    };

	//craft items

	class timber {
        variable = "timber";
        displayName = "STR_Item_Timber";
        weight = 1;
        buyPrice = -1;
        sellPrice = 2;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_timber.paa";
    };

    class axe {
        variable = "axe";
        displayName = "STR_Item_axe";
        weight = 2;
        buyPrice = 35;
        sellPrice = 3;
        illegal = false;
        edible = -1;
        icon = "images\icons\ico_axe.paa";
    };

    class pliers {
        variable = "pliers";
        displayName = "STR_Item_pliers";
        weight = 4;
        buyPrice = 8;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\craft\pliers.paa";
	};

	class barrel {
        variable = "barrel";
        displayName = "STR_Item_Barrel";
        weight = 2;
        buyPrice = 100;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\craft\barrel.paa";
	};

	class butt {
        variable = "butt";
        displayName = "STR_Item_Butt";
        weight = 1;
        buyPrice = 160;
        sellPrice = 140;
        illegal = true;
        edible = -1;
        icon = "images\icons\craft\butt.paa";
	};

	class sight {
        variable = "sight";
        displayName = "STR_Item_Sight";
        weight = 2;
        buyPrice = 100;
        sellPrice = 15;
        illegal = true;
        edible = -1;
        icon = "images\icons\craft\sight.paa";
	};

	class trigger {
        variable = "trigger";
        displayName = "STR_Item_Trigger";
        weight = 1;
        buyPrice = -1;
        sellPrice = -1;
        illegal = true;
        edible = -1;
        icon = "images\icons\craft\trigger.paa";
	};

	class engine {
        variable = "engine";
        displayName = "STR_Item_Engine";
        weight = 8;
        buyPrice = -1;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\craft\engine.paa";
	};

	class plans {
        variable = "plans";
        displayName = "STR_Item_Plans";
        weight = 1;
        buyPrice = 460;
        sellPrice = -1;
        illegal = false;
        edible = -1;
        icon = "images\icons\craft\plans.paa";
	};

    class rubberU {
		variable = "rubberU";
		displayName = "STR_Item_rubberu";
		weight = 3;
		buyPrice = 2025;
		sellPrice = 500;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\rubberU.paa";
	};

	class rubber {
		variable = "rubber";
		displayName = "STR_Item_rubber";
		weight = 6;
		buyPrice = 3225;
		sellPrice = 210;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\rubber.paa";
	};

	class goldcoin {
		variable = "goldcoin";
		displayName = "STR_Item_goldcoin";
		weight = 2;
		buyPrice = -1;
		sellPrice = 900;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\goldcoin.paa";
	};

	class nitroamine {
		variable = "nitroamine";
		displayName = "STR_Item_nitroamine";
		weight = 4;
		buyPrice = 1105;
		sellPrice = 150;
		illegal = true;
		edible = -1;
		icon = "images\icons\craft\nitroamine.paa";
	};

	class C4 {
		variable = "C4";
		displayName = "STR_Item_C4";
		weight = 6;
		buyPrice = 1225;
		sellPrice = 650;
		illegal = true;
		edible = -1;
		icon = "images\icons\craft\C4.paa";
	};

	class steel {
		variable = "steel";
		displayName = "STR_Item_steel";
		weight = 4;
		buyPrice = 405;
		sellPrice = 250;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\steel.paa";
	};

	class steelplate {
		variable = "steelplate";
		displayName = "STR_Item_steelplate";
		weight = 6;
		buyPrice = 925;
		sellPrice = 650;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\steelplate.paa";
	};

	class wool {
		variable = "wool";
		displayName = "STR_Item_wool";
		weight = 3;
		buyPrice = 205;
		sellPrice = 80;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\wool.paa";
	};

	class cloth {
		variable = "cloth";
		displayName = "STR_Item_cloth";
		weight = 2;
		buyPrice = 65;
		sellPrice = 20;
		illegal = false;
		edible = -1;
		icon = "images\icons\craft\cloth.paa";
	};

	class sulfur {
		variable = "sulfur";
		displayName = "STR_Item_sulfur";
		weight = 2;
		buyPrice = 325;
		sellPrice = 20;
		illegal = true;
		edible = -1;
		icon = "images\icons\craft\sulfur.paa";
	};

	class gunpowder {
		variable = "gunpowder";
		displayName = "STR_Item_gunpowder";
		weight = 4;
		buyPrice = 805;
		sellPrice = 320;
		illegal = true;
		edible = -1;
		icon = "images\icons\craft\gunpowder.paa";
	};  //craftend
};

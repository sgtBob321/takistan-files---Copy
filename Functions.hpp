class Socket_Reciever {
    tag = "SOCK";
    class SQL_Socket {
        file = "core\session";
        class dataQuery {};
        class insertPlayerInfo {};
        class requestReceived {};
        class syncData {};
        class updatePartial {};
        class updateRequest {};
    };
};

class SpyGlass {
    tag = "SPY";
    class Functions {
        file = "SpyGlass";
        class cookieJar{};
        class notifyAdmins{};
        class observe{};
    };
};

class ADT {
    tag = "ADTC";
    class Jobs
    {
        file = "core\Jobs";
        class confirmStaticJob{};
        class DropTruck{};
        class JobcentreOnload{};
        class joinJob{};
        class JobThread{};
        class openKnobCentre{};
        class SpawnTruck{};    
    };

    class JobRepair
    {
        file = "core\jobs\Repair";
        class repair{};
    };
	
    class JobImpound
    {
        file = "core\jobs\Impound";
        class jobimpound {};
    };
};

class Life_Client_Core {
    tag = "life";

    class Master_Directory {
        file = "core";
        class initCiv {};
        class initCop {};
        class initMedic {};
        class setupActions {};
        class setupEVH {};
        class survival {};
		class checker {};
    };
	
	class phone {
		file = "core\phone";
		class phoneInit {};
		class phoneAdd {};
		class phoneRemove {};
		class phoneRefreshList {};
		class phoneCreateNumber {};
		class phoneCall {};
		class phonePlaySound {};
		class phoneFindPlayer {};
		class phoneMobileEffect {};
		class phoneSetPlayer {};
		class phoneAddCall {};
		class phoneAddCallExtra {};
		class phone {};
		class phoneExtra {};
		class phoneBlock {};
		class phoneChannel {};
		class phonePlayerSearch {};
	};
	
	class Market {
		file = "core\market";
		class openMarketView {};
		class refreshMarketView {};
		class marketShortView {};
		class marketBuy {};
		class marketSell {};
		class marketGetBuyPrice {};
		class marketGetSellPrice {};
		class marketconfiguration {};
		class marketReset {};
		class marketChange {};
		class marketGetRow {};
		class marketGetPriceRow {};
		class marketSetPriceRow {};
	};

    class Actions {
        file = "core\actions";
        class arrestAction {};
        class buyLicense {};
        class captureHideout {};
        class catchFish {};
        class dpFinish {};
        class dropFishingNet {};
        class escortAction {};
        class gather {};
        class getDPMission {};
        class gutAnimal {};
        class healHospital {};
        class impoundAction {};
        class mine {};
        class newsBroadcast {};
        class packupSpikes {};
        class pickupItem {};
        class pickupMoney {};
        class postBail {};
        class processAction {};
        class pulloutAction {};
        class putInCar {};
        class removeContainer {};
        class repairTruck {};
        class restrainAction {};
        class robAction {};
        class searchAction {};
        class searchVehAction {};
        class seizePlayerAction {};
        class serviceChopper {};
        class stopEscorting {};
        class storeVehicle {};
        class surrender {};
        class ticketAction {};
        class unrestrain {};
		class crushAction {};
		class pickupItem1 {};
		class suicideBomb {};
		class gpsTracker {};
    };

    class Admin {
        file = "core\admin";
        class adminCompensate {};
        class adminDebugCon {};
        class adminFreeze {};
        class admingetID {};
        class adminGodMode {};
        class adminid {};
        class admininfo {};
        class adminMarkers {};
        class adminMenu {};
        class adminQuery {};
        class adminSpectate {};
        class adminTeleport {};
        class adminTpHere {};
    };

    class Civilian {
        file = "core\civilian";
        class civLoadout {};
        class civMarkers {};
        class demoChargeTimer {};
        class freezePlayer {};
        class jail {};
        class jailMe {};
        class knockedOut {};
        class knockoutAction {};
        class removeLicenses {};
        class robPerson {};
        class robReceive {};
        class tazed {};
		class zoneCreator {};
		class slotSpin {};
		class slotmachine {};
    };

    class Config {
        file = "core\config";
        class houseConfig {};
        class itemWeight {};
        class vehicleAnimate {};
        class vehicleWeightCfg {};
    };
	
	//CUSTOM BELOW
	
	class Loadouts {
  	    file = "core\Loadouts";
  		class deleteLoadout {};
  		class loadLoadout {};
  		class loadoutMenu {};
  		class saveLoadout {};
  	};
	
	class dog {
      file = "scripts\dog";
			class activateDog {};
    };
	
	class drugs
	{
		file = "scripts\drugs";
		class Cocaine {};
		class Heroin {};
		class drinkbeer {};
		class drinkwhiskey {};
		class drinkmoonshine {};
		class weed {};
		class addicted {};
	};
	
	class Modshop
	{
		file = "core\modshop";
		class modShopClose {};
		class modShopInit {};
		class modShopSave {};
		class modShopUpdate {};
	};
	
	class Lumbering {
      file = "core\lumbering";
      class gatherAction;
    };
	
	class BountyHunters {
    	file = "core\BountyHunters";
    	class bountyAddMenu {};
   		class bountyAddP {};
    	class bountyBuy {};
    	class bountyGrab {};
    	class bountyHunterReceive {};
    	class bountyInfo {};
    	class bountyKill {};
    	class bountyList {};
    	class bountyMenu {};
    	class markers {};
	};
	
	class autosave
	{
	   file = "scripts\autosave";
	   class autoSaveInv {};
	};
	
	class CivTieing {
		file = "core\civilian\CivTieing";
		class gagAction {};					
		class gagged {};
		class removeGagAction {};
		class tieing {};
		class tieingAction {};
		class tieingActionb {};
		class tieingb {};
		class untie {};
		class untieb {};
	};
	
	class Crafting
	{
		file ="core\craft";
		class craft {};
		class craft_update {};
		class craft_updateFilter {};
		class craftAction {};
		class craftCfg {};
	};
	
	class CivMission {
        file = "core\civilian\Missions";
        class civMissionStart {};
        class civMissionFinish {};
    };
	
	class CopMission {
        file = "core\cop\Missions";
        class missionStart {};
        class missionFinish {};
    };
	
	class CopPlaceables	{  
		file = "core\cop\placeables";  
		class placeablesInit {};  
		class placeablesMenu {};  
		class placeablesRemoveAll {};  
		class placeablePlace {};  
		class placeableCancel {};  
		class placeablesPlaceComplete {};  
	};
	
	//ID SYSTEM
	class Carter_System
	{
		file = "felixvonstudsinske\System";
		class ArrayIndexErhalten {};
		class ENS {};
		class ENS_Hint {};
	};	
	class Personalausweis
	{
		file = "felixvonstudsinske\Personalausweis";
		class DienstausweisLizenzen {};
		class PersoErstellen {};
		class PersoErstellenOK {};
		class PersoZeigenAnfordern {};
		class PersoErstellenFortfahren {};
		class PersoPruefenSchaltjahr {};
		class PersoWohnortAuswahl {};
		class PersoStrasseAuswahl {};
		class PersoErstellenBildwahl {};
		class PersoGeschlechtswahl {};
		class PersoAbfrageRueckgabe {};
		class PersoAusgewaehlt {};
		class PersoAusweisnummer {};
		class PersoSucheTag {};
		class PersoKonvertiereSpielername {};
		class PersoZeigen {};
		class Dienstausweisnummer {};
		class DienstausweisRangrueckgabe {};
		class PersoLBWahl {};
		class PersoNameAendern {};
		class PersoLoeschen {};
		class PersoErstelleMobilfunknummer {};
		class PersoGeneriereAdminausweis {};
		class DienstausweisZeigen {};
		class SpielerBekanntHandle {};
		class ServerteamZeigen {};
	};

    class Cop {
        file = "core\cop";
        class bountyReceive {};
        class containerInvSearch {};
        class copInteractionMenu {};
        class copLights {};
        class copLoadout {};
        class copMarkers {};
        class copSearch {};
        class copSiren {};
        class doorAnimate {};
        class fedCamDisplay {};
        class licenseCheck {};
        class licensesRead {};
        class questionDealer {};
        class radar {};
        class repairDoor {};
        class restrain {};
        class searchClient {};
        class seizeClient {};
        class sirenLights {};
        class spikeStripEffect {};
        class ticketGive {};
        class ticketPaid {};
        class ticketPay {};
        class ticketPrompt {};
        class vehInvSearch {};
        class wantedGrab {};
		class backup {};
		class callBackup {};
		class seizeObjects {};
		class showArrestDialog {};
		class arrestDialog_Arrest {};
		class openThreatMenu {};
        class changeThreat {};
		class removeWeaponAction {};
		class comRemoval {};
		class comRemovalWait {};
		class copEnter {};
    };

    class Dialog_Controls {
        file = "dialog\function";
        class bankDeposit {};
        class bankTransfer {};
        class bankWithdraw {};
        class displayHandler {};
        class gangBankResponse {};
        class garageLBChange {};
        class impoundMenu {};
        class progressBar {};
        class safeFix {};
        class safeInventory {};
        class safeOpen {};
        class safeTake {};
        class sellGarage {};
        class setMapPosition {};
        class spawnConfirm {};
        class spawnMenu {};
        class spawnPointCfg {};
        class spawnPointSelected {};
        class unimpound {};
        class useGangBank {};
        class vehicleGarage {};
        class wireTransfer {};
		class insureCar {};
    };

    class Functions {
        file = "core\functions";
        class AAN {};
        class accType {};
        class actionKeyHandler {};
        class animSync {};
        class calWeightDiff {};
        class checkMap {};
        class clearVehicleAmmo {};
        class dropItems {};
        class escInterupt {};
        class fetchCfgDetails {};
        class fetchDeadGear {};
        class fetchVehInfo {};
        class isDamaged {};
        class giveDiff {};
        class handleDamage {};
        class handleInv {};
        class handleItem {};
        class hideObj {};
        class hudSetup {};
        class hudUpdate {};
        class inventoryClosed {};
        class inventoryOpened {};
        class isUIDActive {};
        class keyHandler {};
        class loadDeadGear {};
        class loadGear {};
        class nearATM {};
        class nearestDoor {};
        class nearUnits {};
        class numberText {};
        class onFired {};
        class onTakeItem {};
        class playerSkins {};
        class playerTags {};
        class postNewsBroadcast {};
        class pullOutVeh {};
        class pushObject {};
        class receiveItem {};
        class receiveMoney {};
        class revealObjects {};
        class saveGear {};
        class simDisable {};
        class stripDownPlayer {};
        class teleport {};
        class whereAmI {};
        class moveIn {};
		class seatbelt {};
		class notificationSystem {};
		class robstore {};
		class robBank {};
		class robCasino {};
		class randomRound {};
		class initPayChecks {};
		class robATM {};
		class forceHolster {};
		class pickupItems {};
		class robShops {};
    };

    class AApps_gangs {
        file = "core\gangs";
        class gang_openDialog {};
        class gang_initFunctions {};
        class gang_leave {};
        class gang_buyrent {};
        class gang_desc {};
        class gang_changegroup {};
        class gang_permission {};
        class gang_findGang {};
        class gang_settings {};
        class gang_kickinvite {};
        class gang_hqlist {};
        class gang_hqupgrades {};
		class areaCapture {};
    };

    class Housing {
        file = "core\housing";
        class buyHouse {};
        class buyHouseGarage {};
        class containerMenu {};
        class copBreakDoor {};
        class copHouseOwner {};
        class garageRefund {};
        class getBuildingPositions {};
        class houseMenu {};
        class initHouses {};
        class lightHouse {};
        class lightHouseAction {};
        class lockHouse {};
        class lockupHouse {};
        class placeContainer {};
        class PlayerInBuilding {};
        class raidHouse {};
        class sellHouse {};
        class sellHouseGarage {};
    };

    class Items {
        file = "core\items";
        class blastingCharge {};
        class boltcutter {};
        class defuseKit {};
        class flashbang {};
        class jerrycanRefuel {};
        class jerryRefuel {};
        class lockpick {};
        class placestorage {};
        class spikeStrip {};
        class storageBox {};
		class bandages {};
		class morphine {};
		class cprkit {};
    };

    class Medical_System {
        file = "core\medical";
        class deathScreen {};
        class medicLights {};
        class medicLoadout {};
        class medicMarkers {};
        class medicRequest {};
        class medicSiren {};
        class medicSirenLights {};
        class onPlayerKilled {};
        class onPlayerRespawn {};
        class requestMedic {};
        class respawned {};
        class revived {};
        class revivePlayer {};
		class newLifeRule {};
		class cprrevived {};
		class deadBloodEffect {};
    };

    class Network {
        file = "core\functions\network";
        class broadcast {};
        class corpse {};
        class jumpFnc {};
        class say3D {};
        class setFuel {};
        class soundDevice {};
    };

    class Player_Menu {
        file = "core\pmenu";
        class cellphone {};
        class giveItem {};
        class giveMoney {};
        class keyDrop {};
        class keyGive {};
        class keyMenu {};
        class p_openMenu {};
        class p_updateMenu {};
        class pardon {};
        class removeItem {};
        class s_onChar {};
        class s_onCheckedChange {};
        class s_onSliderChange {};
        class settingsMenu {};
        class updateViewDistance {};
        class useItem {};
        class wantedAddP {};
        class wantedInfo {};
        class wantedList {};
        class wantedMenu {};
    };

    class Shops {
        file = "core\shops";
        class 3dPreviewDisplay {};
        class 3dPreviewExit {};
        class 3dPreviewInit {};
        class atmMenu {};
        class buyClothes {};
        class changeClothes {};
        class chopShopMenu {};
        class chopShopSelection {};
        class chopShopSell {};
        class clothingFilter {};
        class clothingMenu {};
        class fuelLBchange {};
        class fuelStatOpen {};
        class levelCheck {};
        class vehicleShopBuy {};
        class vehicleShopLBChange {};
        class vehicleShopMenu {};
        class virt_buy {};
        class virt_menu {};
        class virt_sell {};
        class virt_update {};
        class weaponShopAccs {};
        class weaponShopBuySell {};
        class weaponShopFilter {};
        class weaponShopMags {};
        class weaponShopMenu {};
        class weaponShopSelection {};
		class blackjack {};
		class BJbet {};
		class BJhit {};
		class BJstay {};
    };

    class Vehicle {
        file = "core\vehicle";
        class addVehicle2Chain {};
        class colorVehicle {};
        class deviceMine {};
        class FuelRefuelcar {};
        class fuelStore {};
        class fuelSupply {};
        class lockVehicle {};
        class openInventory {};
        class vehiclecolor3DRefresh {};
        class vehicleOwners {};
        class vehicleWeight {};
        class vehInventory {};
        class vehStoreItem {};
        class vehTakeItem {};
        class vInteractionMenu {};
    };
};

class Toxic_Functions {
		tag = "Toxic";
	class Toxic_Main {
        file = "core\Toxic";
        class repairSystem {};
        class repairJobMenu {};
    };
};
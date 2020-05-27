class VehiclePurchased {
    expToAdd = round(5 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Vehicle Purchased";
};

class ItemProcessed {
    expToAdd = round(10 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Items Processed";
};

class ItemGathered {
    expToAdd = round(5 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Items Gathered";
};

class VehicleLockpicked {
    expToAdd = round(5 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Vehicle Lockpicked";
};

class PassiveXP {
    expToAdd = round(20 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Thank you for playing!";
};

class AnimalGutted {
    expToAdd = round(15 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Animal Gutted";
};

class buyHouse {
    expToAdd = 200;
	message = "Property Purchasing";
};

class EventReward {
    expToAdd = round(100 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Event Reward!";
};

class ShopRobbed {
    expToAdd = round(50 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Gas Station Robbed!";
};

class VehicleRepaired {
    expToAdd = round(5 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Vehicle Repaired";
};

class TicketPlayer {
    expToAdd = round(10 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Player Ticketed";
};

class ArrestedCriminal {
    expToAdd = round(25 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Arrested a criminal";
};

class Impounded {
    expToAdd = round(10 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Keeping the streets clean!";
};

class RevivedPlayer {
    expToAdd = round(25 * (missionNamespace getVariable ["mav_ttm_var_experienceMultiplier", 1]));
	message = "Player revived";
};

class robshop {
    expToAdd = 200;
	message = "Armed Robbery";
};

class robbank {
    expToAdd = 800;
	message = "Armed Bank Robbery";
};

class copMission {
    expToAdd = 135;
	message = "Police Mission";
};

class civMission {
    expToAdd = 145;
	message = "Mission Complete";
};

class relic {
    expToAdd = 1375;
	message = "Relic Quest Complete!";
};

class relic2 {
    expToAdd = 1900;
	message = "Relic Quest 2 Complete!";
};

class relic3 {
    expToAdd = 2300;
	message = "Relic Quest 3 Complete!";
};

class hideBody {
    expToAdd = 70;
	message = "Body Hidden";
};

class britannia {
    expToAdd = 150;
	message = "Thankyou!";
};

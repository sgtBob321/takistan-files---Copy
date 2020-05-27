/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "RH_m9", "", 6500, 500, "" },
            { "RH_m9c", "", 6500, 500, "" },
            { "RH_python", "", 6500, 500, "" },
            { "RH_cz75", "", 6500, 500, "" },
            { "RH_fnp45", "", 6500, 500, "" }, 
			{ "RH_gsh18", "", 6500, 500, "" },
			{ "RH_mp412", "", 6500, 500, "" },
			{ "RH_tt33", "", 6500, 500, "" },
            { "RH_g17", "", 6500, 500, "" },
			{ "hlc_smg_mp5a4", "", 42000, 2000, "" }
        };
        mags[] = {
            { "RH_15Rnd_9x19_M9", "", 125, 60, "" },
            { "RH_6Rnd_357_Mag", "", 150, 75, "" },
            { "RH_16Rnd_9x19_CZ", "", 200, 100, "" },
            { "RH_15Rnd_45cal_fnp", "", 250, 125, "" },
            { "RH_17Rnd_9x19_g17", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 1000, 500, "" },
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };
	
	class bounty_gun {
        name = "Gun Shop";
        side = "civ";
        conditions = "license_civ_bounty";
        items[] = {
			{ "tf_anprc148jem", "", 150, 75, "" },
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "CSW_M26C", "", 200, 500, "" },
            { "rhsusf_weap_glock17g4", "", 200, 100, "" },
			{ "hlc_rifle_M4", "", 200, 100, "" }
			
        };
        mags[] = {
            { "hlc_30rnd_556x45_EPR", "", 200, 100, "" },
            { "CSW_Taser_Probe_Mag", "", 250, 125, "" },
            { "rhsusf_mag_17Rnd_9x19_JHP", "", 250, 125, "" }
        };
        accs[] = {
            { "hlc_muzzle_SF3P_556", "", 1000, 500, "" },
			{ "KA_ANPEQ15_Black_IR", "", 1000, 500, "" },
			{ "hlc_optic_HensoldtZO_lo_Docter_2D", "", 1000, 500, "" },
            { "HLC_bipod_UTGShooters", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Blackmarket";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			//weapons
            { "arifle_SDAR_F", "", 85000, -1, "" },
            { "hlc_rifle_ak74", "", 48000, -1, "" },
            { "hlc_rifle_akm", "", 48000, -1, "" },
            { "hlc_rifle_SLRchopmod", "", 50000, -1, "" },
            { "hlc_rifle_falosw", "", 78000, -1, "" },
            { "hlc_rifle_M1903A1_unertl", "", 95000, -1, "" },
            { "hlc_rifle_ACR68_Squant", "", 152800, -1, "" },
            { "hlc_rifle_SG550", "", 65000, -1, "" },
            { "hlc_rifle_auga1carb_B", "", 90000, -1, "" },
            { "hlc_rifle_G36C", "", 80000, -1, "" },
            { "hlc_rifle_G36CMLIC", "", 110000, -1, "" },
            { "hlc_rifle_g36KTac", "", 95000, -1, "" },
            { "hlc_rifle_awcovert_BL", "", 153000, -1, "" },
            { "hlc_rifle_awMagnum_OD_ghillie", "", 132000, -1, "" },
            { "hlc_rifle_slr107u", "", 48000, -1, "" },
            { "hlc_rifle_SG551LB", "", 92000, -1, "" },
            { "hlc_rifle_SG551SB", "", 145000, -1, "" },
            { "hlc_rifle_SG553SB", "", 215000, -1, "" }
        };
        mags[] = {
            { "hlc_30Rnd_545x39_B_AK", "", 1500, -1, "" },
            { "hlc_20Rnd_762x51_B_fal", "", 1500, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 1500, -1, "" },
            { "hlc_5rnd_3006_1903", "", 1500, -1, "" },
            { "hlc_30Rnd_762x39_b_ak", "", 1500, -1, "" },
            { "hlc_30rnd_556x45_EPR", "", 1500, -1, "" },
            { "hlc_30rnd_68x43_FMJ", "", 1500, -1, "" },
            { "hlc_30Rnd_556x45_EPR_sg550", "", 1500, -1, "" },
            { "hlc_50rnd_556x45_EPR", "", 1500, -1, "" },
            { "hlc_30Rnd_556x45_B_AUG", "", 1500, -1, "" },
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 1500, -1, "" },
            { "30Rnd_65x39_caseless_mag", "", 1500, -1, "" },
            { "RH_16Rnd_40cal_usp", "", 1500, -1, "" },
            { "hlc_10Rnd_762x51_B_fal", "", 1500, -1, "" },
            { "hlc_200rnd_556x45_M_SAW", "", 1500, -1, "" }
        };
        accs[] = {
            { "hlc_optic_kobra", "", 1000, -1, "" },
            { "HLC_optic_DocterR", "", 1000, -1, "" },
            { "HLC_Optic_PSO1", "", 1000, -1, "" },
            { "HLC_Optic_1p29", "", 1000, -1, "" },
            { "hlc_optic_HensoldtZO_lo_Docter", "", 1000, -1, "" },
            { "hlc_optic_HensoldtZO_Hi", "", 1000, -1, "" },
            { "hlc_optic_HensoldtZO_lo_Docter_2D", "", 1000, -1, "" },
            { "hlc_optic_ZF95Base", "", 1000, -1, "" },
			{ "hlc_optic_LeupoldM3A", "", 1000, -1, "" },
            { "hlc_optic_VOMZ3d", "", 1000, -1, "" },
            { "hlc_optic_suit", "", 1000, -1, "" },
            { "hlc_optic_LRT_m14", "", 1000, -1, "" },
            { "hlc_optic_FNSTANAG4X_550", "", 1000, -1, "" },
            { "hlc_optic_ATACR", "", 1000, -1, "" },
            { "hlc_optic_HensoldtZO_Lo", "", 1000, -1, "" },
            { "HLC_Optic_G36dualoptic35x2d", "", 1000, -1, "" },
            { "HLC_Optic_G36dualoptic35x", "", 1000, -1, "" },
            { "hlc_muzzle_556NATO_rotexiiic_grey", "", 1000, -1, "" },
            { "optic_Holosight_blk_F", "", 1000, -1, "" },
            { "hlc_grip_SAW_Grip1", "", 1000, -1, "" }
        };
    };

    class raven {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Takistan General Store";
        side = "civ";
        conditions = "";
        items[] = {
			{ "tf_fadak_1", "", 150, 75, "" },
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Takistan Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };
	
	//Border Force
	class cop_basic {
        name = "Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 50, 75, "" },
            { "ItemGPS", "", 50, 50, "" },
            { "NVGoggles", "", 50, 1000, "" },
			{ "Oase_ID_Card_Police", "", 10, 5, "" },
			{ "tf_anprc148jem_3", "", 0, 4750, "" }, //Radio
            { "CSW_M26C", "Tazer", 0, 1000, "call life_coplevel >= 1" }, //Tazer
            { "hlc_pistol_P229R_40Enox", "", 7500, 3750, "call life_coplevel >= 2" }, //Pistol
            { "hlc_smg_mp5a4_tac", "", 15000, 3750, "call life_coplevel >= 3" }, //MP5
			{ "hlc_rifle_G36CV", "", 22000, 3750, "call life_coplevel >= 4" }, //Rifle
			{ "hlc_m249_pip4", "", 22000, 3750, "call life_coplevel >= 4" }, //Rifle
			{ "hlc_rifle_awmagnum_BL", "", 22000, 3750, "call life_coplevel >= 4" } //Sniper Rifle
        };
        mags[] = {
            { "CSW_Taser_Probe_Mag", "", 125, 60, "" }, //Tazer Mag
            { "hlc_10Rnd_40SW_B_P229", "", 130, 65, "" }, //Pistol Mag
            { "hlc_30Rnd_9x19_B_MP5", "", 130, 65, "" }, //MP5 Mag
            { "hlc_30rnd_556x45_EPR_G36", "", 250, 125, "" }, //Rifle Mag
			{ "hlc_200rnd_556x45_M_SAW", "", 250, 125, "" }, //Rifle Mag
			{ "hlc_5rnd_300WM_FMJ_AWM", "", 250, 125, "" } //Sniper Rifle Mag
        };
        accs[] = {
			{ "hlc_optic_ATACR", "", 2750, 1375, "call life_coplevel >= 4" },
			{ "hlc_optic_HensoldtZO_Hi_Docter_2D", "", 2750, 1375, "call life_coplevel >= 4" },
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};

/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications.com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_cash";								//--- Cash Variable
	cashSymbol = "£"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc. once items are purchased

	class localization {
		//--- localization for hints etc.
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON.\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT.\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS.";
		msgEmptyShop = 						"Nothing Found...";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items. You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class gun {
			title = "Gun Store"; //--- Title of Shop
			condition = "license_civ_gun"; //--- Condition to meet to access shop
			simple = 0; //--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; //--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				//Handguns
				{"nil", 0, "", "---Handguns---"},
				{"", 8000, "license_civ_gun", ""},
				{"", 8000, "license_civ_gun", ""},
				{"hlc_pistol_P226WestGerman", 8000, "license_civ_gun", ""},
				{"hlc_Pistol_P228", 18000, "license_civ_gun", ""},
				{"hlc_Pistol_M11A1", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P226US", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P226R", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P226R_357", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P226R_40", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P229R_Combat", 18000, "license_civ_gun", ""},
				{"hlc_Pistol_M11A1D", 18000, "license_civ_gun", ""},
				{"hlc_pistol_Mk25D", 18000, "license_civ_gun", ""},
				{"RH_g17", 18000, "license_civ_gun", ""},
				{"RH_m9", 18000, "license_civ_gun", ""},
				{"RH_python", 18000, "license_civ_gun", ""},
				{"RH_cz75", 18000, "license_civ_gun", ""},
				{"RH_kimber_nw", 18000, "license_civ_gun", ""},
				{"RH_mak", 18000, "license_civ_gun", ""},
				{"RH_mp412", 18000, "license_civ_gun", ""},
				{"hlc_pistol_P239_40", 18000, "license_civ_gun", ""},
				//Rifle Guns
				{"nil", 0, "", "---Rifle Guns---"},
				{"rhsusf_weap_MP7A2", 26000, "license_civ_rifle", ""},
				{"hlc_smg_mp5k_PDW", 26000, "license_civ_rifle", ""},
				{"hlc_smg_mp5a2", 26000, "license_civ_rifle", ""},
				{"rhs_weap_m3a1", 26000, "license_civ_rifle", ""},
				{"", 26000, "license_civ_rifle", ""}
			};

			magazines[] = {
					//Pistol Ammo
					{"hlc_13Rnd_9x19_B_P228", 250, "license_civ_gun", ""},
					{"hlc_15Rnd_9x19_B_P226", 250, "license_civ_gun", ""},
					{"hlc_12Rnd_357SIG_B_P226", 250, "license_civ_gun", ""},
					{"hlc_12Rnd_40SW_B_P226", 250, "license_civ_gun", ""},
					{"hlc_10Rnd_357SIG_B_P229", 250, "license_civ_gun", ""},
					{"hlc_8Rnd_40SW_B_P239", 250, "license_civ_gun", ""},
					{"RH_15Rnd_9x19_M9", 250, "license_civ_gun", ""},
					{"RH_6Rnd_357_Mag", 250, "license_civ_gun", ""},
					{"RH_16Rnd_9x19_CZ", 250, "license_civ_gun", ""},
					{"RH_7Rnd_50_AE", 500, "license_civ_gun", ""},
					{"RH_15Rnd_45cal_fnp", 250, "license_civ_gun", ""},
					{"RH_17Rnd_9x19_g17", 250, "license_civ_gun", ""},
					{"RH_7Rnd_45cal_m1911", 250, "license_civ_gun", ""},
					{"RH_6Rnd_44_Mag", 250, "license_civ_gun", ""},
					{"RH_6Rnd_45ACP_Mag", 250, "license_civ_gun", ""},
					{"RH_8Rnd_762_tt33", 250, "license_civ_gun", ""},
					{"RH_15Rnd_9x19_M9", 250, "license_civ_gun", ""},
					{"RH_16Rnd_9x19_CZ", 250, "license_civ_gun", ""},
					{"RH_17Rnd_9x19_g17", 250, "license_civ_gun", ""},
					{"RH_7Rnd_45cal_m1911", 250, "license_civ_gun", ""},
					{"RH_8Rnd_9x18_Mak", 250, "license_civ_gun", ""},
					{"RH_6Rnd_357_Mag", 250, "license_civ_gun", ""},
					{"RH_16Rnd_40cal_usp", 250, "license_civ_gun", ""},
					//Rifle Ammo
					{"rhsgref_30rnd_1143x23_M1911B_SMG", 200, "license_civ_rifle", ""},
					{"hlc_30Rnd_9x19_B_MP5", 200, "license_civ_rifle", ""},
					{"rhsgref_20rnd_765x17_vz61", 200, "license_civ_rifle", ""},
					{"rhsusf_mag_40Rnd_46x30_FMJ", 200, "license_civ_rifle", ""}
				};

			attachments[] = {
					{"optic_KHS_old", 20000, "license_civ_rifle", ""}
				};

			items[] = {
					{"tf_microdagr", 250, "", ""},
					{"tf_fadak_5", 700, "", ""},
					{"FirstAidKit", 750, "", ""}
				};
			};

		class gang
		{
			title = "Gang Armament"; //--- Title of Shop
			condition = "";					 //--- Condition to meet to access shop
			simple = 0;							 //--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20;						 //--- Max Amount of Items in Shopping Cart
			weapons[] = {
					//--- item classname, price, condition, custom display name
					{"hgun_Rook40_F", 15000, "true", ""},
					{"hgun_Pistol_heavy_02_F", 15000, "true", ""},
					{"hgun_ACPC2_F", 15000, "true", ""}
				};
			magazines[] = {
					{"16Rnd_9x21_Mag", 10, "true", ""},
					{"6Rnd_45ACP_Cylinder", 10, "true", ""},
					{"9Rnd_45ACP_Mag", 10, "true", ""},
					{"30Rnd_9x21_Mag", 10, "true", ""}
				};
			attachments[] = {
					{"optic_ACO_grn_smg", 50, "", "Test Scope"},
					{"optic_Arco_blk_F", 50, "", "Test Scope"},
					{"optic_ERCO_blk_F", 50, "", "Test Scope"}
				};
			items[] = {
					{"tf_microdagr", 50, "true", ""},
					{"tf_fadak_5", 50, "true", ""},
					{"Binocular", 50, "", "true"},
					{"NVGoggles", 100, "", "true"},			 //--- NV goggles won't be shown on preview
					{"U_O_GhillieSuit", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};


		class med_basic {
			title = "Medic Store"; //--- Title of Shop
			condition = "call life_mediclevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
					//--- item classname, price, condition, custom display name
					{"CSW_M26C", 100, "call life_mediclevel >= 2", ""},
					{"hlc_smg_mp5a4", 5000, "call life_mediclevel >= 2", ""},
					{"hlc_rifle_mk18mod0", 1500, "call life_mediclevel >= 2", ""}
				};
			magazines[] = {
					{"CSW_Taser_Probe_Mag", 10, "true", "call life_mediclevel >= 2"},
					{"hlc_30Rnd_9x19_B_MP5", 10, "true", "call life_mediclevel >= 2"},
					{"hlc_30rnd_556x45_EPR", 10, "true", "call life_mediclevel >= 2"}
				};
			attachments[] = {
					{"hlc_optic_HensoldtZO_lo_Docter_2D", 50, "call life_mediclevel >= 2", "Scope"},
					{"hlc_muzzle_Agendasix", 50, "call life_mediclevel >= 2", ""},
					{"hlc_acc_Surefiregrip", 50, "call life_mediclevel >= 2", ""},
					{"HLC_optic_DocterR", 50, "call life_mediclevel >= 2", ""},
					{"acc_flashlight", 50, "call life_mediclevel >= 2", "Flash Light"},
					{"hlc_muzzle_556NATO_KAC", 50, "call life_mediclevel >= 2", "Muzzle"}
				};

			items[] = {
				{"tf_microdagr", 50, "call life_mediclevel >= 1", ""},
				{"tf_anprc152_1", 50, "call life_mediclevel >= 1", ""},
				{"Binocular", 50, "call life_mediclevel >= 1", ""},
				{"ItemMap", 50, "call life_mediclevel >= 1", ""},
				{"ItemCompass", 50, "call life_mediclevel >= 1", ""},
				{"ItemWatch", 50, "call life_mediclevel >= 1", ""},
				{"NVGoggles", 100, "call life_mediclevel >= 1", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class rebel {
			title = "Weapons"; //--- Title of Shop
			condition = "license_civ_rebel";
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"", 9000, "license_civ_rebel", "AK47"},
				{"", 1200, "license_civ_rebel", "AK12"},
				{"", 12000, "license_civ_rebel", ""},
				{"", 15000, "license_civ_rebel", ""},
				{"", 15000, "license_civ_rebel", ""},
				{"", 15000, "license_civ_rebel", ""},
				{"", 16500, "license_civ_rebel", ""},
				{"", 16000, "license_civ_rebel", ""},
				{"", 28000, "license_civ_rebel", ""},
				{"", 35000, "license_civ_rebel", ""},
				{"", 17800, "license_civ_rebel", ""},
				{"", 12000, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""},
				{"", 35000, "license_civ_rebel", ""},
				{"", 22000 , "license_civ_rebel", ""},
				{"", 28000, "license_civ_rebel", ""},
				{"", 32000, "license_civ_rebel", ""},
				{"", 40000, "license_civ_rebel", ""},
				{"", 42000, "license_civ_rebel", ""},
				{"", 28000, "license_civ_rebel", ""},
				{"", 48000,"license_civ_rebel", ""},
				{"", 68000, "license_civ_rebel", ""},
				{"", 12000, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""},
				{"", 75000, "license_civ_rebel", ""},
			};

			magazines[] = {
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 100, "license_civ_rebel", ""},
				{"", 22000, "license_civ_rebel", ""}
			};

			attachments[] = {
				{"", 1000, "license_civ_rebel", ""},
				{"", 1500, "license_civ_rebel", ""},
				{"", 5000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1500, "license_civ_rebel", ""},
				{"", 1500, "license_civ_rebel", ""},
				{"", 1500, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 2500, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000, "license_civ_rebel", ""},
				{"", 1000,  "license_civ_rebel", ""},
				{"", 1000,  "license_civ_rebel", ""},
				{"", 1000,  "license_civ_rebel", ""},
				{"", 5000,  "license_civ_rebel", ""},
				{"", 1000,  "license_civ_rebel", ""},
				{"", 2500,  "license_civ_rebel", ""}
			};

			items[] = {
				{"tf_microdagr", 100, "license_civ_rebel", ""},
				{"tf_anprc152_1", 100, "license_civ_rebel", ""},
				{"Binocular", 100, "license_civ_rebel", ""},
				{"ItemMap", 100, "license_civ_rebel", ""},
				{"ItemCompass", 100, "license_civ_rebel", ""},
				{"ItemWatch", 100, "license_civ_rebel", ""},
				{"FirstAidKit", 100, "license_civ_rebel", ""},
				{"NVGoggles", 100, "license_civ_rebel", ""}
			};
		};

		class northgov
		{
			title = "Weapons"; //--- Title of Shop
			condition = "license_civ_northgov";					 //--- Condition to meet to access shop
			simple = 0;							 //--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20;						 //--- Max Amount of Items in Shopping Cart
			weapons[] = {
					//--- item classname, price, condition, custom display name
					{"CSW_M26C", 500, "license_civ_northgov", ""},
					{"hlc_Pistol_M11", 3500, "license_civ_northgov", ""},
					{"hgun_Pistol_heavy_01", 3500, "license_civ_northgov", ""},
					{"rhsusf_weap_MP7A2", 6500, "license_civ_northgov", ""},
					{"hlc_smg_mp5N_tac", 8500, "license_civ_northgov", ""},
					{"hlc_smg_mp5k_PDW", 8500, "license_civ_northgov", ""},
					{"SMG_03C_TR_black", 9500, "license_civ_northgov", ""},
					{"hlc_rifle_sg553RSB_TAC", 13500, "license_civ_northgov", ""},
					{"hlc_wp_mod727", 15500, "license_civ_northgov", ""},
					{"hlc_rifle_psg1", 20000, "license_civ_northgov", ""}
				};
			magazines[] = {
					{"50Rnd_570x28_SMG_03", 10, "license_civ_northgov", ""},
					{"CSW_Taser_Probe_Mag", 10, "license_civ_northgov", ""},
					{"hlc_30Rnd_9x19_B_MP5", 10, "license_civ_northgov", ""},
					{"hlc_30Rnd_9x19_B_MP5", 10, "license_civ_northgov", ""},
					{"hlc_75Rnd_762x39_t_rpk", 10, "license_civ_northgov", ""},
					{"hlc_30Rnd_762x39_t_ak", 10, "license_civ_northgov", ""},
					{"hlc_30rnd_556x45_t_L5", 10, "license_civ_northgov", ""},
					{"hlc_20rnd_762x51_b_G3", 10, "license_civ_northgov", ""},
					{"hlc_13Rnd_9x19_B_P228", 10, "license_civ_northgov", ""},
					{"rhsusf_mag_40Rnd_46x30_FMJ", 10, "license_civ_northgov", ""}
				};
			attachments[] = {
					{"optic_ACO_grn", 50, "license_civ_northgov", ""},
					{"optic_MRCO", 50, "license_civ_northgov", ""},
					{"rhsusf_acc_eotech_552", 50, "license_civ_northgov", ""},
					{"rhsusf_acc_RM05", 50, "license_civ_northgov", ""},
					{"rhsusf_acc_T1_low", 50, "license_civ_northgov", ""},
					{"CUP_optic_CompM2_OD", 50, "license_civ_northgov", ""}
				};
			items[] = {
					{"tf_microdagr", 50, "license_civ_northgov", ""},
					{"tf_anprc154_1", 50, "license_civ_northgov", ""},
					{"Binocular", 50, "", "license_civ_northgov"},
					{"NVGoggles", 100, "", "license_civ_northgov"},			 //--- NV goggles won't be shown on preview
					{"U_O_GhillieSuit", 100, "license_civ_northgov", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class southgov {
			title = "Weapons"; //--- Title of Shop
			condition = "license_civ_southgov";
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"rhs_weap_makarov_pm", 9000, "license_civ_southgov", ""},
				{"rhs_weap_pya", 9000, "license_civ_southgov", ""},
				{"rhs_weap_pp2000", 15000, "license_civ_southgov", ""},
				{"rhs_weap_ak103_2", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak104_zenitco01_b33", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak105_zenitco01_b33", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak74", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak74m_desert_npz", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak74m_zenitco01_b33", 20000, "license_civ_southgov", ""},
				{"rhs_weap_ak74mr", 20000, "license_civ_southgov", ""},
				{"rhs_weap_akm", 20000, "license_civ_southgov", ""},
				{"rhs_weap_akm_zenitco01_b33", 20000, "license_civ_southgov", ""},
				{"hlc_rifle_slr107u_MTK", 10000, "license_civ_southgov", ""},
				{"rhs_weap_pkp", 28000, "license_civ_southgov", ""},
				{"rhs_weap_svdp_wd_npz", 38000, "license_civ_southgov", ""},
				{"rhs_weap_t5000", 46000, "license_civ_southgov", ""},
				{"rhs_weap_rpg7", 30000, "license_civ_southgov", ""},
				{"rhs_weap_igla", 10000, "license_civ_southgov", ""}
			};

			magazines[] = {
				{"rhs_mag_9x18_8_57N181S", 100, "license_civ_rebel", ""},
				{"rhs_mag_9x19_17", 100, "license_civ_rebel", ""},
				{"hlc_30Rnd_762x39_b_ak", 100, "license_civ_rebel", ""},
				{"rhs_mag_9x19mm_7n31_44", 10, "license_civ_southgov", ""},
				{"rhs_30Rnd_762x39mm_polymer", 10, "license_civ_southgov", ""},
				{"hlc_60Rnd_545x39_t_rpk", 10, "license_civ_southgov", ""},
				{"hlc_45Rnd_545x39_t_rpkm", 10, "license_civ_southgov", ""},
				{"hlc_30Rnd_545x39_t_ak_Black", 10, "license_civ_southgov", ""},
				{"hlc_75Rnd_762x39_AP_rpk", 10, "license_civ_southgov", ""},
				{"hlc_45Rnd_762x39_AP_rpk", 10, "license_civ_southgov", ""},
				{"hlc_30Rnd_762x39_m_ak_PMAGD", 10, "license_civ_southgov", ""},
				{"rhs_100Rnd_762x54mmR", 10, "license_civ_southgov", ""},
				{"rhs_rpg7_PG7V_mag", 10, "license_civ_southgov", ""},
				{"rhs_rpg7_PG7VL_mag", 10, "license_civ_southgov", ""},
				{"rhs_10Rnd_762x54mmR_7N1", 10, "license_civ_southgov", ""},
				{"rhs_5Rnd_338lapua_t5000", 10, "license_civ_southgov", ""},
				{"rhs_rpg7_PG7VR_mag", 10, "license_civ_southgov", ""},
				{"rhs_rpg7_TBG7V_mag", 10, "license_civ_southgov", ""},
				{"rhs_rpg7_OG7V_mag", 10, "license_civ_southgov", ""},
				{"rhs_mag_9k38_rocket", 10, "license_civ_southgov", ""}
			};

			attachments[] = {
				{"hlc_optic_kobra", 1000, "license_civ_rebel", ""},
				{"rhsusf_acc_M8541", 10, "license_civ_southgov", ""},
				{"optic_LRPS", 10, "license_civ_southgov", ""},
				{"HLC_bipod_UTGShooters", 10, "license_civ_southgov", ""},
				{"rhs_acc_pgo7v3", 10, "license_civ_southgov", ""},
				{"rhsusf_acc_eotech_552", 10, "license_civ_southgov", ""}
			};

			items[] = {
				{"tf_microdagr", 100, "license_civ_rebel", ""},
				{"tf_anprc152_1", 100, "license_civ_rebel", ""},
				{"Binocular", 100, "license_civ_rebel", ""},
				{"ItemMap", 100, "license_civ_rebel", ""},
				{"ItemCompass", 100, "license_civ_rebel", ""},
				{"ItemWatch", 100, "license_civ_rebel", ""},
				{"FirstAidKit", 100, "license_civ_rebel", ""},
				{"NVGoggles", 100, "license_civ_rebel", ""}
			};
		};

		class un_basic {
			title = "Weapons"; //--- Title of Shop
			condition = "call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"CSW_M26C", 0, "call life_coplevel >= 1", "M26C Taser"},
				{"RH_m9", 0, "call life_coplevel >= 6", "M9"},
				{"rhs_weap_m4a1_carryhandle_grip", 0, "call life_coplevel >= 1", "M4A1"},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 0, "call life_coplevel >= 1", ""},
				{"hlc_30rnd_556x45_EPR_L5", 0, "call life_coplevel >= 1", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""},
				{"", 0, "call life_coplevel >= 3", ""}
			};

			attachments[] = {
				{"rhsusf_acc_SF3P556", 0, "call life_coplevel >= 6", ""},
				{"rhsusf_acc_M952V", 0, "call life_coplevel >= 6", ""},
				{"rhsusf_acc_su230a_mrds", 0, "call life_coplevel >= 6", ""},
				{"rhsusf_acc_grip1", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""},
				{"", 0, "call life_coplevel >= 6", ""}
			};

			items[] = {
				{"tf_microdagr", 10, "true", ""},
				{"tf_anprc152_1", 10, "true", ""},
				{"Binocular", 10, "true", ""},
				{"ItemMap", 10, "true", ""},
				{"ItemGPS", 10, "true", ""},
				{"ItemCompass", 10, "true", ""},
				{"ItemWatch", 00, "true", ""},
				{"rhs_mag_an_m8hc", 0, "call life_coplevel >= 1", ""},
				{"rhs_mag_mk84", 0, "call life_coplevel >= 1", ""},
				{"rhs_mag_m18_green", 0, "call life_coplevel >= 1", ""},
				{"rhs_mag_m18_red", 0, "call life_coplevel >= 1", ""},
				{"rhs_mag_mk3a2", 0, "call life_coplevel >= 1", ""},
				{"NVGoggles", 10, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};

		class cop_basic {
			title = "Weapons"; //--- Title of Shop
			condition = "call life_coplevel >= 1"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 20; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
				{"CSW_M26C", 0, "call life_coplevel >= 1", "M26C Taser"},
				{"RH_g19", 1000, "call life_coplevel >= 1", "Glock 19 (Lethal only)"},
				{"CSW_M870", 2500, "call life_coplevel >= 2", ""},
				{"hlc_smg_mp5a4", 3000, "call life_coplevel >= 2", ""},
				{"hlc_rifle_416D10", 4000, "call life_coplevel >= 3", "HK"},
				{"hlc_rifle_G36C", 4000, "call life_coplevel >= 4", ""},
				{"hlc_rifle_G36V", 4000, "call life_coplevel >= 4", ""},
				{"hlc_rifle_G36KA1KSK", 4000, "call life_coplevel >= 4", ""},
				{"rhs_weap_m24sws", 4000, "call life_coplevel >= 4", ""},
				{"rhs_weap_m72a7", 4000, "call life_coplevel >= 4", ""},
				{"rhs_weap_fim92", 4000, "call life_coplevel >= 4", ""}
			};

			magazines[] = {
				{"CSW_Taser_Probe_Mag", 0, "call life_coplevel >= 1", ""},
				{"RH_17Rnd_9x19_g17", 0, "call life_coplevel >= 1", ""},
				{"CSW_M870_8Rnd_buck", 250, "call life_coplevel >= 1", ""},
				{"CSW_M870_8Rnd_slug", 250, "call life_coplevel >= 1", ""},
				{"CSW_M870_8Rnd_stun", 0, "call life_coplevel >= 1", ""},
				{"hlc_30Rnd_9x19_B_MP5", 0, "call life_coplevel >= 1", ""},
				{"hlc_30rnd_556x45_EPR", 0, "call life_coplevel >= 1", ""},
				{"hlc_30rnd_556x45_EPR_G36", 0, "call life_coplevel >= 1", ""},
				{"hlc_100rnd_556x45_M_G36", 0, "call life_coplevel >= 4", ""},
				{"rhs_fim92_mag", 0, "call life_coplevel >= 4", ""},
				{"rhsusf_5Rnd_762x51_m118_special_Mag", 0, "call life_coplevel >= 1", ""}
			};

			attachments[] = {
				{"RH_X300", 250, "call life_coplevel >= 1", "Glock Light"},
				{"hlc_acc_Surefiregrip", 250, "call life_coplevel >= 1", "Mp5 Light"},
				{"rhsusf_acc_eotech_552", 250, "call life_coplevel >= 1", "Eotech"},
				{"rhsusf_acc_M952V", 250, "call life_coplevel >= 1", "HK Light"},
				{"rhsusf_acc_g33_xps3", 250, "call life_coplevel >= 1", "G33"},
				{"rhsusf_acc_ACOG_RMR", 250, "call life_coplevel >= 4", ""},
				{"hlc_optic_HensoldtZO_Hi_Docter_2D", 250, "call life_coplevel >= 4", ""},
				{"rhsusf_acc_m24_muzzlehider_black", 250, "call life_coplevel >= 4", ""},
				{"hlc_optic_ATACR_Offset", 250, "call life_coplevel >= 4", ""},
				{"rhsusf_acc_harris_swivel", 250, "call life_coplevel >= 4", ""}
			};

			items[] = {
				{"tf_microdagr", 100, "true", ""},
				{"tf_anprc152_1", 100, "true", ""},
				{"Binocular", 100, "true", ""},
				{"ItemMap", 100, "true", ""},
				{"ItemGPS", 100, "true", ""},
				{"ItemCompass", 100, "true", ""},
				{"ItemWatch", 100, "true", ""},
				{"FirstAidKit", 100, "true", ""},
				{"TRYK_balaclava_BLACK_NV", 100, "true", ""},
				{"NVGoggles", 100, "true", ""} //--- Clothing can also be sold but isn't guaranteed to be previewed - just make sure override checkbox is used to override clothing on player
			};
		};
		// Add Seperate Shop or make alternate way of checking if player is ERT Certified

	};
};

#include "gui\weapon_gui_master.cpp"

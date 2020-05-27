/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove", 0, "" },
			//cup clothing
      { "rds_uniform_assistant", "", 300, "" },
			{ "rds_uniform_citizen1", "", 300, "" },
			{ "rds_uniform_citizen2", "", 300, "" },
      { "rds_uniform_citizen3", "", 300, "" },
      { "rds_uniform_citizen4", "", 300, "" },
      { "rds_uniform_doctor", "", 300, "" },
      { "rds_uniform_Functionary1", "", 300, "" },
      { "rds_uniform_Functionary2", "", 300, "" },
      { "rds_uniform_Policeman", "Security Uniform", 300, "" },
      { "rds_uniform_priest", "", 300, "" },
      { "rds_uniform_Profiteer1", "", 300, "" },
      { "rds_uniform_Profiteer2", "", 300, "" },
      { "rds_uniform_Profiteer3", "", 300, "" },
      { "rds_uniform_Profiteer4", "", 300, "" },
      { "rds_uniform_Rocker1", "", 300, "" },
      { "rds_uniform_Rocker2", "", 300, "" },
      { "rds_uniform_Rocker3", "", 300, "" },
      { "rds_uniform_Rocker4", "", 300, "" },
      { "rds_uniform_schoolteacher", "", 300, "" },
      { "rds_uniform_Villager1", "", 300, "" },
      { "rds_uniform_Villager2", "", 300, "" },
      { "rds_uniform_Villager3", "", 300, "" },
      { "rds_uniform_Villager4", "", 300, "" },
      { "rds_uniform_Woodlander1", "", 300, "" },
      { "rds_uniform_Woodlander2", "", 300, "" },
      { "rds_uniform_Woodlander3", "", 300, "" },
      { "rds_uniform_Woodlander4", "", 300, "" },
      { "rds_uniform_Worker1", "", 300, "" },
      { "rds_uniform_Worker2", "", 300, "" },
      { "rds_uniform_Worker3", "", 300, "" },
      { "rds_uniform_Worker4", "", 300, "" },
      { "U_Afghan01", "", 300, "" },
      { "U_Afghan01NH", "", 300, "" },
      { "U_Afghan02", "", 300, "" },
      { "U_Afghan02NH", "", 300, "" },
      { "U_Afghan03", "", 300, "" },
			{ "U_Afghan03NH", "", 300, "" },
			{ "U_Afghan04", "", 300, "" },
      { "U_Afghan05", "", 300, "" },
      { "U_Afghan06", "", 300, "" },
      { "U_Afghan06NH", "", 300, "" },
			//tryk
			{ "TRYK_shirts_DENIM_BK", "", 10, "" },
			{ "TRYK_shirts_DENIM_BL", "", 10, "" },
			{ "TRYK_shirts_DENIM_BK_Sleeve", "", 10, "" },
			{ "TRYK_shirts_PAD_RED2", "", 10, "" },
			{ "TRYK_U_pad_hood_Blk", "", 10, "" },
			{ "TRYK_U_denim_hood_nc", "", 10, "" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "rds_rocker_hair2", "", 650, "" },
			{ "rds_rocker_hair1", "", 650, "" },
			{ "rds_rocker_hair3", "", 650, "" },
			{ "rds_Profiteer_cap1", "", 650, "" },
      { "rds_Profiteer_cap2", "", 650, "" },
      { "rds_Profiteer_cap3", "", 650, "" },
      { "rds_Profiteer_cap4", "", 650, "" },
      { "rds_Woodlander_cap1", "", 650, "" },
      { "rds_Woodlander_cap2", "", 650, "" },
      { "rds_Woodlander_cap3", "", 650, "" },
      { "rds_Woodlander_cap4", "", 650, "" },
      { "rds_Villager_cap2", "", 650, "" },
      { "rds_Villager_cap3", "", 650, "" },
      { "rds_Villager_cap4", "", 650, "" },
      { "rds_Villager_cap1", "", 650, "" },
      { "rds_worker_cap1", "", 650, "" },
      { "rds_worker_cap2", "", 650, "" },
      { "rds_worker_cap3", "", 650, "" },
      { "rds_worker_cap4", "", 650, "" },
			{ "Afghan_01Hat", "", 650, "" },
      { "Afghan_02Hat", "", 650, "" },
      { "Afghan_03Hat", "", 650, "" },
      { "Afghan_04Hat", "", 650, "" },
      { "Afghan_05Hat", "", 650, "" },
      { "Afghan_06Hat", "", 650, "" },
			{ "H_Bandanna_khk", "", 12, "" },
			{ "H_Bandanna_cbr", "", 12, "" },
			{ "H_Bandanna_sgg", "", 12, "" },
			{ "H_Bandanna_sand", "", 12, "" },
			{ "H_Bandanna_gry", "", 12, "" },
			{ "H_Bandanna_blu", "", 12, "" },
			{ "H_Bandanna_camo", "", 12, "" },
			{ "H_Bandanna_mcamo", "", 12, "" },
			{ "H_Booniehat_mcamo", "", 12, "" },
			{ "H_Booniehat_grn", "", 12, "" },
			{ "H_Cap_red", "", 12, "" },
			{ "H_Cap_blu", "", 12, "" },
			{ "H_Cap_oli", "", 12, "" },
			{ "H_Cap_tan", "", 12, "" },
			{ "H_Cap_blk", "", 12, "" },
			{ "H_Cap_blk_CMMG", "", 12, "" },
			{ "H_Cap_brn_SPECOPS", "", 12, "" },
			{ "H_Cap_khaki_specops_UK", "", 12, "" },
			{ "H_Cap_tan_specops_US", "", 12, "" },
			{ "H_Cap_usblack", "", 12, "" },
			{ "H_Cap_grn", "", 12, "" },
			{ "H_Cap_grn_BI", "", 12, "" },
			{ "H_Cap_blk_Raven", "", 12, "" },
			{ "H_Cap_blk_ION", "", 12, "" },
			{ "H_Cap_surfer", "", 12, "" },
			{ "H_Cap_press", "", 12, "" },
			{ "H_Hat_blue", "", 12, "" },
			{ "H_Hat_brown", "", 12, "" },
			{ "H_Hat_camo", "", 12, "" },
			{ "H_Hat_grey", "", 12, "" },
			{ "H_Hat_checker", "", 12, "" },
			{ "H_Hat_tan", "", 12, "" },
			{ "H_Hat_checker", "", 12, "" },
			{ "H_StrawHat", "", 12, "" },
			{ "H_StrawHat_dark", "", 12, "" },
			{ "H_Helmet_Skate", "", 12, "" }

        };
        goggles[] = {
            { "NONE", "Remove", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
	       		{ "B_LegStrapBag_black_F", "", 2000, "" },
	       		{ "B_LegStrapBag_coyote_F", "", 2000, "" },
	       		{ "B_Messenger_Coyote_F", "", 2000, "" },
	       		{ "B_Messenger_IDAP_F", "", 2000, "" },
            { "B_Patrol_Respawn_bag_F", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3000, "" },
            { "B_Kitbag_sgg", "", 3000, "" },
            { "B_Kitbag_cbr", "", 3000, "" },
            { "B_FieldPack_blk", "", 3500, "" },
            { "B_FieldPack_ocamo", "", 3500, "" },
            { "B_FieldPack_oucamo", "", 3500, "" },
            { "B_Bergen_sgg", "", 3500, "" },
            { "B_Bergen_rgr", "", 3500, "" },
	       		{ "B_Bergen_mcamo", "Union Jack Bag", 3500, "" },
            { "B_Bergen_blk", "Stars 'n' Stripes", 3500, "" },
            { "B_Carryall_ocamo", "", 3500, "" },
            { "B_Carryall_mcamo", "", 3500, "" },
            { "B_Carryall_oli", "", 3500, "" },
            { "B_Carryall_khk", "", 3500, "" },
            { "B_Carryall_Base", "", 3500, "" }
        };
    };

	//police//

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove", 0, "" },
            { "Police_uniform_Officer", "Rookie", 0, "call life_coplevel >= 1" },
            { "pPolice_uniform_Officer1", "Officer", 0, "call life_coplevel >= 1" },
            { "Police_uniform_Officer2", "Corporal", 0, "call life_coplevel >= 1" },
            { "Police_uniform_Officer3", "Sergeant", 0, "call life_coplevel >= 1" },
            { "wcpd_lieutenant", "lieutenant", 0, "call life_coplevel >= 1" },
            { "WCPD_Captain", "Captain", 0, "call life_coplevel >= 1" },
            { "wcpd_deputy_inspector", "deputy inspector", 0, "call life_coplevel >= 1" },
            { "wcpd_inspector", "inspector", 0, "call life_coplevel >= 1" },
            { "wcpd_deputy_chief", "deputy chief", 0, "call life_coplevel >= 1" },
            { "wcpd_chief_of_department", "chief", 0, "call life_coplevel >= 1" },
            { "TCG_SERT", "", 0, "call life_coplevel >= 4" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "Police_Beret", "", 0, "call life_coplevel >= 1" },
            { "Patrol_Cap_Badge", "", 0, "call life_coplevel >= 1" },
            { "Patrol_Cap", "", 0, "call life_coplevel >= 1" },
            { "rhssaf_helmet_m97_olive_nocamo", "", 0, "call life_coplevel >= 4" }
        };
        goggles[] = {
            { "NONE", "Remove", 0, "" },
            { "rhs_googles_black", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Shades_Black", "", 5, "" },
            { "TRYK_kio_balaclava_ESS", "", 0, "call life_coplevel >= 4" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "" },
            { "EF_MBA_POLICE", "", 0, "call life_coplevel >= 1" },
            { "TAC_PBDFG2CPP_BK_1", "", 0, "call life_coplevel >= 1" },
            { "TAC_V_tacv1_P", "", 0, "call life_coplevel >= 1" },
            { "G_TAC_Highway_Patrol_Neu_police_vest", "", 0, "call life_coplevel >= 1" },
            { "TAC_TAC_PBDFG2SACP_RG", "", 0, "call life_coplevel >= 4" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "" },
            { "AM_PoliceBelt", "Duty Belt", 0, "" },
            { "TAC_MTAP_RG2";", "", 0, "call life_coplevel >= 4" }
        };
    };

	class bounty_clothing {
        title = "STR_Shops_B_Gun";
        conditions = "license_civ_bounty";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
		      	{ "RM_SWAT_Uniform_02", "Clothing 1", 0, "" },
		      	{ "TRYK_U_B_BLKOCP_R_CombatUniformTshirt", "Clothing 2", 0, "" },
		      	{ "TRYK_U_B_BLKTANR_CombatUniformTshirt", "Clothing 3", 0, "" },
		      	{ "TRYK_U_B_BLTAN_T", "Clothing 4", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
		      	{ "NSWDG_Bball_E_Blk", "", 0, "" },
		      	{ "NSWDG_Bball_E_AOR2", "", 0, "" }
         };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
		      	{ "S_VHO_OV_BLK_1", "", 4900, "" },
            { "S_VHO_OV_BLK_2", "", 4900, "" },
		      	{ "S_VHO_OV_BLK_4", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
		      	{"TRYK_B_BAF_BAG_BLK", "bag", 0, "" },
		      	{ "TAC_LBT_LEGAB_BK", "Belt", 0, "" }
        };
    };

    class northgov {
        title = "STR_Shops_C_North";
        conditions = "license_civ_northgov";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "Nil", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "Nil", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "Nil", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class raven_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove", 0, "" },
			//tryk
			{ "TRYK_U_Bts_PCUGs", "", 80, "" },
			{ "TRYK_U_Bts_PCUODs", "", 80, "" },
			{ "TRYK_U_B_PCUGs_gry", "", 80, "" },
			{ "TRYK_ZARATAKI", "", 80, "" },
			{ "TRYK_ZARATAKI2", "", 80, "" },
            { "TRYK_B_TRYK_3C_T", "", 80, "" },
			{ "TRYK_U_B_C02_Tsirt", "", 80, "" },
			{ "TRYK_U_B_BLKTAN", "", 80, "" },
			{ "TRYK_U_B_BLK_OD_Tshirt", "", 80, "" },
			{ "TRYK_U_B_fleece", "", 80, "" },
			{ "TRYK_U_B_fleece_UCP", "", 100, "" },
			{ "TRYK_U_Bts_PCUs", "", 350, "" },
			{ "TRYK_U_Bts_GRYGRY_PCUs", "", 500, "" },
			{ "TRYK_U_Bts_UCP_PCUs", "", 500, "" },
			{ "TRYK_U_B_PCUHs", "", 500, "" },
			{ "TRYK_U_B_PCUGs_gry_R", "", 500, "" },
			{ "TRYK_U_B_PCUGs_OD_R", "", 500, "" },
			{ "TRYK_U_B_WDL_GRY_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_WDL_GRY_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_Wood_T", "", 3800, "" },
			{ "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_JSDF_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANTAN_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANTAN_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANOCP_CombatUniform", "", 3800, "" },
			{ "TRYK_U_taki_G_WH", "", 3800, "" },
			{ "TRYK_U_taki_G_COY", "", 3800, "" },
			{ "TRYK_U_taki_wh", "", 3800, "" },
			{ "TRYK_U_denim_hood_mc", "", 3800, "" },
			{ "TRYK_U_denim_hood_3c", "", 3800, "" },
			{ "TRYK_T_TAN_PAD", "", 3800, "" },
			{ "TRYK_T_OD_PAD", "", 3800, "" },
			{ "TRYK_U_pad_hood_Cl", "", 3800, "" },
			{ "TRYK_U_pad_hood_odBK", "", 3800, "" },
			{ "TRYK_U_B_GRY_PCUs_R", "", 3800, "" },
			{ "TRYK_U_B_PCUGs", "", 3800, "" },
			{ "TRYK_U_B_PCUGs_BLK", "", 3800, "" },
			{ "TRYK_U_Bts_PCUODs", "", 3800, "" },
			{ "TRYK_U_B_PCUHs", "", 3800, "" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "H_HelmetB_light", "", 4000, "" },
            { "H_HelmetB_plain_mcamo", "", 5000, "" },
            { "H_HelmetB_plain_blk", "", 5000, "" },
            { "H_HelmetSpecB", "", 6000, "" },
            { "H_HelmetSpecB_blk", "", 6000, "" },
            { "H_HelmetSpecO_blk", "", 6000, "" },
            { "H_HelmetO_ViperSP_ghex_F", "Prototype Helmet", 400000, "" }
        };
        goggles[] = {
            { "NONE", "Remove", 0, "" }
        };
        vests[] = {
			{ "NONE", "Remove", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_Base", "", 7500, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
			{ "medic_uni1", "Medic Uniform 1", 0, "" },
			{ "hart_uni1", "Medic Uniform 2", 0, "" },
            { "aa_uni1", "Air Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "medic_cap", "Cap", 10, "" },
            { "aa_H", "Pilot Helmet", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
			{ "medic_vest", "Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 0, "" }
        };
    };

	class unclothing {
        title = "STR_MAR_UN_Clothing_Shop";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove", 0, "" },
            { "", "", 0, "" },
	      		{ "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
		      	{ "", "", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "" },
		      	{ "", " Vest 1", 0, "" },
		      	{ "", "", 0, "" },
		      	{ "", "", 0, "" },
		      	{ "", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" },
            { "", "", 0, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove", 0, "" },
			{ "rds_uniform_assistant", "", 3800, "" },
			{ "rds_uniform_citizen1", "", 3800, "" },
			{ "rds_uniform_citizen2", "", 3800, "" },
      { "rds_uniform_citizen3", "", 3800, "" },
      { "rds_uniform_citizen4", "", 3800, "" },
      { "rds_uniform_doctor", "", 3800, "" },
      { "rds_uniform_Functionary1", "", 3800, "" },
      { "rds_uniform_Functionary2", "", 3800, "" },
      { "rds_uniform_Policeman", "", 3800, "" },
      { "rds_uniform_priest", "", 3800, "" },
      { "rds_uniform_Profiteer1", "", 3800, "" },
      { "rds_uniform_Profiteer2", "", 3800, "" },
      { "rds_uniform_Profiteer3", "", 3800, "" },
      { "rds_uniform_Profiteer4", "", 3800, "" },
      { "rds_uniform_Rocker1", "", 3800, "" },
      { "rds_uniform_Rocker2", "", 3800, "" },
      { "rds_uniform_Rocker3", "", 3800, "" },
      { "rds_uniform_Rocker4", "", 3800, "" },
      { "rds_uniform_schoolteacher", "", 3800, "" },
      { "rds_uniform_Villager1", "", 3800, "" },
      { "rds_uniform_Villager2", "", 3800, "" },
      { "rds_uniform_Villager3", "", 3800, "" },
      { "rds_uniform_Villager4", "", 3800, "" },
      { "rds_uniform_Woodlander1", "", 3800, "" },
      { "rds_uniform_Woodlander2", "", 3800, "" },
      { "rds_uniform_Woodlander3", "", 3800, "" },
      { "rds_uniform_Woodlander4", "", 3800, "" },
      { "rds_uniform_Worker1", "", 3800, "" },
      { "rds_uniform_Worker2", "", 3800, "" },
      { "rds_uniform_Worker3", "", 3800, "" },
      { "rds_uniform_Worker4", "", 3800, "" },
      { "U_Afghan01", "", 3800, "" },
      { "U_Afghan01NH", "", 3800, "" },
      { "U_Afghan02", "", 3800, "" },
      { "U_Afghan02NH", "", 3800, "" },
      { "U_Afghan03", "", 3800, "" },
			{ "U_Afghan03NH", "", 3800, "" },
			{ "U_Afghan04", "", 3800, "" },
      { "U_Afghan05", "", 3800, "" },
      { "U_Afghan06", "", 3800, "" },
      { "U_Afghan06NH", "", 3800, "" },
			{ "TRYK_U_B_WDL_GRY_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_WDL_GRY_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_Wood_T", "", 3800, "" },
			{ "TRYK_U_B_NATO_UCP_GRY_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_JSDF_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANTAN_R_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANTAN_CombatUniform", "", 3800, "" },
			{ "TRYK_U_B_TANOCP_CombatUniform", "", 3800, "" },
			{ "TRYK_U_taki_G_WH", "", 3800, "" },
			{ "TRYK_U_taki_G_COY", "", 3800, "" },
			{ "TRYK_U_taki_wh", "", 3800, "" },
			{ "TRYK_U_denim_hood_mc", "", 3800, "" },
			{ "TRYK_U_denim_hood_3c", "", 3800, "" },
			{ "TRYK_T_TAN_PAD", "", 3800, "" },
			{ "TRYK_T_OD_PAD", "", 3800, "" },
			{ "TRYK_U_pad_hood_Cl", "", 3800, "" },
			{ "TRYK_U_pad_hood_odBK", "", 3800, "" },
			{ "TRYK_U_B_GRY_PCUs_R", "", 3800, "" },
			{ "TRYK_U_B_PCUGs", "", 3800, "" },
			{ "TRYK_U_B_PCUGs_BLK", "", 3800, "" },
			{ "TRYK_U_Bts_PCUODs", "", 3800, "" },
			{ "TRYK_U_B_PCUHs", "", 3800, "" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "rds_rocker_hair2", "", 650, "" },
	      		{ "rds_rocker_hair1", "", 650, "" },
	      		{ "rds_rocker_hair3", "", 650, "" },
      			{ "rds_Profiteer_cap1", "", 650, "" },
            { "rds_Profiteer_cap2", "", 650, "" },
            { "rds_Profiteer_cap3", "", 650, "" },
            { "rds_Profiteer_cap4", "", 650, "" },
            { "rds_Woodlander_cap1", "", 650, "" },
            { "rds_Woodlander_cap2", "", 650, "" },
            { "rds_Woodlander_cap3", "", 650, "" },
            { "rds_Woodlander_cap4", "", 650, "" },
            { "rds_Villager_cap2", "", 650, "" },
            { "rds_Villager_cap3", "", 650, "" },
            { "rds_Villager_cap4", "", 650, "" },
            { "rds_Villager_cap1", "", 650, "" },
            { "rds_worker_cap1", "", 650, "" },
            { "rds_worker_cap2", "", 650, "" },
            { "rds_worker_cap3", "", 650, "" },
            { "rds_worker_cap4", "", 650, "" },
            { "Afghan_01Hat", "", 650, "" },
            { "Afghan_02Hat", "", 650, "" },
            { "Afghan_03Hat", "", 650, "" },
            { "Afghan_04Hat", "", 650, "" },
            { "Afghan_05Hat", "", 650, "" },
            { "Afghan_06Hat", "", 650, "" },
		      	{ "H_MilCap_dgtl", "", 650, "" },
		      	{ "H_MilCap_gry", "", 650, "" },
            { "H_MilCap_blue", "", 650, "" },
		      	{ "H_Beret_blk", "", 650, "" },
		      	{ "H_Shemag_khk", "", 650, "" },
		      	{ "H_Shemag_tan", "", 650, "" },
		      	{ "H_Shemag_olive", "", 650, "" },
		      	{ "H_Shemag_olive_hs", "", 650, "" },
		      	{ "H_HelmetIA", "", 2000, "" },
		      	{ "H_Helmet_Skate", "", 2000, "" }
              };
        goggles[] = {
            { "NONE", "Remove", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
		      	{ "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "" },
	      		{ "V_HarnessOGL_gry", "suicide vest", 250000, "" },
		      	{ "TAC_CR4_CY", "", 3800, "" },
		      	{ "TAC_CR4_OD", "", 3800, "" },
		      	{ "TAC_CR4_RG", "", 3800, "" },
		      	{ "TAC_HSG_ABH_B", "", 3800, "" },
	      		{ "TAC_HSG_ABH_Khaki", "", 3800, "" },
		      	{ "TAC_HSG_ABH_OD", "", 3800, "" },
			      { "TAC_HSG_ABL_OD", "", 3800, "" },
		      	{ "TAC_LBT_BL_BK", "", 3800, "" },
		      	{ "TAC_LBT_BL_KH", "", 3800, "" },
		      	{ "TAC_CR3", "", 3800, "" },
		       	{ "TAC_PBDFG2_CY_1", "", 3800, "" },
		      	{ "TAC_PBDFG2D_RG", "", 3800, "" },
		      	{ "TAC_PBDFG2D2_RG", "", 3800, "" },
		      	{ "TAC_FS_FO_B", "", 3800, "" },
		      	{ "TAC_FS_FO_G", "", 3800, "" },
		      	{ "TAC_LBT_H4_Khaki", "", 3800, "" },
		      	{ "TAC_LBT_H4_OD", "", 3800, "" },
		      	{ "TAC_LBT_HL_B", "", 3800, "" },
		      	{ "TAC_Punisher_Vest_BK", "", 3800, "" },
		      	{ "TAC_EI_RRVCQB_Coyote", "", 3800, "" },
		      	{ "TAC_EI_RRVCQB_OD", "", 3800, "" },
		      	{ "TRYK_BAPLSK", "", 3800, "" },
			      { "TRYK_V_harnes_blk_L", "", 3800, "" },
			      { "TRYK_V_harnes_od_L", "", 3800, "" },
			      { "TRYK_V_harnes_TAN_L", "", 3800, "" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_Base", "", 7500, "" },
			// {"B_Bergen_tna_F", "", 8000, ""}
        };
    };

	class southgov {
        title = "STR_Shops_C_South";
        conditions = "license_civ_southgov";
        side = "civ";
        uniforms[] = {
			{ "NONE", "Remove", 0, "" },
			{ "rhs_uniform_emr_des_patchless", "", 1800, "" }
        };
        headgear[] = {
            { "NONE", "Remove", 0, "" },
            { "rds_Woodlander_cap4", "", 3500, "" },
			{ "rhs_6b27m_ml", "", 3500, "" },
			{ "rhs_6b27m_ml_bala", "", 3500, "" },
			{ "rhs_6b27m_ml_ess", "", 3500, "" },
			{ "rhs_6b27m_ML_ess_bala", "", 3500, "" }
        };
        goggles[] = {
            { "NONE", "Remove", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" },
			{ "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove", 0, "" },
			{ "V_HarnessOGL_gry", "suicide vest", 250000, "" },
			{ "rhs_6b23_ML", "", 3800, "" },
			{ "rhs_6b23_ML_6sh92", "", 3800, "" },
			{ "rhs_6b23_ML_6sh92_headset", "", 3800, "" },
			{ "rhs_6b23_ML_6sh92_headset_mapcase", "", 3800, "" }
        };
        backpacks[] = {
            { "NONE", "Remove", 0, "" },
            { "rhs_sidor", "", 500, "" },
            { "rhs_rpg_empty", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
			// {"B_Bergen_tna_F", "", 8000, ""}
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};

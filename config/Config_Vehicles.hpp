class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        vehicles[] = {
				{ "RDS_Gaz24_Civ_01", "" },
				{ "RDS_Golf4_Civ_01", "" },
				{ "C_Hatchback_01_sport_F", "" },
				{ "RDS_Ikarus_Civ_01", "" },
				{ "RDS_JAWA353_Civ_01", "" },
				{ "ivory_190e_taxi", "" },
				{ "RDS_MMT_Civ_01", "" },
				{ "RDS_S1203_Civ_01", "" },
				{ "RDS_Zetor6945_Base", "" },
				{ "rhs_uaz_open_MSV_01", "" },
				{ "C_Van_02_transport_F", "" },
				{ "RDS_Lada_Civ_01", "" },
				{ "RDS_tt650_Civ_01", "" },
				{ "apalon_LadaNiva2329", "" },
				{ "apalon_Buggy", "" },
				{ "V12_ESCALADE1", "" },
				{ "V12_ESCALADE2_MET", "" },
				{ "AlessioMustangMat", "" },
				{ "ivory_lp560", "" },
				{ "ivory_gt500", "" },
				{ "V12_YZF_Rouge", "" },
				{ "V12_YZF_noir", "" },
				{ "d3s_crown_98", "" },
				{ "d3s_explorer_13", "" },
				{ "d3s_taurus_eco_10", "" },
				{ "d3s_savana_05", "" },
				{ "d3s_h2_02", "" },
				{ "d3s_q50_ER_14", "" },
				{ "d3s_cherokee_18", "" },
				{ "d3s_clubman_11", "" }
		};
	};

    class sports_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            //sports
			{ "d3s_BMW_S_1000_RR", "" }, 	
			{ "d3s_Ducati_Monster_1200_S", "" },
			{ "d3s_Kawasaki_Ninja_H2R", "" },
			{ "d3s_KTM_1290_Super_Duke", "" },
			{ "d3s_Suzuki_GSX_R_1000", "" },
			{ "d3s_e60_09_ACS5", "" },
			{ "d3s_giulia_quad_16", "" },
			{ "d3s_stelvio_19_MNSTR", "" },
			{ "d3s_RS7_13", "" },
			{ "d3s_f87_17", "" },
			{ "d3s_e38_98", "" },
			{ "d3s_amazing_ACS8_17_IND", "" },
			{ "d3s_amazing_ACS8_17", "" },
			{ "d3s_f87_17_EX", "" },
			{ "d3s_f87_18_m", "" },
			{ "d3s_f80_14", "" },
			{ "d3s_amazing_f82_16", "" },
			{ "d3s_e60_09", "" },
			{ "d3s_f90_18_m", "" },
			{ "d3s_amazing_f10_12_EX", "" },
			{ "d3s_f85_15_m", "" },
			{ "d3s_e89_12", "" },
			{ "d3s_g800_17", "" },
			{ "d3s_skylark_52", "" },
			{ "d3s_ctsv_16", "" },
			{ "d3s_escalade_16", "" },
			{ "d3s_camaro_zl1_1le_18", "" },
			{ "d3s_malibu_18", "" },
			{ "d3s_malibu_18_red", "" },
			{ "d3s_tahoe_08", "" },
			{ "d3s_tahoe_EX", "" },
			{ "d3s_tahoe_limited", "" },
			{ "d3s_300C_12", "" },
			{ "d3s_challenger_15_WIDE", "" },
			{ "d3s_charger_15", "" },
			{ "d3s_coronet_70", "" },
			{ "d3s_durango_18_SRT", "" },
			{ "d3s_explorer_sport_13", "" },
			{ "d3s_raptor_SCR_17", "" },
			{ "d3s_focus_17_LB", "" },
			{ "RAPTOR_BIG", "" },
			{ "d3s_qx56_13_SE", "" },
			{ "d3s_fpace_17_s", "" },
			{ "d3s_xesv_17", "" },
			{ "d3s_cherokee_18_TRCK", "" },
			{ "d3s_sian_20", "" },
			{ "d3s_urus_18_EX", "" },
			{ "d3s_ghibli_esteso_14", "" },
			{ "d3s_levante_s_17_mat", "" },
			{ "d3s_amazing_a45_16_EX", "" },
			{ "d3s_C63S_14", "" },
			{ "d3s_amgGT_19_43", "" },
			{ "d3s_e350_16", "" },
			{ "d3s_w212s_13", "" },
			{ "d3s_w212s_13_EX", "" },
			{ "d3s_gl63amg_12_SE", "" },
			{ "d3s_ml350_09", "" },
			{ "d3s_w140_98", "" },
			{ "d3s_s600_17", "" },
			{ "d3s_gls63_17", "" },
			{ "d3s_pajero_07_38", "" },
			{ "d3s_juke_15", "" },
			{ "d3s_silvia_s15_02", "" },
			{ "d3s_skyline_02", "" },
			{ "d3s_titan_17", "" },
			{ "d3s_roadrunner_71_340", "" },
			{ "d3s_roadrunner_71_GTX", "" },
			{ "d3s_macan_16", "" },
			{ "d3s_panamera_17", "" },
			{ "d3s_vogue_14_V6", "" },
			{ "d3s_evoque_16", "" },
			{ "d3s_svr_17_CHARGED", "" },
			{ "d3s_svr_17_007", "" },
			{ "d3s_cullinan_19_II", "" },
			{ "d3s_cullinan_19_BB", "" },
			{ "d3s_cullinan_19_FE", "" },
			{ "d3s_dawn_16_II", "" },
			{ "d3s_dawn_16", "" },
			{ "d3s_dawn_16_III", "" },
			{ "d3s_ghost_18_EWB", "" },
			{ "d3s_ghost_18_EWB_II", "" },
			{ "d3s_ghost_18_EWB_III", "" },
			{ "d3s_novus_phantom_18", "" },
			{ "d3s_novus_phantom_18_2", "" },
			{ "d3s_novus_phantom_18_3", "" },
			{ "d3s_wrx_17_FnF8", "" },
			{ "d3s_wrx_sti_17", "" },
			{ "d3s_teslaS_16_85", "" },
			{ "d3s_avalon_18", "" },
			{ "d3s_camry_18", "" },
			{ "d3s_200_16_EX", "" },
			{ "d3s_200_VX_16", "" }
        };
    };
	
	class super_car {
        side = "civ";
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        vehicles[] = {
			{ "d3s_eb110_19", "" },  
			{ "d3s_voiture_19", "" },
			{ "d3s_599GTO_12", "" },
			{ "d3s_LaFerrari_14", "" },
			{ "d3s_boss_15", "" },
			{ "d3s_intensa_19", "" },
			{ "d3s_FType_19", "" },
			{ "d3s_agera_11", "" },
			{ "d3s_jesko_20", "" },
			{ "d3s_regera_15", "" },
			{ "d3s_asterion_15", "" },
			{ "d3s_huracan_18", "" },
			{ "d3s_huracan_18_SPD_P", "" },
			{ "d3s_veneno_13", "" },
			{ "d3s_alfieri_14", "" },
			{ "d3s_mclaren_18", "" },
			{ "d3s_f1gt_97", "" },
			{ "d3s_senna_18", "" },
			{ "d3s_amgGT_15", "" },
			{ "d3s_amgGTR_15", "" },
			{ "d3s_zonda_18", "" },
			{ "d3s_911gt3rs_18", "" },
			{ "d3s_cayenne_16", "" },
			{ "d3s_cayenne_turbo_16", "" },
			{ "d3s_tuatara_19", "" }
        };
    };

    class civ_truck {
        side = "civ";
       conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        vehicles[] = {
            { "RHS_Ural_Civ_01", "" },
            { "RHS_Ural_Open_Civ_01", "" },
            { "RHS_Ural_Civ_03", "" },
            { "RHS_Ural_Civ_02", "" },
            { "d3s_zil_130_05", "" },
            { "d3s_zil_130_02", "" },
            { "d3s_zil_130_03", "" },
            { "d3s_kamaz_2", "" },
            { "d3s_kamaz_4350_tent", "" },
            { "d3s_kraz_6316", "" },
            { "d3s_next", "" },
            { "d3s_actros_14_giga", "" },
            { "d3s_actros_14", "" }          
        };
    };

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        vehicles[] = {
			{ "I_Heli_Transport_02_F", "" },
			{ "rhsusf_CH53E_USMC", "" },
			{ "d3s_HH_65", "" },
			{ "rhs_ka60_grey", "" },
			{ "C_Heli_Light_01_civil_F", "" },
			{ "I_C_Heli_Light_01_civil_F", "" },
			{ "RHS_Mi8amt_civilian", "" },
			{ "RHS_C130J", "" },
			{ "RHS_Mi8t_civilian", "" },
			{ "Sab_737", "" },
			{ "Sab_737_2", "" },
			{ "sab_aeroc", "" },
			{ "sab_comet", "" },
			{ "sab_do228", "" },
			{ "sab_falcon", "" },
			{ "sab_trimotor", "" },
			{ "sab_robindr400", "" },
			{ "sab_stampe", "" },
			{ "sab_zlin", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "C_Scooter_Transport_01_F", "" } //Apex DLC
        };
    };

    class southgov_car {
        side = "civ";
        conditions = "license_civ_southgov";
        vehicles[] = {
			{ "rhs_tigr_vdv", "" },
			{ "rhs_gaz66_vmf", "" },
			{ "rhs_gaz66_zu23_vmf", "" },
			{ "rhs_bmd2", "" },
			{ "rhs_zsu234_aa", "" },
			{ "rhs_t80um", ""}
        };
    };

	class northgov_car {
        side = "civ";
        conditions = "license_civ_northgov";
        vehicles[] = {
            { "tahoe_ltz_08", "" },
            { "d3s_vv222_18_2", ""},
            { "d3s_AS_365", ""}
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
			{ "d3s_tahoe_EMS", "" },
			{ "d3s_charger_15_EMS", "" },
			{ "d3s_explorer_EMS_13", "" },
			{ "d3s_fseries_17_Rescue", "" },
			{ "d3s_fseries_17_EMS", "" },
			{ "d3s_savana_EMS", "" },
			{ "d3s_fpace_17_EMS", "" },
			{ "d3s_vklasse_17_EMS", "" }
        };
    };

    class med_air_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "RHS_UH60M_MEV2_d", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "ivory_rs4_marked", "call life_coplevel >= 1" },
            { "ivory_m3_marked", "call life_coplevel >= 2" },
            { "ivory_isf_marked", "call life_coplevel >= 3" },
            { "ivory_evox_marked", "call life_coplevel >= 3" },
            { "ivory_wrx_marked", "call life_coplevel >= 4" },
            { "d3s_donkervoort_17", "call life_coplevel >=7"},
            { "d3s_tahoe_UNM", "call life_coplevel >=6"}  //unmarked

        };
    };

	class bounty_car {
        side = "civ";
        conditions = "license_civ_bounty || {!(playerSide isEqualTo civilian)}";
        vehicles[] = {
			{ "tahoe_UNM", "" },
			{ "d3s_eldorado_76", ""}
        };
    };

	class un_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "sab_UN_SUV", "" },
            { "rhsusf_m1025_w", "" },
            { "rhsusf_m1043_d_s_m2", "" },
            { "rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy", "" },
            { "rhsusf_m998_d_2dr", "" },
            { "rhsusf_m998_d_s_2dr_fulltop", "" },
            { "rhsusf_m998_d_4dr", "" },
            { "rhsusf_m998_d_4dr_halftop", "" },
            { "rhsusf_stryker_m1126_m2_d", "" },
            { "rhsusf_m1240a1_usarmy_d", "" },
            { "rhsusf_m1240a1_m2crows_usarmy_d", "" },
            { "rhsusf_m1240a1_m2_usarmy_d", "" },
            { "rhsusf_m1240a1_m240_usarmy_d", "" },
            { "rhsusf_m1245_m2crows_socom_d", "" },
            { "rhsusf_M977A4_AMMO_BKIT_usarmy_d", "" },
            { "rhsusf_mrzr4_d", "" },
            { "RHS_M2A3_BUSKIII", "" }
        };
    };

    class rebel_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "rhsusf_m1025_w_m2", "" },
            { "I_G_Offroad_01_AT_F", "" },
            { "rhs_uh1h_hidf", "" },
            { "RHS_Mi8mt_vvs", "" }
        };
    };

	class un_air {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "sab_UN_AAF_Heli", "" },
            { "RHS_MELB_AH6M", "" },
            { "rhs_uh1h_hidf_gunship", "" }

        };
    };

	class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
			{ "EC635_Unarmed", "call life_coplevel >= 1" },
			{ "RHS_MELB_MH6M", "call life_coplevel >= 1" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "C_Boat_Transport_02_F", "" }, //Apex DLC
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };

	class apalon_LadaNiva2329 {
        vItemSpace = 200;
        conditions = "";
        price = 15000;
        textures[] = {};
    };

	class apalon_Buggy {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

	class V12_ESCALADE1 {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

	class V12_ESCALADE2_MET {
        vItemSpace = 50;
        conditions = "";
        price = 75000;
        textures[] = {};
    };

	class AlessioMustangMat {
        vItemSpace = 50;
        conditions = "";
        price = 185000;
        textures[] = {};
    };

	class ivory_lp560 {
        vItemSpace = 50;
        conditions = "";
        price = 850000;
        textures[] = {};
    };

	class ivory_gt500 {
        vItemSpace = 50;
        conditions = "";
        price = 425000;
        textures[] = {};
    };

	class V12_YZF_Rouge {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

	class V12_YZF_noir {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

	class RDS_Gaz24_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 8000;
      textures[] = {};
	};

  class RDS_Golf4_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 8000;
      textures[] = {};
	};

  class C_Hatchback_01_sport_F {
      vItemSpace = 100;
      conditions = "";
      price = 10000;
      textures[] = {};
  };

  class RDS_Ikarus_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 10000;
      textures[] = {};
  };

  class RDS_JAWA353_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 8000;
      textures[] = {};
  };

  class ivory_190e_taxi {
      vItemSpace = 100;
      conditions = "";
      price = 12000;
      textures[] = {};
  };

  class RDS_MMT_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 10000;
      textures[] = {};
  };

  class RDS_S1203_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 8000;
      textures[] = {};
  };

  class RDS_Zetor6945_Base {
      vItemSpace = 100;
      conditions = "";
      price = 8000;
      textures[] = {};
  };

  class rhs_uaz_open_MSV_01 {
      vItemSpace = 100;
      conditions = "";
      price = 6000;
      textures[] = {};
  };

  class C_Van_02_transport_F {
      vItemSpace = 100;
      conditions = "";
      price = 11000;
      textures[] = {};
  };

  class RDS_Lada_Civ_01 {
      vItemSpace = 100;
      conditions = "";
      price = 10000;
      textures[] = {};
  };

  class RDS_tt650_Civ_01 {
       vItemSpace = 100;
       conditions = "";
       price = 6000;
       textures[] = {};
  };

 class d3s_crown_98 {
      vItemSpace = 50;
      conditions = "";
      price = 12000;
      textures[] = {};

  };


  class d3s_explorer_13 {
      vItemSpace = 50;
      conditions = "";
      price = 35000;
      textures[] = {};

  };

  class d3s_taurus_eco_10 {
      vItemSpace = 50;
      conditions = "";
      price = 15000;
      textures[] = {};

  };

  class d3s_savana_05 {
      vItemSpace = 50;
      conditions = "";
      price = 22000;
      textures[] = {};

  };

  class d3s_h2_02 {
      vItemSpace = 50;
      conditions = "";
      price = 75000;
      textures[] = {};

  };

  class d3s_q50_ER_14 {
      vItemSpace = 50;
      conditions = "";
      price = 28000;
      textures[] = {};

  };

  class d3s_cherokee_18 {
      vItemSpace = 50;
      conditions = "";
      price = 45000;
      textures[] = {};

  };

  class d3s_clubman_11 {
      vItemSpace = 50;
      conditions = "";
      price = 19000;
      textures[] = {};

  };

//trucks
  class RHS_Ural_Civ_01 {
      vItemSpace = 145;
      conditions = "";
      price = 35000;
      textures[] = {};
    };
	
	class RHS_Ural_Open_Civ_01 {
      vItemSpace = 145;
      conditions = "";
      price = 35000;
      textures[] = {};
    };
	
	class RHS_Ural_Civ_03 {
      vItemSpace = 145;
      conditions = "";
      price = 35000;
      textures[] = {};
    };
	
	class RHS_Ural_Civ_02 {
      vItemSpace = 145;
      conditions = "";
      price = 35000;
      textures[] = {};
    };
	
	class d3s_zil_130_05 {
      vItemSpace = 200;
      conditions = "";
      price = 75000;
      textures[] = {};
    };
	
	class d3s_zil_130_02 {
      vItemSpace = 200;
      conditions = "";
      price = 62000;
      textures[] = {};
    };
	
	class d3s_zil_130_03 {
      vItemSpace = 100;
      conditions = "";
      price = 35000;
      textures[] = {};
    };
	
	class d3s_kamaz_2 {
      vItemSpace = 450;
      conditions = "";
      price = 95000;
      textures[] = {};
    };
	
	class d3s_kamaz_4350_tent {
      vItemSpace = 450;
      conditions = "";
      price = 95000;
      textures[] = {};
    };
	
	class d3s_kraz_6316 {
      vItemSpace = 750;
      conditions = "";
      price = 150000;
      textures[] = {};
    };

  class d3s_next {
      vItemSpace = 150;
      conditions = "";
      price = 65000;
      textures[] = {};
    };
	
	class d3s_actros_14_giga {
      vItemSpace = 1000;
      conditions = "";
      price = 350000;
      textures[] = {};
    };
	
	class d3s_actros_14 {
      vItemSpace = 1000;
      conditions = "";
      price = 350000;
      textures[] = {};
    };
  

//planes

class Sab_737 {
        vItemSpace = 200;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class Sab_737_2 {
        vItemSpace = 200;
        conditions = "";
        price = 500000;
        textures[] = {};
    };

    class sab_aeroc {
        vItemSpace = 100;
        conditions = "";
        price = 180000;
        textures[] = {};
    };

    class sab_comet {
        vItemSpace = 75;
        conditions = "";
        price = 145000;
        textures[] = {};
    };

    class sab_do228 {
        vItemSpace = 100;
        conditions = "";
        price = 125000;
        textures[] = {};
    };

    class sab_falcon {
        vItemSpace = 150;
        conditions = "";
        price = 200000;
        textures[] = {};
    };

    class sab_trimotor {
        vItemSpace = 35;
        conditions = "";
        price = 85000;
        textures[] = {};
    };

    class sab_robindr400 {
        vItemSpace = 25;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class sab_stampe {
        vItemSpace = 75;
        conditions = "";
        price = 72500;
        textures[] = {};
    };

	class sab_zlin {
        vItemSpace = 10;
        conditions = "";
        price = 35000;
        textures[] = {};
    };

  class I_Heli_Transport_02_F {
      vItemSpace = 700;
      conditions = "";
      price = 70000;
      textures[] = {};
  };

  class rhsusf_CH53E_USMC {
      vItemSpace = 2500;
      conditions = "";
      price = 120000;
      textures[] = {};
  };

  class d3s_HH_65 {
      vItemSpace = 800;
      conditions = "";
      price = 80000;
      textures[] = {};
  };

  class rhs_ka60_grey {
      vItemSpace = 770;
      conditions = "";
      price = 80000;
      textures[] = {};
  };

  class C_Heli_Light_01_civil_F {
      vItemSpace = 700;
      conditions = "";
      price = 80000;
      textures[] = {};
  };

  class I_C_Heli_Light_01_civil_F {
      vItemSpace = 800;
      conditions = "";
      price = 80000;
      textures[] = {};
  };

  class RHS_Mi8amt_civilian {
      vItemSpace = -1;
      conditions = "";
      price = -1;
      textures[] = {};
  };

  class RHS_C130J {
      vItemSpace = 10000;
      conditions = "";
      price = 210000;
      textures[] = {};
  };

  class RHS_Mi8t_civilian {
      vItemSpace = 1600;
      conditions = "";
      price = 125000;
      textures[] = {};
  };

//southgov

  class rhs_tigr_vdv {
      vItemSpace = 100;
      conditions = "";
      price = 220000;
      textures[] = {};
  };

  class rhs_gaz66_vmf {
      vItemSpace = 150;
      conditions = "";
      price = 140000;
      textures[] = {};
  };

  class rhs_gaz66_zu23_vmf {
      vItemSpace = 100;
      conditions = "";
      price = 460000;
      textures[] = {};
  };

  class rhs_bmd2 {
      vItemSpace = 100;
      conditions = "";
      price = 800000;
      textures[] = {};
  };

  class rhs_zsu234_aa {
      vItemSpace = 120;
      conditions = "";
      price = 950000;
      textures[] = {};
  };

  class rhs_t80um {
      vItemSpace = 120;
      conditions = "";
      price = 1000000;
      textures[] = {};
  };

//ems

  class d3s_tahoe_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_charger_15_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_explorer_EMS_13 {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_fseries_17_Rescue {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_fseries_17_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_savana_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_fpace_17_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class d3s_vklasse_17_EMS {
      vItemSpace = 100;
      conditions = "";
      price = 1000;
      textures[] = {};
  };

  class RHS_UH60M_MEV2_d {
      vItemSpace = 100;
      conditions = "";
      price = 10000;
      textures[] = {};
  };

//police & bounty

  class d3s_tahoe_UNM {
      vItemSpace = 100;
      conditions = "";
      price = 4000;
      textures[] = {};
  };

  class ivory_rs4_marked {
      vItemSpace = 50;
      conditions = "";
      price = 0;
      textures[] = {};
  };

  class d3s_eldorado_76 {
      vItemSpace = 50;
      conditions = "";
      price = 6000;
      textures[] = {};
  };

  class ivory_isf_marked {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
  };

  class ivory_m3_marked {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
  };

  class d3s_donkervoort_17 {
        vItemSpace = 20;
        conditions = "";
        price = 50000;
        textures[] = {};
  };

  class ivory_evox_marked {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
	};

  class ivory_wrx_marked {
        vItemSpace = 50;
        conditions = "";
        price = 5000;
        textures[] = {};
	};

  //northgov

  class tahoe_ltz_08 {
      vItemSpace = 75;
      conditions = "";
      price = 20000;
      textures[] = {};
  };

  class d3s_vv222_18_2 {
      vItemSpace = 50;
      conditions = "";
      price = 25000;
      textures[] = {};
  };

  class d3s_AS_365 {
      vItemSpace = 200;
      conditions = "";
      price = 50000;
      textures[] = {};
  };


//un

  class sab_UN_Strider {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class sab_UN_Truck_C {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_M1085A1P2_B_D_Medical_fmtv_usarmy {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m998_d_2dr {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m998_d_s_2dr_fulltop {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m998_d_4dr {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m998_d_4dr_halftop {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_stryker_m1126_m2_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1240a1_usarmy_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1240a1_m2crows_usarmy_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1240a1_m2_usarmy_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1240a1_m240_usarmy_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1245_m2crows_socom_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_M977A4_AMMO_BKIT_usarmy_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_mrzr4_d {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class RHS_M2A3_BUSKIII {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1a1aimd_usarmy {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class rhsusf_m1025_w_m2 {
      vItemSpace = 75;
      conditions = "";
      price = 65000;
      textures[] = {};
  };



//Rebel



  class rhs_uh1h_hidf {
      vItemSpace = 200;
      conditions = "";
      price = 300000;
      textures[] = {};
  };

  class RHS_Mi8mt_vvs {
      vItemSpace = 180;
      conditions = "";
      price = 300000;
      textures[] = {};
  };

  class I_G_Offroad_01_AT_F {
      vItemSpace = 75;
      conditions = "";
      price = 280000;
      textures[] = {};
  };

//unpilot

  class sab_UN_AAF_Heli {
      vItemSpace = 200;
      conditions = "";
      price = 20000;
      textures[] = {};
  };

  class RHS_MELB_AH6M {
      vItemSpace = 0;
      conditions = "";
      price = 75000;
      textures[] = {};
  };


  class rhs_uh1h_hidf_gunship {
      vItemSpace = 200;
      conditions = "";
      price = 50000;
      textures[] = {};
  };

  class EC635_Unarmed {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  class RHS_MELB_MH6M {
      vItemSpace = 1;
      conditions = "";
      price = 1;
      textures[] = {};
  };

  //civ cars

  class d3s_BMW_S_1000_RR {
        vItemSpace = 10;
        conditions = "";
        price = 80000;
        textures[] = {};

  };

  class d3s_Ducati_Monster_1200_S {
        vItemSpace = 10;
        conditions = "";
        price = 80000;
        textures[] = {};

  };
  class d3s_Kawasaki_Ninja_H2R {
        vItemSpace = 10;
        conditions = "";
        price = 80000;
        textures[] = {};

  };

  class d3s_KTM_1290_Super_Duke {
        vItemSpace = 10;
        conditions = "";
        price = 80000;
        textures[] = {};

  };

  class d3s_Suzuki_GSX_R_1000 {
        vItemSpace = 10;
        conditions = "";
        price = 80000;
        textures[] = {};

  };

  class d3s_e60_09_ACS5 {
        vItemSpace = 50;
        conditions = "";
        price = 60000;
        textures[] = {};

 };

   class d3s_giulia_quad_16 {
         vItemSpace = 50;
         conditions = "";
         price = 60000;
         textures[] = {};

 };

    class d3s_stelvio_19_MNSTR {
          vItemSpace = 50;
          conditions = "";
          price = 90000;
          textures[] = {};

 };

     class d3s_RS7_13 {
           vItemSpace = 50;
           conditions = "";
           price = 100000;
           textures[] = {};

  };

    class d3s_f87_17 {
          vItemSpace = 50;
          conditions = "";
          price = 60000;
          textures[] = {};

  };

    class d3s_e38_98 {
          vItemSpace = 50;
          conditions = "";
          price = 110000;
          textures[] = {};

  };

    class d3s_amazing_ACS8_17_IND {
          vItemSpace = 50;
          conditions = "";
          price = 130000;
          textures[] = {};

 };

    class d3s_amazing_ACS8_17 {
          vItemSpace = 50;
          conditions = "";
          price = 130000;
          textures[] = {};

 };

    class d3s_f87_17_EX {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

 };

    class d3s_f87_18_m {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

 };

   class d3s_f80_14 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
                  textures[] = {};

  };

  class d3s_amazing_f82_16 {
        vItemSpace = 50;
        conditions = "";
        price = 110000;
        textures[] = {};
  };

  class d3s_e60_09 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

 class d3s_f90_18_m {
       vItemSpace = 50;
       conditions = "";
       price = 100000;
       textures[] = {};

  };

  class d3s_amazing_f10_12_EX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

   };

   class d3s_f85_15_m {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

    };

    class d3s_e89_12 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

   };

    class d3s_g800_17 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_skylark_52 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

   class d3s_ctsv_16 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

   class d3s_escalade_16 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

  class d3s_camaro_zl1_1le_18 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

   };

   class d3s_malibu_18 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

  class d3s_malibu_18_red {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_tahoe_08 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_tahoe_EX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_tahoe_limited {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_300C_12 {
      vItemSpace = 50;
      conditions = "";
      price = 100000;
      textures[] = {};

  };

  class d3s_challenger_15_WIDE {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_charger_15 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

    class d3s_coronet_70 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_durango_18_SRT {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_explorer_sport_13 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_raptor_SCR_17 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};
	};

    class d3s_focus_17_LB {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

 };

    class RAPTOR_BIG {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
         textures[] = {};

 };

  class d3s_qx56_13_SE {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

  class d3s_fpace_17_s {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
       textures[] = {};

  };

  class d3s_xesv_17 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_cherokee_18_TRCK {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

   class d3s_sian_20 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

  class d3s_urus_18_EX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

 class d3s_ghibli_esteso_14 {
       vItemSpace = 50;
       conditions = "";
       price = 100000;
       textures[] = {};

  };

  class d3s_levante_s_17_mat {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_amazing_a45_16_EX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_C63S_14 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_amgGT_19_43 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_e350_16 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

   class d3s_w212s_13 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

    class d3s_w212s_13_EX {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_gl63amg_12_SE {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_ml350_09 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_w140_98 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};
	};

    class d3s_gls63_17 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

    class d3s_pajero_07_38 {
          vItemSpace = 50;
          conditions = "";
          price = 100000;
          textures[] = {};

  };

   class d3s_juke_15 {
         vItemSpace = 50;
         conditions = "";
         price = 100000;
         textures[] = {};

  };

  class d3s_silvia_s15_02 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_skyline_02 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_titan_17 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_roadrunner_71_340 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_roadrunner_71_GTX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_macan_16 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_panamera_17 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_vogue_14_V6 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_evoque_16 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_svr_17_CHARGED {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

  class d3s_svr_17_007 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_cullinan_19_II {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_cullinan_19_BB {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_cullinan_19_FE {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_dawn_16_II {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_dawn_16 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

  class d3s_dawn_16_III {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_ghost_18_EWB {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_ghost_18_EWB_II {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_ghost_18_EWB_III {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

  class d3s_novus_phantom_18 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_novus_phantom_18_3 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_novus_phantom_18_2 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_wrx_17_FnF8 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

 };

 class d3s_wrx_sti_17 {
       vItemSpace = 50;
       conditions = "";
       price = 100000;
       textures[] = {};

  };

  class d3s_teslaS_16_85 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_avalon_18 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_camry_18 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_200_16_EX {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  class d3s_200_VX_16 {
        vItemSpace = 50;
        conditions = "";
        price = 100000;
        textures[] = {};

  };

  //SuperCars

  class d3s_eb110_19 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_voiture_19 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_599GTO_12 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_LaFerrari_14 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_boss_15 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_intensa_19 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_FType_19 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_agera_11 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_jesko_20 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_regera_15 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

 class d3s_asterion_15 {
       vItemSpace = 50;
       conditions = "";
       price = 300000;
       textures[] = {};

 };

  class d3s_huracan_18 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

 };

  class d3s_huracan_18_SPD_P {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_veneno_13 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_alfieri_14 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_mclaren_18 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_f1gt_97 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_senna_18 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_amgGT_15 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

	class d3s_amgGTR_15 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

	};


  class d3s_zonda_18 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_911gt3rs_18 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

  class d3s_cayenne_16 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

  };

	class d3s_cayenne_turbo_16 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

	};

  class d3s_tuatara_19 {
        vItemSpace = 50;
        conditions = "";
        price = 300000;
        textures[] = {};

	};
};

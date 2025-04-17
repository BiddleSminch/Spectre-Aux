class CfgPatches
{
	class Spectre_Retextures
	{
		units[] = {"As_Fem_MidArm_Spectre","As_Underarmor_Spectre","GethArmor_Spectre_Inf"};
		weapons[] = {"As_Fem_MidArm_Spectre_CombatUniform","As_Underarmor_Spectre_CombatUniform","As_helmet_Spectre","GethArmor_Spectre_inf_CombatUniform"};
		requiRedVersion = 0.1;
		requiRedAddons[] = {"A3_Data_F","A3_Weapons_F",};
		author = "JMax";
	};
};

class CfgVehicles
{
    class MEOP_Armor_Soldier_Base;

    // Asari
	class As_Fem_MidArm_Spectre: MEOP_Armor_Soldier_Base
	{
		author = "JMax";
		scope = 1;
		modelsides[] = {6};
		model = "\MEOP_asari\AsMidArmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Spectre_Aux\Spectre_Retexture\Textures\SST_AsBattleArmour_V1.paa"};
	};
	class As_Underarmor_Spectre: MEOP_Armor_Soldier_Base
	{
		author = "JMax";
		scope = 1;
		modelsides[] = {6};
		model = "\MEOP_asari\AsUnderarmor.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Spectre_Aux\Spectre_Retexture\Textures\SST_AsUndersuit_V1.paa"};
	};

	// Geth
	class GethArmor_Spectre_Inf: MEOP_Armor_Soldier_Base
	{
		author = "JMax";
		scope = 1;
		modelsides[] = {6};
		model = "\MEOP_geth\Infiltrator.p3d";
		nakedUniform = "U_BasicBody";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Spectre_Aux\Spectre_Retexture\Textures\SST_GeArmour_V1.paa"};
	};
};

class CfgWeapons
{
    class Uniform_Base;
    class UniformItem;
    class HeadgearItem;
    class ItemCore;

    // Asari
	class As_Fem_MidArm_Spectre_CombatUniform: Uniform_Base
	{
		author = "JMax";
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "[Asari] Battle armor (Spectre)";
		picture = "\MEOP_asari\data\ico\Ico_underarm_black.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "As_Fem_MidArm_Spectre";
			Armor = 10;
			modelSides[] = {6};
			containerClass = "Supply120";
			mass = 10;
		};
	};
	class As_Underarmor_Spectre_CombatUniform: Uniform_Base
	{
		author = "JMax";
		scope = 2;
		displayName = "[Asari] Under Armor (Spectre)";
		picture = "\MEOP_asari\data\ico\Ico_underarm_blue.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "As_Underarmor_Spectre";
			Armor = 10;
			modelSides[] = {6};
			containerClass = "Supply50";
			mass = 10;
		};
	};


	class As_helmet_Spectre: ItemCore
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "JMax";
		displayName = "[Asari] Battle helmet (Spectre)";
		picture = "\MEOP_human\data\ico\Ico_helm_black.paa";
		model = "MEOP_asari\helmets\Helmet1.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"Spectre_Aux\Spectre_Retexture\Textures\SST_AsBattleHelm_V1.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 30;
			uniformmodel = "MEOP_asari\helmets\Helmet1.p3d";
			modelSides[] = {6};
			hiddenSelections[] = {"Camo1"};
    		material = -1;
		};
	};

	//Geth
	class GethArmor_Spectre_inf_CombatUniform: Uniform_Base
	{
		author = "JMax";
		scope = 2;
		displayName = "[Geth] Infiltrator uniform (Spectre)";
		picture = "\MEOP_geth\data\ico\Ico_body_infW.paa";
		nakedUniform = "U_BasicBody";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "GethArmor_Spectre_Inf";
			Armor = 20;
			modelSides[] = {6};
			containerClass = "Supply100";
			mass = 40;
		};
	};
};
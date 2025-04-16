////////////////////////////////////////////////////////////////////
//DeRap: D:\SteamLibrary\steamapps\common\Arma 3\!Workshop\@JM´s Mass Effect\addons\MEOP_weapons\MEOP_weapons\ml77\ml78\config.bin
//Produced from mikero's Dos Tools Dll version 10.01
//https://mikero.bytex.digital/Downloads
//'now' is Tue Apr 15 02:48:41 2025 : 'file' last modified on Wed Apr 20 17:44:21 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class Spectre_Weapons
	{
		units[] = {};
		weapons[] = {"MEOP_launch_ml78_F"};
		magazines[] = {"MEOP_ML78Missle_AT_F","MEOP_ML78Missle_AA_F"};
		ammo[] = {"MEOP_M_Abrudas_AT_F","MEOP_M_Abrudas_AA_F"};
		requiRedVersion = 0.1;
		requiRedAddons[] = {"A3_Data_F","A3_Weapons_F","ml78W","MEOP_mag","MEOP_ammo"};
		author = "JMax";
	};
};
class Mode_SemiAuto;
class Mode_FullAuto;
class SlotInfo;
class CowsSlot;
class MuzzleSlot;

class CfgWeapons
{
    class BaseSoundModeType;
	class Launcher_Base_F;
	class MEOP_launch_ml78_F: Launcher_Base_F
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayname = "ML-78 Missle Launcher";
		modes[] = {"Single"};
        lockedTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locked_Titan",0.316228,2.5};
        lockingTargetSound[] = {"A3\Sounds_F\arsenal\weapons\Launchers\Titan\locking_Titan",0.316228,1};
		class Single: Mode_SemiAuto
		{
            ace_missileGuidance_attackProfile = "JAV_DIR";
            aiDispersionCoefX = 1.4;
            aiDispersionCoefY = 1.7;
            aiRateOfFire = 7;
            aiRateOfFireDispersion = 1;
            aiRateOfFireDistance = 500;
            artilleryCharge = 1;
            artilleryDispersion = 1;
            autoFire = 0;
            burst = 1;
            burstRangeMax = -1;
            canShootInWater = 0;
            dispersion = 0.0002;
            displayName = "$STR_DN_MODE_SEMIAUTO";
            ffCount = 1;
            ffFrequency = 11;
            ffMagnitude = 0.5;
            flash = "gunfire";
            flashSize = 0.1;
            maxRange = 790;
            maxRangeProbab = 0.8;
            midRange = 50;
            midRangeProbab = 0.8;
            minRange = 25;
            minRangeProbab = 0.8;
            multiplier = 1;
            recoil = "recoil_single_titan";
            recoilProne = "recoil_single_primary_prone_3outof10";
            reloadTime = 0.1;
            requiredOpticType = -1;
            showToPlayer = 1;
            sound[] = {"",10,1};
            soundBegin[] = {"sound",1};
            soundBeginWater[] = {"sound",1};
            soundBurst = 0;
            soundClosure[] = {"sound",1};
            soundContinuous = 0;
            soundEnd[] = {};
            soundLoop[] = {};
            sounds[] = {"StandardSound"};
            class StandardSound: BaseSoundModeType
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons\Launchers\NLAW\nlaw",1.99526,1,1800};
                soundBegin[] = {"begin1",1};
                soundSetShot[] = {"Launcher_NLAW_Shot_SoundSet","Launcher_NLAW_Tail_SoundSet"};
            };
            textureType = "semi";
            useAction = 0;
            useActionTitle = "";
            weaponSoundEffect = "";
        };
		class OpticsModes
		{
			class optic
			{
				opticsID = 1;
				useModelOptics = 1;
				opticsZoomMin = 0.0623;
				opticsZoomMax = 0.0623;
				opticsZoomInit = 0.0623;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "opticView";
				opticsFlare = 1;
				opticsDisablePeripherialVision = 1;
				cameraDir = "look";
				visionMode[] = {"Normal","NVG","TI"};
				opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
			};
		};
		canLock = 2;
		weaponLockDelay = 3;
		lockAcquire = 0;
		weaponLockSystem = 2;
		magazines[] = {"MEOP_ML78Missle_AT_F","MEOP_ML78Missle_AA_F"};
	};
};

class CfgMagazines
{
    class CA_LauncherMagazine;
	class MEOP_ML78Missle_AT_F: CA_LauncherMagazine
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ML78 AT Missile";
		ammo = "MEOP_M_Abrudas_AT_F";
		count = 1;
		initSpeed = 20;
		maxLeadSpeed = 25;
		mass = 40;
	};
	class MEOP_ML78Missle_AA_F: CA_LauncherMagazine
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		displayName = "ML78 AA Missile";
		ammo = "MEOP_M_Abrudas_AA_F";
		count = 1;
		initSpeed = 20;
		maxLeadSpeed = 250;
		mass = 40;
	};
};

class CfgAmmo
{
	class M_Titan_AT_long;
	class M_Titan_AA_long;
	class MEOP_M_Abrudas_AT_F: M_Titan_AT_long
	{
		maxControlRange = 5000;
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit = 800;
		indirectHit = 80;
		indirectHitRange = 2;
		maneuvrability = 20;
		CraterEffects = "ATRocketCrater";
		explosionEffects = "ATRocketExplosion";
		effectsMissileInit = "RocketBackEffectsNLAW";
	};
	class MEOP_M_Abrudas_AA_F: M_Titan_AA_long
	{
		model = "\A3\weapons_f\launchers\RPG32\pg32v_rocket.p3d";
		hit = 650;
		indirectHit = 320;
		indirectHitRange = 8;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		effectsMissileInit = "RocketBackEffectsRPG";
	};
};

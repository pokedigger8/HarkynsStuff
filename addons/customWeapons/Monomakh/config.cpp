class CfgPatches
{
	class Harkyn_Monomakh
	{
		units[] = {};
		weapons[] = {"hrn_MonomakhSniper"};
		requiredVersion = 1.4;
		requiredAddons[] = {"A3_Weapons_F_LongRangeRifles_GM6"};
		version = 1;
	};
};

class cfgweapon {
	class srifle_GM6_F;

	class hrn_MonomakhSniper : srifle_GM6_F {
		author = "Harkyn";
		scope = 2;
		displayName = "[HRN] Monomakh Anti-Material Rifle";
		descriptionShort = "Monomakh Anti-Material Rifle";
		model = "\HRN_customWeapons\Monomakh\model\Monomakh_Arma3.p3d";
		handAnim[] = {"OFP2_ManSkeleton"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "GestureReloadMX";
		magazineReloadSwitchPhase = 0.48;
		initSpeed = -1;
		htMin = 11;
		htMax = 730;
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.4;
		maxRecoilSway = 0.1;
		swayDecaySpeed = 1.25;
		maxZeroing = 1200;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {1,0,0};
		fireLightAmbient[] = {0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.5,0.4};
				iconScale = 0.15;
				compatibleItems[] = {"optic_DMS","optic_Nightstalker"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot{};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
			mass = 120;
		};
	};
};

/*
cartridgepos = "nabojnicestart";
cartridgevel = "nabojniceend";
handanim[] ={"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
model = """\Ukrainian SnipeX Monomakh\addons\Monomakh_Arma3.p3d"""; //location of the P3D model
picture = "\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";
modes[] = {"Single"}; //Firing Mode
muzzleend = "konec hlavne"; //Muzzle end
muzzlepos = "usti hlavne"; //Muzzle start pos
//The default/empty UI Icon for the gun in the
//Inventory screen, I’ll go over making this later
reloadaction = "GestureReloadEBR"; 

class WeaponSlotsInfo {
allowedslots[] = {901};
mass = 25;
class MuzzleSlot {
compatibleitems[] = {"muzzle_snds_L"};
displayname = "Muzzle Slot";
linkproxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
scope = 0;
};
class CowsSlot {
compatibleitems[] = {"optic_Arco", "optic_aco", "optic_ACO_grn",
"optic_hamr", "optic_Holosight"};
displayname = "Optics Slot";
linkproxy = "\A3\data_f\proxies\weapon_slots\TOP";
scope = 2;
};
class PointerSlot {};
};
class cfgAmmo{
ammo = "B_127x108_Ball";
author = "$STR_A3_Bohemia_Interactive";
count = 5;
descriptionShort = "$STR_A3_CfgMagazines_5Rnd_127x108_Mag1";
displayName = "$STR_A3_CfgMagazines_5Rnd_127x108_Mag0";
initSpeed = 820;
mass = 16;
picture = "\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
scope = 2;}
class cfgMagazine
    class 20Rnd_762x51_Mag;
    class 145x114_mag: 20Rnd_762x51_Mag
    {
        scope=2;
    scopeArsenal=2;
    scopeCurator=2;
    displayName="14.5x114 FMJ Ammo";
    ammo="14.5x114 FMJ Ammo";
    count=5;
    tracersEvery=1;
    descriptionShort=""; 
        mass="15";
    };
};
		author = "Harkyn";
		scope = 0;
		displayName = "Monomakh Anti-Material Rifle";
		descriptionShort = "Monomakh Anti-Material Rifle";
		model = "\Ukrainian SnipeX Monomakh\"\addons\Monomakh_Arma3.p3d"";
		handAnim[] = {"OFP2_ManSkeleton"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "GestureReloadMX";
		magazineWell[]=
		{
		};	
		magazines[] = {"Magazine"};
		magazineReloadSwitchPhase = 0.48;
		initSpeed = -1;
		htMin = 11;
		htMax = 730;
		inertia = 0.6;
		aimTransitionSpeed = 1;
		dexterity = 1.4;
		maxRecoilSway = 0.1;
		swayDecaySpeed = 1.25;
		maxZeroing = 1200;
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",0.562341,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Katiba\firemode_katiba",0.251189,1,5};
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {1,0,0};
		fireLightAmbient[] = {0,0,0};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
				iconPosition[] = {0.5,0.4};
				iconScale = 0.15;
				compatibleItems[] = {"optic_DMS","optic_Nightstalker"};
			};
			class MuzzleSlot: MuzzleSlot
			{
				compatibleItems[] = {};
			};
			class UnderBarrelSlot{};
			class PointerSlot: PointerSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
				iconPosition[] = {0.2,0.45};
				iconScale = 0.25;
				compatibleItems[] = {"acc_flashlight","acc_pointer_IR"};
			};
			mass = 120;
		};
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
        };
*/
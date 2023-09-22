class CfgPatches
{
	class Monomakh
	{
		units[] = {};
		weapons[] = {"Monomakh"};
		magazines[] = {"tb_145x115mm_5rndmag","tb_145x115mm_5rndmag_Tracer"};
		ammo[] = {"tb_145x115mm_API","tb_145x115mm_Tracer"};
		requiredVersion = 1.4;
		requiredAddons[] = {"A3_Data_F_Decade_Loadorder","cba_jr","ace_main"};
		version = 1;
	};
};

class cfgAmmo 
{
	class BulletBase;
	class tb_145x115mm_API: BulletBase
	{
		ACE_caliber = 14.88;
		ACE_bulletLength = 41.1;
		ACE_bulletMass = 64.4;
		ACE_standardAtmosphere = "ASM";
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_velocityBoundaries[] = {};
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_dragModel = 7;
		ACE_ballisticCoefficients[] = {0.408};
		ACE_muzzleVelocities[] = {1000};
		ACE_barrelLengths[] = {1000};
		caliber = 2;
		hit = 30;
		airFriction = -0.001;
		typicalSpeed = 1090;
		scope = 2;
	};
	class tb_145x115mm_Tracer: BulletBase
	{
		ACE_caliber = 14.88;
		ACE_bulletLength = 41.1;
		ACE_bulletMass = 64.4;
		ACE_standardAtmosphere = "ASM";
		ACE_muzzleVelocityVariationSD = 0.35;
		ACE_velocityBoundaries[] = {};
		ACE_ammoTempMuzzleVelocityShifts[] = {-26.55,-25.47,-22.85,-20.12,-16.98,-12.8,-7.64,-1.53,5.96,15.17,26.19};
		ACE_dragModel = 7;
		ACE_ballisticCoefficients[] = {0.408};
		ACE_muzzleVelocities[] = {1090};
		ACE_barrelLengths[] = {1000};
		caliber = 2;
		hit = 30;
		model = "\A3\Weapons_f\Data\bullettracer\tracer_green";
		airFriction = -0.001;
		typicalSpeed = 1090;
		scope = 2;
	};
};

class cfgMagazines 
{
	class CA_Magazine;
    class tb_145x115mm_5rndmag: CA_Magazine
	{
		author = "Harkyn";
		scope = 2;
		displayName = "14.5x114 5rnd API";
		count = 5;
		ammo = "tb_145x115mm_API";
		mass = 14;
		initSpeed = 945;
		descriptionShort = "Caliber: 14.5x114mm Russian<br />Rounds: 6";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecialIsProxy = 1;
		modelSpecial = "\HRN_customWeapons\Monomakh\model\Monomakh_Arma3.p3d";

    };
	class tb_145x115mm_5rndmag_Tracer: CA_Magazine
	{
		author = "Harkyn";
		scope = 2;
		displayName = "14.5x114 5rnd API-T";
		count = 5;
		ammo = "tb_145x115mm_Tracer";
		tracersEvery = 0;
		mass = 14;
		initSpeed = 945;
		descriptionShort = "Caliber: 14.5x114mm Russian<br />Rounds: 6";
		model = "\A3\weapons_F\ammo\mag_univ.p3d";
		modelSpecialIsProxy = 1;
		modelSpecial = "\HRN_customWeapons\Monomakh\model\145x114_FMJ_Magazine.p3d";

    };
};
class Mode_SemiAuto;
class WeaponSlotsInfo;
class SlotInfo;
class asdg_OpticRail;
class MuzzleSlot;
class PointerSlot;
class UnderBarrelSlot;
class Single;
class cfgweapons 
{
	class slotInfo;
    class CowsSlot: slotInfo
    {
        linkProxy= "\A3\data_f\proxies\weapon_slots\TOP";
        displayName = "$STR_A3_CowsSlot0";
    };
	class Rifle_Base_F;
	class Monomakh : Rifle_Base_F
	{	
		author = "Harkyn";
		scope = 2;
		recoil = "recoil_gm6";
		displayName = "Monomakh Anti-Material Rifle";
		descriptionShort = "14.5x114mm Anti Material Rifle made by SnipeX in Ukraine.";
		model = "\HRN_customWeapons\Monomakh\model\Monomakh_Arma3.p3d";
		scopeArsenal = 2;
		modes[] = {"Single"};
		magazines[] = {"tb_145x115mm_5rndmag","tb_145x115mm_5rndmag_Tracer"};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",1,1,10};
		handanim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"};
		selectionFireAnim = "muzzleFlash";
		reloadAction = "GestureReloadMX";
		baseWeapon = "Monomakh";
		ACE_barrelLength = 1000.0;
		ACE_barrelTwist = 455;
		ACE_twistDirection = 1;
		weaponSoundEffect = "";
		sound[]={"\Ukrainian SnipeX Monomakh\sound\Monomakh_Firing.wav",1,1};
		zeroingSound[] = {"A3\Sounds_F\arsenal\sfx\shared\zeroing_knob_tick_metal",0.316228,1,5};
		ACE_overheating_closedBolt = 1;
		magazineWell[]={};
		simulation="Weapon";
		magazineReloadSwitchPhase = 0.48;
		initSpeed = -1;
		htMin = 11;
		htMax = 1400;
		inertia = 1;
		aimTransitionSpeed = 1;
		dexterity = 0.3;
		maxRecoilSway = 0.5;
		swayDecaySpeed = 1.25;
		maxZeroing = 2500;
		fireLightDuration = 0.05;
		fireLightIntensity = 0.5;
		fireLightDiffuse[] = {1,0,0};
		fireLightAmbient[] = {0,0,0};
		class Single: Mode_SemiAuto
		{
			reloadTime = 0.1;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot: CowsSlot
			{
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
class CfgSoundCurves
{
	class InverseSquare1Curve
	{
		points[] = {{0,0.9751},{0.1,0.6332},{0.2,0.4307},{0.3,0.3009},{0.4,0.2128},{0.5,0.1503},{0.6,0.1043},{0.7,0.0695},{0.8,0.0426},{0.9,0.0213},{1,0.0041}};
	};
};
class cfgSoundShaders
{
	class Monomakh_closure_SoundShader
	{
		samples[] ={{ "P:\Ukrainian SnipeX Monomakh\sound\Monomakh_Firing.wav", 1 }};
		volume = 0.5;
		Limitation = 0;
		range = 10;
		rangeCurve[] =
		{
			{ 0, 1 },
			{ 5, 0.7 },
			{ 10, 0 }
		};
		class Monomakh_closeShot_SoundShader
	{
		samples[] ={{ "P:\Ukrainian SnipeX Monomakh\sound\Monomakh_Firing.wav", 1 }};
		volume = 1;
		Limitation = 0;
		range = 50;
		Frequency = 1;
		rangeCurve[] =
		{
			{ 0, 1 },
			{ 5, 0.7 },
			{ 10, 0 }
		};
	};
};
};

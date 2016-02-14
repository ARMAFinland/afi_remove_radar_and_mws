class CfgPatches {
	class afi_remove_rhsusf {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RHS_US_A2_AirImport","RHS_US_A2Port_Armor"};
	};
};

class CfgVehicles {
	class Heli_Attack_01_base_F;
	class RHS_AH1Z_base: Heli_Attack_01_base_F {
		radarType=8;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
		class MFD {
			class Kimi_HUD_2 {
				class Draw {
					class RadarTargets {
						points[] = {};
					};
				};
			};
		};
	};

	class RHS_AH64_base: Heli_Attack_01_base_F {
		radarType=1;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
	};

	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F {
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
		radarType=8;
		class MFD {
			class A10_Parallax_HUD {
				class Draw {
					class RadarTargets {
                        points[] = {};
					};
				};
			};
		};
	};

	class Heli_Transport_01_base_F;
	class RHS_UH60_Base: Heli_Transport_01_base_F {
		radarType=8;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
	};

	class RHS_UH60M_base: RHS_UH60_Base {
		radarType=8;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
	};

	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base: APC_Tracked_03_base_F {
		radarType = 8;
		LockDetectionSystem = 0;
		IncommingMisslieDetectionSystem = 0;
	};

	class RHS_M6: RHS_M2A2_Base {
		radarType = 4 + 8;
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		gunnerCanSee = 4 + 8 + 16;
		driverCanSee = 2 + 8 + 16;
	};
};

class cfgMods {
	author = "Johnson & Tikka";
	authorUrl = "www.armafinland.fi";
};

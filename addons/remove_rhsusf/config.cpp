class CfgPatches {
	class remove_rhsusf {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"RHS_US_A2_AirImport","RHS_US_A2Port_Armor"};
	};
};

class CfgVehicles {
	class Heli_Attack_01_base_F;
	class RHS_AH1Z_base: Heli_Attack_01_base_F {
		radarType=0;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
	};
	class Plane_CAS_01_base_F;
	class RHS_A10: Plane_CAS_01_base_F {
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
		radarType=0;
	};
	class APC_Tracked_03_base_F;
	class RHS_M2A2_Base: APC_Tracked_03_base_F {
		radarType = 0;
		LockDetectionSystem = 0;
		IncommingMisslieDetectionSystem = 0;
	};
};


class cfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};

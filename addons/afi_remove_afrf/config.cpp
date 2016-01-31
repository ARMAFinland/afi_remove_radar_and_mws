class CfgPatches {
	class afi_remove_afrf {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"rhs_c_a2port_air"};
	};
};

class CfgVehicles {
	class O_Plane_CAS_02_F;
	class RHS_su25_base: O_Plane_CAS_02_F {
		LockDetectionSystem="8";
		incomingMissileDetectionSystem=0;
		radarType=8;
	};
	class RHS_Ka52_base;
	class RHS_Ka52Black_base: RHS_Ka52_base {
		LockDetectionSystem="4 + 8";
		incomingMissileDetectionSystem=0;
		radarType=1;
	};
	class Heli_Attack_02_base_F;
	class RHS_Mi24_base: Heli_Attack_02_base_F {
		LockDetectionSystem="8";
		incomingMissileDetectionSystem=0;
		radarType=8;
	};
	class Heli_Light_02_base_F;
	class RHS_Mi8_base: Heli_Light_02_base_F {
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
		radarType=8;
};


class cfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};

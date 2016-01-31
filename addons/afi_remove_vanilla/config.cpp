class CfgPatches {
	class afi_remove_vanilla {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};

class CfgVehicles {
	class AllVehicles;
	class Air: AllVehicles {
		radarType=8;
		LockDetectionSystem="0";
		incomingMissileDetectionSystem=0;
	};

};


class cfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};

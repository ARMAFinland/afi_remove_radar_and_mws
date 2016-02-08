class CfgPatches {
	class afi_remove_radar_mws_melb {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"MELB"};
	};
};

class CfgVehicles {
	class Helicopter_Base_H;
	class MELB_base: Helicopter_Base_H {
		lockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
	};
};

class cfgMods {
	author = "Johnson";
	authorUrl = "www.armafinland.fi";
};

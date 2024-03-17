class CfgPatches
{
	class DD_Stuff
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Sounds_Effects","DZ_Gear_Camping","DZ_Characters","DZ_Scripts"};
	};
};
class CfgMods
{
	class DD_Stuff
	{
		dir = "DD_Stuff";
		hideName = 1;
		hidePicture = 1;
		name = "DD_Stuff";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"DD/Scripts/5_Mission"};
			};
		};
	};
};

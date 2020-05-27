class life_welcome_car_menu
{
	idd = 3040;
	name= "life_welcome_car_menu";
  movingEnable = false;
  enableSimulation = true;

	class ControlsBackground{};
	class Controls
	{
		class wlc_Background
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.21875;
			y = safeZoneY + safeZoneH * 0.17555556;
			w = safeZoneW * 0.5625;
			h = safeZoneH * 0.64777778;
			style = 0+80;
			text = "";
			colorBackground[] = {1,1,0.9961,0.4921};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class wlc_bar
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.21875;
			y = safeZoneY + safeZoneH * 0.17555556;
			w = safeZoneW * 0.5625;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "";
			colorBackground[] = {0,0.102,0.502,1};
			colorText[] = {0.5961,0.3176,0.5294,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class wlc_title
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.21875;
			y = safeZoneY + safeZoneH * 0.17555556;
			w = safeZoneW * 0.5625;
			h = safeZoneH * 0.06111112;
			style = 0;
			text = "Welcome to Horizon Network Takistan Life! Please choose a vehicle courtesy of the government!";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.4);

		};
		class wlc_hatchback
		{
			type = 1;
			idc = 3042;
			x = safeZoneX + safeZoneW * 0.41875;
			y = safeZoneY + safeZoneH * 0.71333334;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "Choose Hatchback";
			borderSize = 0;
			colorBackground[] = {0,0.102,0.502,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[2] call life_fnc_welcomeCar;";

		};
		class wlc_quad
		{
			type = 1;
			idc = 3043;
			x = safeZoneX + safeZoneW * 0.59375;
			y = safeZoneY + safeZoneH * 0.71333334;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "Choose Quad Bike";
			borderSize = 0;
			colorBackground[] = {0,0.102,0.502,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[3] call life_fnc_welcomeCar;";

		};
		class wlc_SUV
		{
			type = 1;
			idc = 3041;
			x = safeZoneX + safeZoneW * 0.24375;
			y = safeZoneY + safeZoneH * 0.71333334;
			w = safeZoneW * 0.1625;
			h = safeZoneH * 0.08555556;
			style = 0;
			text = "Choose SUV";
			borderSize = 0;
			colorBackground[] = {0,0.102,0.502,1};
			colorBackgroundActive[] = {1,0,0,1};
			colorBackgroundDisabled[] = {0.2,0.2,0.2,1};
			colorBorder[] = {0,0,0,0};
			colorDisabled[] = {0.2,0.2,0.2,1};
			colorFocused[] = {0.2,0.2,0.2,1};
			colorShadow[] = {0,0,0,1};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			offsetPressedX = 0.01;
			offsetPressedY = 0.01;
			offsetX = 0.01;
			offsetY = 0.01;
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2);
			soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1.0};
			soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1.0};
			soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1.0};
			soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1.0};
			onButtonClick = "[1] call life_fnc_welcomeCar;";

		};
		class wlc_QuadPicture
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.5125;
			y = safeZoneY + safeZoneH * 0.19888889;
			w = safeZoneW * 0.33125;
			h = safeZoneH * 0.55777778;
			style = 0+48;
			text = "textures\Quad.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class wlc_SUVPicture
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.1575;
			y = safeZoneY + safeZoneH * 0.19;
			w = safeZoneW * 0.325;
			h = safeZoneH * 0.58666667;
			style = 0+48;
			text = "textures\SUV.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};
		class wlc_HatchbackPicture
		{
			type = 0;
			idc = -1;
			x = safeZoneX + safeZoneW * 0.33105469;
			y = safeZoneY + safeZoneH * 0.16840278;
			w = safeZoneW * 0.34570313;
			h = safeZoneH * 0.60243056;
			style = 0+48;
			text = "textures\hatchback.paa";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			font = "PuristaMedium";
			sizeEx = (((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1);

		};

	};

};

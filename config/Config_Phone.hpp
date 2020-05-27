/*
	File: Config_Phone.hpp
	Author: nflug

	# Author bitte nicht entfernen!
	# Veränderungen an dieser Datei sind erlaubt.
	# Diese Datei wurde unter Auftrag erstellt.
*/

class CfgPhone {

	phone_number = "027";
	//Prefix

	phone_extraChannel[] = {
		//Name, Number, Slot, Color
		{"Police", "111", "cop_1", {0.12,0.22,0.97,1}},
		{"Medic", "112", "medic_1", {1,0.31,0.2,1}}
	};
	//Extra Channels like: Police, Medic etc.

	phone_canCallOwnChannel = false;
	//Can Police call to the Police?

	phone_canSeePosition[] = { "west", "independent" };
	//What factions can show up the position of a number

	phone_maxMinNameLength[] = {4, 20};
	//Namelength for addable numbers

	phone_busyTime = 5;
	//After how much seconds there will be a busy tone

	phone_ringTime = 15;
	//Ringtime before no one awnsers

	phone_maxTime = 15;
	//How much minutes you can call together

	phone_overTimeDivisor = 2;
	// (Calltime| divided by | overTimeDivisor) in seconds you must wait before you can call someone again

	phone_ringTones[] = { {"Ringtone 1", "ringtone1"}, {"Ringtone 2", "ringtone2"} };
	//Ringtones

	phone_callTone = "calltone";
	//Dialtone

	phone_busyTone = "busytone";
	//Busytone

	phone_hangupTone = "hanguptone";
	//Hanguptone

	phone_maxChannel = 7;
	//Max Channels that can be used at the same time (Note: Arma 3 has a maximum of 10 channels which Altis Life already takes up 3.)

	phone_mobilePosYBottom = 0.973;
	//Its just a position if you dont want the phone in the right corner.

	phone_keyCodeAccept = 2;
	phone_keyCodeAcceptName = "1";
	//Button to accept the call

	phone_keyCodeCancel = 3;
	phone_keyCodeCancelName = "2";
	//Button to cancel the call

	phone_channelColor[] = {0.45, 1, 0.34, 1};
	//Channel Color (Standard)

	phone_markerColor = "Red";
	//Marker Color

	phone_removeMarkerTime = 1;
	//Time in minutes how long the marker stays

};

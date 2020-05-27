#include "..\script_macros.hpp"
/*
    File: pedagio.sqf
    Author: GhostsBR

    Description: Script toll V1.0 EN-US
*/

if (side player == civilian) then {
	if (CASH > 999) then {
		call action_pagar;
	};
	if (CASH < 999) exitWith {hint "You need $1000 to pay the toll!"};
};

if (side player == west) then {
	call action_prioridade;
};

if (side player == independent) then {
	call action_prioridade;
};


action_prioridade = {
	_porta = nearestObject [player, "Land_Net_Fence_gate_F"];
	hint "The toll is free for public services!";
	_porta animate ["Door_1_rot", 1];
	_porta animate ["Door_2_rot", 1];
	sleep 7;
	call action_acabou;
};

action_pagar = {
	_pagamento = 1000;
	_porta = nearestObject [player, "Land_Net_Fence_gate_F"];
	CASH = CASH - _pagamento;
	hint "You have paid $1000 for the toll!";
	_porta animate ["Door_1_rot", 1];
	_porta animate ["Door_2_rot", 1];
	sleep 7;
	call action_acabou;
};

action_acabou = {
	_portao = nearestObjects [player, ["Land_Net_Fence_gate_F"], 200];
	_obj = _portao select 0;
	_obj animate ["Door_1_rot", 0];
	_obj animate ["Door_2_rot", 0];
	_obj2 = _portao select 1;
	_obj2 animate ["Door_1_rot", 0];
	_obj2 animate ["Door_2_rot", 0];
};
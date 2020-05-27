private _result = profileNameSteam find "horizon-life.co.uk";

if (_result != -1) then {
    ["You have recieved experience for having Horizon-life.co.uk in your steam name!",false,"slow"] call life_fnc_notificationSystem;
    ["britannia"] spawn mav_ttm_fnc_addExp;
} else {
    ["Just a reminder, if you have horizon-life.co.uk in your steam name, you will recieve experience every paycheck!",false,"slow"] call life_fnc_notificationSystem;
}

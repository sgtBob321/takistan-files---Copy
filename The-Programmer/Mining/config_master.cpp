/*
    Author: Jean_Park
    Teamspeak 3: ts.the-programmer.com
    Web site: www.the-programmer.com
    Discord : https://discord.gg/DhFUFsq

    Terms of use:
        - This file is forbidden unless you have permission from the author. If you have this file without permission to use it please do not use it and do not share it.
        - If you have permission to use this file, you can use it on your server however it is strictly forbidden to share it.
        - Out of respect for the author please do not delete this information.

*/
#define true 1
#define false 0

class The_programmer_Mining {
    check_all_rocks_every_x_seconds = 300; //Loop for respawn rocks

    class Mining {
        virtual_object = true; //false allows to have a physical object || true allows you to receive virtual objects
        destructible = false; //true : stones are deleted | false : stones are not deleted

        class TheProgrammer_Rock_iron { //object class name
            marker_name[] = {"marker_iron"}; //marker variable
            zoneSize = 40; //area size

            Number_of_hits = 4; //number of shots to break the stone 
            classname_object_given = "TheProgrammer_iron"; //class name or virtual object given 
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8; //number of stones in the area 
        };

        class TheProgrammer_Rock_Or {
            marker_name[] = {"marker_or"};
            zoneSize = 40;

            Number_of_hits = 4;
            classname_object_given = "TheProgrammer_or";
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8;
        };

        class TheProgrammer_Rock_ruby {
            marker_name[] = {"marker_ruby"};
            zoneSize = 40;

            Number_of_hits = 4;
            classname_object_given = "TheProgrammer_Ruby";
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8;
        };

        class TheProgrammer_Rock_charbon {
            marker_name[] = {"marker_charbon"};
            zoneSize = 40;

            Number_of_hits = 4;
            classname_object_given = "TheProgrammer_charbon";
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8;
        };

        class TheProgrammer_Rock_cuivre {
            marker_name[] = {"marker_cuivre"};
            zoneSize = 40;

            Number_of_hits = 4;
            classname_object_given = "TheProgrammer_cuivre";
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8;
        };
        class TheProgrammer_Rock_diamant {
            marker_name[] = {"marker_diamant"};
            zoneSize = 40;

            Number_of_hits = 4;
            classname_object_given = "TheProgrammer_diamant";
            amount_min = 1;
            amount_max = 3;
            number_of_ores = 8;
        };
    };

    class trees {
        virtual_object = false; //false allows to have a physical object || true allows you to receive virtual objects
        allow_to_cut_everywhere = true;
        zones[] = {""};
        zoneSize = 40;

        Number_of_hits_tree = 10;
        classname_object_given = "TheProgrammer_Buche";
        amount_min = 1;
        amount_max = 2;
    };

    class Process_Config {
        class Fer {
            MaterialsReq = "TheProgrammer_fer";
            MaterialsGive = "iron_unrefined";
            Text = "Iron processing";
            allow_processing_without_licenses = true;
            required_licenses[] = {""}; // Only if allow_processing_without_licenses = false
        };

        class Or {
            MaterialsReq = "TheProgrammer_or";
            MaterialsGive = "goldcoin";
            Text = "Gold processing";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };

        class Ruby {
            MaterialsReq = "TheProgrammer_Ruby";
            MaterialsGive = "ruby_unrefined";
            Text = "Ruby treatment";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };

        class Charbon {
            MaterialsReq = "TheProgrammer_charbon";
            MaterialsGive = "oil_unprocessed";
            Text = "Coal processing";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };

        class Cuivre {
            MaterialsReq = "TheProgrammer_cuivre";
            MaterialsGive = "copper_unrefined";
            Text = "Copper processing";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };

        class Diamant {
            MaterialsReq = "TheProgrammer_diamant";
            MaterialsGive = "diamond_uncut";
            Text = "Diamond processing";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };

        class Wood {
            MaterialsReq = "TheProgrammer_Buche";
            MaterialsGive = "paper";
            Text = "Wood treatment";
            allow_processing_without_licenses = true;
            required_licenses[] = {""};
        };
    };
};

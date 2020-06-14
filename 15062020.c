#include "fxlib.h"
#include "stdio.h"

#define TRUE 1
#define FALSE 0

int drmCheck = 0;

int AddIn_main(int isAppli, unsigned short OptionNum)
{
    Bdisp_AllClr_DDVRAM();
    drm();
    if (drmCheck == 1){
        firstMenu();
    }
    return 1;
}
int firstMenu() {
    unsigned int i;
    unsigned int auswahl = 3;
    unsigned int menuItemsX = 2;
    unsigned int menuItemsY = 3;
    unsigned int menuItemsNbr = 6;
    unsigned char * menuItems[] = {
        "Lernfeld 1",
        "Lernfeld 2",
        "PC/Netzwerktechnik",
        "Test4",
        "Test5",
        "Test6"
    };
    // TITLE 
    locate(1,1);
    Print((unsigned char*)"Spicker :D");  
    // Menu Items
    for(i=0; i < menuItemsNbr; i=i+1){
        locate(menuItemsX, menuItemsY+i);
        Print(menuItems[i]);
    };
   
    // Cursor    
    while (1){
        unsigned int key;
        locate(1,auswahl);
        Print((unsigned char*)">");       
        GetKey(&key);
        if(KEY_CTRL_UP == key) {
            if (auswahl == 3) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl + 6;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl - 1;
        };
        if(KEY_CTRL_DOWN == key) {
            if (auswahl == 8) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl - 6;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl + 1;
        };
        if (KEY_CTRL_EXE == key) {
            if (auswahl == 3) {
                Bdisp_AllClr_DDVRAM();
                lf1menu();
            }
            if (auswahl == 4) {
                Bdisp_AllClr_DDVRAM();
                lf2menu();
            }
            if (auswahl == 5) {
                Bdisp_AllClr_DDVRAM();
                lf3list();
            }
            if (auswahl == 6) {
                locate(8,1);
                Print((unsigned char*)"TEST4");
            }
            if (auswahl == 7) {
                locate(8,1);
                Print((unsigned char*)"TEST5");
            }
        };
        if (KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
        }
   }
}

// DRM System
int drm() {
    unsigned int key;
    int selectedNumber = 0;
    int corsur = 7;
    int eingaben[4];
    locate(10,2);
    Print((unsigned char*)"DRM");
    locate(5,3);
    Print((unsigned char*)"Code eingeben");
    locate(6,5);
    Print((unsigned char*)"[ ] [ ] [ ]");
    while (1)
    {
        GetKey(&key);
        if (KEY_CHAR_0 == key){
            eingaben[selectedNumber] = 0;
            locate(corsur, 5);
            Print((unsigned char*)"0");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_1 == key){
            eingaben[selectedNumber] = 1;
            locate(corsur, 5);
            Print((unsigned char*)"1");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_2 == key){
            eingaben[selectedNumber] = 2;
            locate(corsur, 5);
            Print((unsigned char*)"2");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_3 == key){
            eingaben[selectedNumber] = 3;
            locate(corsur, 5);
            Print((unsigned char*)"3");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_4 == key){
            eingaben[selectedNumber] = 4;
            locate(corsur, 5);
            Print((unsigned char*)"4");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_5 == key){
            eingaben[selectedNumber] = 5;
            locate(corsur, 5);
            Print((unsigned char*)"5");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_6 == key){
            eingaben[selectedNumber] = 6;
            locate(corsur, 5);
            Print((unsigned char*)"6");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_7 == key){
            eingaben[selectedNumber] = 7;
            locate(corsur, 5);
            Print((unsigned char*)"7");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_8 == key){
            eingaben[selectedNumber] = 8;
            locate(corsur, 5);
            Print((unsigned char*)"8");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (KEY_CHAR_9 == key){
            eingaben[selectedNumber] = 9;
            locate(corsur, 5);
            Print((unsigned char*)"9");
            selectedNumber = selectedNumber + 1;
            corsur = corsur + 4;
        }
        if (selectedNumber == 3){
            if (eingaben[0] == 6) {
                if (eingaben[1] == 8) {
                    if (eingaben[2] == 4) {
                        drmCheck = 1;
                    }
                }
            }
            Bdisp_AllClr_DDVRAM();
            Sleep(300);
            return(0);
        }
    }
}


// Lernfeld 1
int lf1menu() {
    unsigned int i;
    unsigned int auswahl = 3;
    unsigned int menuItemsX = 2;
    unsigned int menuItemsY = 3;
    unsigned int menuItemsNbr = 5;
    unsigned char * menuItems[] = {
        "Okonomisches Prinzip",
        "Rechtsformen",
        "Gewinnverteilung",
        "Haftung, Infos",
        "Preisbildungsprozes"
    };
    Bdisp_AllClr_DDVRAM();
    // TITLE 
    locate(1,1);
    Print((unsigned char*)"Lernfeld 1");  
    // Menu Items
    for(i=0; i < menuItemsNbr; i=i+1){
        locate(menuItemsX, menuItemsY+i);
        Print(menuItems[i]);
    };
   
    // Cursor    
    while (1){
        unsigned int key;
        locate(1,auswahl);
        Print((unsigned char*)">");       
        GetKey(&key);
        if(KEY_CTRL_UP == key) {
            if (auswahl == 3) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl + 5;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl - 1;
        };
        if(KEY_CTRL_DOWN == key) {
            if (auswahl == 7) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl - 5;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl + 1;
        };
        if (KEY_CTRL_EXE == key) {
            if (auswahl == 3) {
                Bdisp_AllClr_DDVRAM();
                lf1menuitem1();
            }
            if (auswahl == 4) {
                Bdisp_AllClr_DDVRAM();
                lf1menuitem2();
            }
            if (auswahl == 5) {
                Bdisp_AllClr_DDVRAM();
                lf1menuitem3();
            }
            if (auswahl == 6) {
                Bdisp_AllClr_DDVRAM();
                lf1menuitem4();
            }
            if (auswahl == 7) {
                Bdisp_AllClr_DDVRAM();
                lf1menuitem5();
            }
        };
        if (KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
   }
}
int lf1menuitem1(){   
    locate(1,1);
    Print((unsigned char*)"Okonomisches Prinzip");
    locate(1,2);
    Print((unsigned char*)"-Minimal Prinzip");
    locate(2,3);
    Print((unsigned char*)"Vorgegebenes Ziel");
    locate(2,4);
    Print((unsigned char*)"wenig Ausgaben");
    locate(1,5);
    Print((unsigned char*)"-Maximal Prinzip");
    locate(2,6);
    Print((unsigned char*)"Einsatz vorgegeben");
    locate(2,7);
    Print((unsigned char*)"viel Ziel erreichen");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
    } 
}
int lf1menuitem2(){
    locate(1,1);
    Print((unsigned char*)"Rechtsformen 1/2");
    locate(1,2);
    Print((unsigned char*)"Personengesellschaft");
    locate(1,3);
    Print((unsigned char*)"-e.K. eingetragener");
    locate(3,4);
    Print((unsigned char*)"Kaufmann");
    locate(1,5);
    Print((unsigned char*)"-OHG offene Handels-");
    locate(3,6);
    Print((unsigned char*)"gesellschaft");
    locate(1,7);
    Print((unsigned char*)"-Kg Kommandit-");
    locate(3,8);
    Print((unsigned char*)"gesellschaft");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem2_1();
        }
    } 
}
int lf1menuitem2_1(){
    locate(1,1);
    Print((unsigned char*)"Rechtsformen 2/2");
    locate(1,2);
    Print((unsigned char*)"Kapitalgesellschaft");
    locate(1,3);
    Print((unsigned char*)"-GmbH Gesellschaft");
    locate(3,4);
    Print((unsigned char*)"mit beschrankter");
    locate(3,5);
    Print((unsigned char*)"Haftung");
    locate(1,6);
    Print((unsigned char*)"-AG Aktien-");
    locate(3,7);
    Print((unsigned char*)"gesellschaft");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem2();
        }
    } 
}
int lf1menuitem3(){   
    locate(1,1);
    Print((unsigned char*)"Gewinnverteilung");
    locate(1,2);
    Print((unsigned char*)"-OHG: 4% auf Kapital");
    locate(2,3);
    Print((unsigned char*)"Einlagen, Rest nach");
    locate(2,4);
    Print((unsigned char*)"Koepfen.");
    locate(1,5);
    Print((unsigned char*)"-KG: 4% auf Kapital");
    locate(2,6);
    Print((unsigned char*)"Einlagen, Rest im");
    locate(2,7);
    Print((unsigned char*)"angemessenen");
    locate(2,8);
    Print((unsigned char*)"Verhaeltnissen");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
    } 
}
int lf1menuitem4(){
    locate(1,1);
    Print((unsigned char*)"Haftung 1/5");
    locate(1,2);
    Print((unsigned char*)"Kommanditgesellschaf");
    locate(1,3);
    Print((unsigned char*)"-Kommandist: Haftung");
    locate(2,4);
    Print((unsigned char*)"mit eingelargertem");
    locate(2,5);
    Print((unsigned char*)"Kapital, keine");
    locate(2,6);
    Print((unsigned char*)"Geschaftsfuhrung");
    locate(1,7);
    Print((unsigned char*)"-Komplimentaer");
    locate(2,8);
    Print((unsigned char*)"Haftung mit Kapital");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_1();
        }
    } 
}
int lf1menuitem4_1(){
    locate(1,1);
    Print((unsigned char*)"Haftung 2/5");
    locate(2,2);
    Print((unsigned char*)"Einlagen und privat");
    locate(2,3);
    Print((unsigned char*)"Geschaftsfuhrer");
    locate(1,5);
    Print((unsigned char*)"Offene Handelsgesel.");
    locate(1,6);
    Print((unsigned char*)"-unmittelbar (");
    locate(2,7);
    Print((unsigned char*)"Glaubiger kann an");
    locate(2,8);
    Print((unsigned char*)"Gesellschafter");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_2();
        }
    } 
}
int lf1menuitem4_2(){
    locate(1,1);
    Print((unsigned char*)"Haftung 3/5");
    locate(2,2);
    Print((unsigned char*)"herantreten und");
    locate(2,3);
    Print((unsigned char*)"Schulden einfordern");
    locate(1,4);
    Print((unsigned char*)"-unbeschrankt (");
    locate(2,5);
    Print((unsigned char*)"privat+Gesellschaft");
    locate(2,6);
    Print((unsigned char*)"vermoegen)");
    locate(1,7);
    Print((unsigned char*)"-Solidarisch (");
    locate(2,8);
    Print((unsigned char*)"gemeinsame Haftung");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_1();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_3();
        }
    } 
}
int lf1menuitem4_3(){
    locate(1,1);
    Print((unsigned char*)"Haftung 4/5");
    locate(2,2);
    Print((unsigned char*)"in alle fuer einen");
    locate(2,3);
    Print((unsigned char*)"Musketierprinzip)");
    locate(1,5);
    Print((unsigned char*)"GmbH (Grundungs-");
    locate(2,6);
    Print((unsigned char*)"kapital 25.000Eur,");
    locate(2,7);
    Print((unsigned char*)"Gewinnverteilung");
    locate(2,8);
    Print((unsigned char*)"nach Anteilen am");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_2();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_4();
        }
    } 
}
int lf1menuitem4_4(){
    locate(1,1);
    Print((unsigned char*)"Haftung 5/5");
    locate(2,2);
    Print((unsigned char*)"Gesamtvermoegen)");
    locate(1,4);
    Print((unsigned char*)"-AG (Grundungs-");
    locate(2,5);
    Print((unsigned char*)"kapital 50.000Eur,");
    locate(2,6);
    Print((unsigned char*)"Gewinnverteilung");
    locate(2,7);
    Print((unsigned char*)"Dividenden, Kurs-");
    locate(2,8);
    Print((unsigned char*)"gewinne, Anteile)");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem4_3();
        }
    } 
}
int lf1menuitem5(){
    locate(1,1);
    Print((unsigned char*)"Preisbildungs... 1/3");
    locate(1,2);
    Print((unsigned char*)"-Markt");
    locate(2,3);
    Print((unsigned char*)"Angebot<->Nachfrage");
    locate(2,4);
    Print((unsigned char*)"Der Markt wird");
    locate(2,5);
    Print((unsigned char*)"Mithilfe eines");
    locate(2,6);
    Print((unsigned char*)"Modells vereinfacht");
    locate(2,7);
    Print((unsigned char*)"dargestellt:");
    locate(3,8);
    Print((unsigned char*)"vollkommener Markt");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem5_1();
        }
    } 
}
int lf1menuitem5_1(){
    locate(1,1);
    Print((unsigned char*)"Preisbildungs... 2/3");
    locate(2,2);
    Print((unsigned char*)"Realitat:");
    locate(3,3);
    Print((unsigned char*)"unvollkomm. Markt");
    locate(1,5);
    Print((unsigned char*)"Angebotskurve");
    locate(2,6);
    Print((unsigned char*)"1) Angebotskurve");
    locate(2,7);
    Print((unsigned char*)"2) Kaufermarkt");
    locate(2,8);
    Print((unsigned char*)"3) Gleichgew.spreis");
    while (1) {
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem5();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem5_2();
        }
    } 
}
int lf1menuitem5_2(){
    locate(1,1);
    Print((unsigned char*)"Preisbildungs... 3/3");
    locate(2,2);
    Print((unsigned char*)"4) Verkaufermarkt");
    locate(2,3);
    Print((unsigned char*)"5) Nachfragekurve");
    locate(1,5);
    Print((unsigned char*)"X = 50Eur, 350Stk.");
    locate(2,6);
    Print((unsigned char*)"Viel Umsatz=50Eur.");
    locate(2,7);
    Print((unsigned char*)"Viel Umsatz=350Stk.");
    locate(2,8);
    Print((unsigned char*)"Umax=50E*350S=17,5k");
    while (1) {
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf1menuitem5_1();
        }
    } 
}

//Lernfeld 2
int lf2menu() {
    unsigned int i;
    unsigned int auswahl = 3;
    unsigned int menuItemsX = 2;
    unsigned int menuItemsY = 3;
    unsigned int menuItemsNbr = 4;
    unsigned char * menuItems[] = {
        "Organisation",
        "Regelkreis",
        "Organigramm",
        "ERP / SAP Systeme"
    };
    Bdisp_AllClr_DDVRAM();
    // TITLE 
    locate(1,1);
    Print((unsigned char*)"Lernfeld 2");  
    // Menu Items
    for(i=0; i < menuItemsNbr; i=i+1){
        locate(menuItemsX, menuItemsY+i);
        Print(menuItems[i]);
    };
   
    // Cursor    
    while (1){
        unsigned int key;
        locate(1,auswahl);
        Print((unsigned char*)">");       
        GetKey(&key);
        if(KEY_CTRL_UP == key) {
            if (auswahl == 3) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl + 4;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl - 1;
        };
        if(KEY_CTRL_DOWN == key) {
            if (auswahl == 6) {
                locate(1,auswahl);
                Print((unsigned char*)" ");
                auswahl = auswahl - 4;
            }
            locate(1,auswahl);
            Print((unsigned char*)" ");
            auswahl = auswahl + 1;
        };
        if (KEY_CTRL_EXE == key) {
            if (auswahl == 3) {
                Bdisp_AllClr_DDVRAM();
                lf2menuitem1();
            }
            if (auswahl == 4) {
                Bdisp_AllClr_DDVRAM();
                lf2menuitem2();
            }
            if (auswahl == 5) {
                Bdisp_AllClr_DDVRAM();
                lf2menuitem3();
            }
            if (auswahl == 6) {
                Bdisp_AllClr_DDVRAM();
                lf2menuitem4();
            }
        };
        if (KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
   }
}
int lf2menuitem1(){   
    locate(1,1);
    Print((unsigned char*)"Organisation 1/4");
    locate(1,2);
    Print((unsigned char*)"-Zweckmassigkeit");
    locate(2,3);
    Print((unsigned char*)"Aufgab./Tatigkeiten");
    locate(2,4);
    Print((unsigned char*)"sollten dem");
    locate(2,5);
    Print((unsigned char*)"Unternehmensziel");
    locate(2,6);
    Print((unsigned char*)"entsprechen alles");
    locate(2,7);
    Print((unsigned char*)"andere ist unzweck.");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1_1();
        }
    } 
}
int lf2menuitem1_1(){   
    locate(1,1);
    Print((unsigned char*)"Organisation 2/4");
    locate(1,2);
    Print((unsigned char*)"-Wirtschaftlichkeit");
    locate(2,3);
    Print((unsigned char*)"T, A, Regelungen");
    locate(2,4);
    Print((unsigned char*)"sollten dem oko-");
    locate(2,5);
    Print((unsigned char*)"logischem Prinzip");
    locate(2,6);
    Print((unsigned char*)"entsprechen. Bsp.:");
    locate(2,7);
    Print((unsigned char*)"Min. Max. Prinzip");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1_2();
        }
    } 
}
int lf2menuitem1_2(){   
    locate(1,1);
    Print((unsigned char*)"Organisation 3/4");
    locate(1,2);
    Print((unsigned char*)"-Klarheit");
    locate(2,3);
    Print((unsigned char*)"T, A, Regelungen");
    locate(2,4);
    Print((unsigned char*)"sollten klar");
    locate(2,5);
    Print((unsigned char*)"definiert sein,");
    locate(2,6);
    Print((unsigned char*)"damit jeder es");
    locate(2,7);
    Print((unsigned char*)"versteht.");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1_1();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1_3();
        }
    } 
}
int lf2menuitem1_3(){   
    locate(1,1);
    Print((unsigned char*)"Organisation 4/4");
    locate(1,2);
    Print((unsigned char*)"-Gleichgewicht");
    locate(2,3);
    Print((unsigned char*)"Dauerregel (Organ-");
    locate(2,4);
    Print((unsigned char*)"isation), Einzel (");
    locate(2,5);
    Print((unsigned char*)"Disposition) u. ");
    locate(2,6);
    Print((unsigned char*)"Improvisation.");
    locate(2,7);
    Print((unsigned char*)"unter/ueber-");
    locate(2,8);
    Print((unsigned char*)"organisation");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem1_2();
        }
    } 
}
int lf2menuitem2(){   
    locate(1,1);
    Print((unsigned char*)"Regelkreis");
    locate(1,3);
    Print((unsigned char*)"Mitte: Kommunikation");
    locate(2,4);
    Print((unsigned char*)"1) Zielsetzung");
    locate(2,5);
    Print((unsigned char*)"2) Planung");
    locate(2,6);
    Print((unsigned char*)"3) Entscheidung");
    locate(2,7);
    Print((unsigned char*)"4) Umsetzung");
    locate(2,8);
    Print((unsigned char*)"5) Kontrolle");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
    } 
}
int lf2menuitem3(){   
    locate(1,1);
    Print((unsigned char*)"Organigramm");
    locate(1,3);
    Print((unsigned char*)"[[]] Instanz");
    locate(2,4);
    Print((unsigned char*)"leitende Stelle");
    locate(1,5);
    Print((unsigned char*)"[] Mitarbeiterstelle");
    locate(2,6);
    Print((unsigned char*)"Ausfuhrendestelle");
    locate(1,7);
    Print((unsigned char*)"() Stabstelle");
    locate(2,8);
    Print((unsigned char*)"Beratende Stelle");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
    } 
}
int lf2menuitem4(){   
    locate(1,1);
    Print((unsigned char*)"ERP / SAP Systeme1/5");
    locate(1,3);
    Print((unsigned char*)"Merkmale:");
    locate(2,4);
    Print((unsigned char*)"-dient der");
    locate(3,5);
    Print((unsigned char*)"bearbeitung von");
    locate(3,6);
    Print((unsigned char*)"Geschaftsprozessen");
    locate(2,7);
    Print((unsigned char*)"-zentrale Datenbank");
    locate(2,8);
    Print((unsigned char*)"-Stammdaten");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_1();
        }
    } 
}
int lf2menuitem4_1(){   
    locate(1,1);
    Print((unsigned char*)"ERP / SAP Systeme2/5");
    locate(2,2);
    Print((unsigned char*)"-Integration vertik");
    locate(3,3);
    Print((unsigned char*)"ale/horizontale");
    locate(2,4);
    Print((unsigned char*)"-In vers Komponente");
    locate(3,5);
    Print((unsigned char*)"ausfgeteilt:");
    locate(3,6);
    Print((unsigned char*)"Vertrieb, ...");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_2();
        }
    } 
}
int lf2menuitem4_2(){   
    locate(1,1);
    Print((unsigned char*)"ERP / SAP Systeme3/5");
    locate(1,3);
    Print((unsigned char*)"Vorteile:");
    locate(2,4);
    Print((unsigned char*)"-Verbesserung/Besc-");
    locate(3,5);
    Print((unsigned char*)"hleunigung von");
    locate(3,6);
    Print((unsigned char*)"Prozessen");
    locate(2,7);
    Print((unsigned char*)"-Daten werden in");
    locate(3,7);
    Print((unsigned char*)"Echtzeit gesaved");
    locate(3,8);
    Print((unsigned char*)"alle haben Zugriff");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_1();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_3();
        }
    } 
}
int lf2menuitem4_3(){   
    locate(1,1);
    Print((unsigned char*)"ERP / SAP Systeme4/5");
    locate(2,3);
    Print((unsigned char*)"-Automatisiert pro-");
    locate(3,4);
    Print((unsigned char*)"zesse, gespart");
    locate(3,5);
    Print((unsigned char*)"wird Arbeitsplatz");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_2();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_4();
        }
    } 
}
int lf2menuitem4_4(){   
    locate(1,1);
    Print((unsigned char*)"ERP / SAP Systeme5/5");
    locate(1,3);
    Print((unsigned char*)"Nachteile:");
    locate(2,4);
    Print((unsigned char*)"-Anschaffungskosten");
    locate(2,5);
    Print((unsigned char*)"-Abhaengigkeit");
    locate(2,6);
    Print((unsigned char*)"-hohe komplexitat");
    locate(2,7);
    Print((unsigned char*)"-dauerhaft kontrol-");
    locate(3,7);
    Print((unsigned char*)"le der Mitarbeiter");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf2menuitem4_3();
        }
    } 
}

int lf3list(){   
    locate(1,1);
    Print((unsigned char*)"Netzwerktechnik  1/4");
    locate(1,3);
    Print((unsigned char*)"DNS=Domain Name ");
    locate(3,4);
    Print((unsigned char*)"Service");
    locate(1,5);
    Print((unsigned char*)"DHCP=Dynamic Host");
    locate(3,6);
    Print((unsigned char*)"Config.Protokoll");
    locate(1,7);
    Print((unsigned char*)"WWW=Weltweites Netz");
    locate(1,8);
    Print((unsigned char*)"RJ45=Netzwerkstecker");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list_1();
        }
    } 
}
int lf3list_1(){   
    locate(1,1);
    Print((unsigned char*)"Netzwerktechnik  2/4");
    locate(1,3);
    Print((unsigned char*)"TCP/IP=Stand. Netz-");
    locate(3,4);
    Print((unsigned char*)"werk Protokoll");
    locate(1,5);
    Print((unsigned char*)"MAC Adr.=feste Adr.");
    locate(3,6);
    Print((unsigned char*)"in der NW Karte");
    locate(1,7);
    Print((unsigned char*)"ipconfig=Windows");
    locate(1,8);
    Print((unsigned char*)"twisted Pair...");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list_2();
        }
    } 
}
int lf3list_2(){   
    locate(1,1);
    Print((unsigned char*)"PC Technik       3/4");
    locate(1,3);
    Print((unsigned char*)"-Northbridge (CPU/");
    locate(3,4);
    Print((unsigned char*)"RAM/PCI(e))");
    locate(1,5);
    Print((unsigned char*)"-Sourcebridge (USB/");
    locate(3,6);
    Print((unsigned char*)"PS2/PCI/S-ATA/IDE)");
    locate(1,7);
    Print((unsigned char*)"-BIOS=SW fur Mboard");
    locate(1,8);
    Print((unsigned char*)"-POST=PowerOnSelfTest");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list_1();
        }
        if(KEY_CTRL_DOWN == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list_3();
        }
    } 
}
int lf3list_3(){   
    locate(1,1);
    Print((unsigned char*)"PC Technik       4/4");
    locate(1,3);
    Print((unsigned char*)"-Speichermedien(Fes-");
    locate(3,4);
    Print((unsigned char*)"tplatte(SSD/HDD)/");
    locate(3,5);
    Print((unsigned char*)"RAM/USB-Stick)");
    locate(1,6);
    Print((unsigned char*)"-Dateiendungen (Word");
    locate(3,7);
    Print((unsigned char*)"=doc/docx PP=pptx/");
    locate(3,8);
    Print((unsigned char*)"ppt Excel=xls/xlsx");
    while (1){
        unsigned int key;       
        GetKey(&key);
        if(KEY_CTRL_EXIT == key) {
            Bdisp_AllClr_DDVRAM();
            firstMenu();
        }
        if(KEY_CTRL_UP == key) {
            Bdisp_AllClr_DDVRAM();
            lf3list_2();
        }
    } 
}

//****************************************************************************
//**************                                              ****************
//**************                 Notice!                      ****************
//**************                                              ****************
//**************  Please do not change the following source.  ****************
//**************                                              ****************
//****************************************************************************
#pragma section _BR_Size
unsigned long BR_Size;
#pragma section
#pragma section _TOP
//****************************************************************************
//  InitializeSystem
//
//  param   :   isAppli   : 1 = Application / 0 = eActivity
//              OptionNum : Option Number (only eActivity)
//
//  retval  :   1 = No error / 0 = Error
//
//****************************************************************************
int InitializeSystem(int isAppli, unsigned short OptionNum){
    return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}
#pragma section
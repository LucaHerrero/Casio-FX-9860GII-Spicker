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
    unsigned int menuItemsX = 3;
    unsigned int menuItemsY = 3;
    unsigned int menuItemsNbr = 6;
    unsigned char * menuItems[] = {
        "Test1",
        "Test2",
        "Test3",
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
                locate(8,1);
                Print((unsigned char*)"TEST1");
            }
            if (auswahl == 4) {
                locate(8,1);
                Print((unsigned char*)"TEST2");
            }
            if (auswahl == 5) {
                locate(8,1);
                Print((unsigned char*)"TEST3");
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
int InitializeSystem(int isAppli, unsigned short OptionNum)
{
    return INIT_ADDIN_APPLICATION(isAppli, OptionNum);
}

#pragma section
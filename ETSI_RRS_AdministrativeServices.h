//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#ifndef MURI_ADMINISTRATIVESERVICES_H
#define MURI_ADMINISTRATIVESERVICES_H

using namespace std;

class ETSI_RRS_AdministrativeServices {
public:

    int installRadioApps(){
        cout << RAP_ID + 1 << endl;
        return 0;
    }

    int uninstallRadioApps(){

        return 0;
    }

    int createRadioApps(){

        return 0;
    }

    int deleteRadioApps(){

        return 0;
    }

    void getRadioAppParameters(){

    }

    bool setRadioAppParameters(){

    }

    void getListOfRadioApps(){

    }


protected:
private:
    int RAP_ID = 0;
    int URA_ID;
};


#endif //MURI_ADMINISTRATIVESERVICES_H

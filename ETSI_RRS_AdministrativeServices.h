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

    ETSI_RRS_AdministrativeServices();
    ~ETSI_RRS_AdministrativeServices();

    int installRadioApps();
    int uninstallRadioApps();
    int createRadioApps();
    int deleteRadioApps();
    void getRadioAppParameters();
    bool setRadioAppParameters();
    void getListOfRadioApps();

    int getRAP_ID();
    int getURA_ID();
    void setRAP_ID(int);
    void setURA_ID(int);


protected:
private:
    int RAP_ID;
    int URA_ID;

};


#endif //MURI_ADMINISTRATIVESERVICES_H

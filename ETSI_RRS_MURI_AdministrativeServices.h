//
// Created by stormy on 20.04.18.
//
#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <cstdint>
#include <iomanip>
#include "ETSI_RRS_RadioComputer.h"

#ifndef MURI_ADMINISTRATIVESERVICES_H
#define MURI_ADMINISTRATIVESERVICES_H

using namespace std;

class ETSI_RRS_MURI_AdministrativeServices {

public:

    ETSI_RRS_MURI_AdministrativeServices(ETSI_RRS_RadioComputer&);
    ~ETSI_RRS_MURI_AdministrativeServices();

    int installRadioApps(int);
    int uninstallRadioApps(int);
    int createRadioApps(int);
    int deleteRadioApps(int);
    void getRadioAppParameters();
    bool setRadioAppParameters();
    void getListOfRadioApps();

private:
    ETSI_RRS_RadioComputer *radioComputer;
    int RAP_ID, URA_ID;
    bool checkoutURA(), checkoutRAP();

//    ETSI_RRS_hash *hashFile;


};


#endif //MURI_ADMINISTRATIVESERVICES_H
//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>
#include <list>
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI.h"

#ifndef MURI_ACCESSCONTROLSERVICES_H
#define MURI_ACCESSCONTROLSERVICES_H

using namespace std;

class ETSI_RRS_MURI_AccessControlServices{

private:




public:
    ETSI_RRS_MURI muri;
    ETSI_RRS_RadioComputer radioComputer;
    ETSI_RRS_MURI_AccessControlServices();

    int activateRadioApps(int);
    bool deactivateRadioApps(int);
    void getListOfRadioApps();   //RadioAppList
    int createAssociation();
    bool terminateAssociation();


    /** Lisa*/
    /* bool startRadioMeasurment(); //+radMeasList
    void stopRadioMeasurment();
    int createLink();
    int releaseLink();
    int createDataFlow();
    int terminateDataFlow(); */

    ~ETSI_RRS_MURI_AccessControlServices();

};


#endif //MURI_ACCESSCONTROLSERVICES_H

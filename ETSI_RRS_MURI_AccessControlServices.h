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
    ETSI_RRS_RadioComputer *radioComputer;
    ETSI_RRS_MURI muri;


public:

    ETSI_RRS_MURI_AccessControlServices(ETSI_RRS_RadioComputer&);

    int activateRadioApps(ETSI_RRS_MURI, int);
    bool deactivateRadioApps(ETSI_RRS_MURI,int);
    void getListOfRadioApps(ETSI_RRS_MURI);   //RadioAppList
    int createAssociation(ETSI_RRS_MURI);
    bool terminateAssociation(ETSI_RRS_MURI);


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

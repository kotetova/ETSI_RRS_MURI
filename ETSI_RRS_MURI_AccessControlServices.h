//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>
#include <list>
#include "ETSI_RRS_RadioComputer.h"

#ifndef MURI_ACCESSCONTROLSERVICES_H
#define MURI_ACCESSCONTROLSERVICES_H

using namespace std;

class ETSI_RRS_MURI_AccessControlServices{

private:
    ETSI_RRS_RadioComputer *radioComputer;
    int RAP_ID, URA_ID;

public:

    ETSI_RRS_MURI_AccessControlServices(ETSI_RRS_RadioComputer&);

    int activateRadioApps(int);
    bool deactivateRadioApps(int);
    void getListOfRadioApps();   //RadioAppList
    int createAssociation(int);
    bool terminateAssociation();


    /* bool startRadioMeasurment();
    void stopRadioMeasurment();
    int createLink();
    int releaseLink();
    int createDataFlow();
    int terminateDataFlow(); */ //Lisa

    ~ETSI_RRS_MURI_AccessControlServices();



};


#endif //MURI_ACCESSCONTROLSERVICES_H

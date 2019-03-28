//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI_AccessControlServices.h"
#include "ETSI_RRS_MURI_AdministrativeServices.h"
#include "ETSI_RRS_MURI_DataFlowServices.h"
#include <list>

static int  RAP_ID;
static int URA_ID;

#ifndef RRS_MURI_MURI_H
#define RRS_MURI_MURI_H

using namespace std;
class ETSI_RRS_MURI{

    ETSI_RRS_MURI_AccessControlServices *accessControlServices;
    ETSI_RRS_MURI_AdministrativeServices *administrativeServices;
    ETSI_RRS_MURI_DataFlowServices *dataFlowServices; /**Lisa*/
    ETSI_RRS_RadioComputer *radioComputer;
    int app;

public:
    ETSI_RRS_MURI(ETSI_RRS_RadioComputer&);
    void selectApp(int);
    bool checkoutURA();
    bool checkoutRAP();

// AccessControlServices
    int activateRadioApps(int);
    bool deactivateRadioApps(int);
    void getListOfRadioApps();   //RadioAppList
    int createAssociation();
    bool terminateAssociation();
    string hashfile (const char*);

// Administrative
    int installRadioApps(int);
    int uninstallRadioApps(int);
    int createRadioApps(int);
    int deleteRadioApps(int);
    void getRadioAppParameters();
    bool setRadioAppParameters();
    void getListOfRadioApps(int);

    /** Lisa*/
    /* DataFlowServices
     *
       bool sendUserData();
       void receiveUserData();  //UserData
   */

    ~ETSI_RRS_MURI();


};





#endif //RRS_MURI_MURI_H

//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI_AccessControlServices.h"
#include "ETSI_RRS_MURI_AdministrativeServices.h"
#include "ETSI_RRS_MURI_DataFlowServices.h"
#include "ETSI_RRS_RCF.h"
#include "ETSI_RRS_CSL.h"
#include <list>


#ifndef RRS_MURI_MURI_H
#define RRS_MURI_MURI_H

using namespace std;
class ETSI_RRS_MURI{

private:
    ETSI_RRS_MURI_AccessControlServices *accessControlServices;
    ETSI_RRS_MURI_AdministrativeServices *administrativeServices;
    ETSI_RRS_MURI_DataFlowServices *dataFlowServices;
    ETSI_RRS_RCF *radioControlFramework;
    ETSI_RRS_CSL *communicaionServicesLayer;

    ETSI_RRS_RadioComputer *radioComputer;
    int app;

public:
    ETSI_RRS_MURI(ETSI_RRS_RadioComputer&);
    void selectApp(int);

// AccessControlServices
    int activateRadioApps(int);
    bool deactivateRadioApps(int);
    void getListOfRadioApps();   //RadioAppList
    int createAssociation();
    bool terminateAssociation();
    string hashfile (const char*);


    ~ETSI_RRS_MURI();


};





#endif //RRS_MURI_MURI_H

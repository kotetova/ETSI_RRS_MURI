//
// Created by stormy on 20.04.18.
//
#include "ETSI_RRS_MURI.h"

ETSI_RRS_MURI::ETSI_RRS_MURI(ETSI_RRS_RadioComputer &currentRC){

    accessControlServices = new ETSI_RRS_MURI_AccessControlServices(currentRC);
    administrativeServices = new ETSI_RRS_MURI_AdministrativeServices(currentRC);
    dataFlowServices = new ETSI_RRS_MURI_DataFlowServices(currentRC);
    radioControlFramework = new ETSI_RRS_RCF(currentRC);
    communicaionServicesLayer = new ETSI_RRS_CSL();

    radioComputer = &currentRC;
}

void ETSI_RRS_MURI::selectApp(int currentApp) {


}

int ETSI_RRS_MURI::activateRadioApps(int URA_ID) {

    accessControlServices->activateRadioApps(URA_ID);
}

bool ETSI_RRS_MURI::deactivateRadioApps(int URA_ID) {

    accessControlServices->deactivateRadioApps(URA_ID);
}

void ETSI_RRS_MURI::getListOfRadioApps() {
    accessControlServices->getListOfRadioApps();
}
string ETSI_RRS_MURI::hashfile(const char *filename) {

    administrativeServices->hashfile(filename);
}

ETSI_RRS_MURI::~ETSI_RRS_MURI(){

    delete accessControlServices;
    delete administrativeServices;
    delete dataFlowServices;
//    delete radioControlFramework;
//    delete communicaionServicesLayer;
}

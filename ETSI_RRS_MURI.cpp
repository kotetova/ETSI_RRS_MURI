//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI.h"
#include "ETSI_RRS_DataFlowServices.h"
#include "ETSI_RRS_AdministrativeServices.h"
#include "ETSI_RRS_AccessControlServices.h"

ETSI_RRS_MURI::ETSI_RRS_MURI(){

    AccessControlServices = new ETSI_RRS_AccessControlServices();
    AdministrativeServices = new ETSI_RRS_AdministrativeServices();
    DataFlowServices = new ETSI_RRS_DataFlowServices();
    CSL = new ETSI_RRS_CommunicationServiceLayer();

    AdministrativeServices->installRadioApps();
}


ETSI_RRS_MURI::~ETSI_RRS_MURI(){

    delete AccessControlServices;
    delete AdministrativeServices;
    delete DataFlowServices;
}

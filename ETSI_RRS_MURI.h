//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>
#include "ETSI_RRS_AccessControlServices.h"
#include "ETSI_RRS_AdministrativeServices.h"
#include "ETSI_RRS_DataFlowServices.h"
#include "ETSI_RRS_CommunicationServiceLayer.h"

#ifndef RRS_MURI_MURI_H
#define RRS_MURI_MURI_H

using namespace std;
class ETSI_RRS_MURI {
    public:
        ETSI_RRS_MURI();
        ~ETSI_RRS_MURI();


    private:
        ETSI_RRS_AdministrativeServices *AdministrativeServices;
        ETSI_RRS_AccessControlServices *AccessControlServices;
        ETSI_RRS_DataFlowServices *DataFlowServices;
        ETSI_RRS_CommunicationServiceLayer *CSL;


};


#endif //RRS_MURI_MURI_H

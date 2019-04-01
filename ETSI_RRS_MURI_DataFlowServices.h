//
// Control Data Flow
/** Lisa*/
#pragma once
#include <iostream>
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI.h"


#ifndef MURI_DATAFLOWSERVICES_H
#define MURI_DATAFLOWSERVICES_H

using namespace std;

class ETSI_RRS_MURI_DataFlowServices : public ETSI_RRS_MURI {

public:
    ETSI_RRS_MURI_DataFlowServices();
    ~ETSI_RRS_MURI_DataFlowServices();

private:

  //ETSI_RRS_RadioComputer radioComputer;

 /*
    bool sendUserData();
    void receiveUserData();  //UserData
*/
};




#endif //MURI_DATAFLOWSERVICES_H

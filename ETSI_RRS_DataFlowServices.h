//
// Control Data Flow
//
#pragma once
#include <iostream>
#ifndef MURI_DATAFLOWSERVICES_H
#define MURI_DATAFLOWSERVICES_H

using namespace std;

class ETSI_RRS_DataFlowServices {

public:
    ETSI_RRS_DataFlowServices();
    ~ETSI_RRS_DataFlowServices();


private:

    bool sendUserData();
    void receiveUserData();  //UserData

};




#endif //MURI_DATAFLOWSERVICES_H

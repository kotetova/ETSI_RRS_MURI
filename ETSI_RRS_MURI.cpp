//
// Created by stormy on 20.04.18.
//
#include "ETSI_RRS_MURI.h"



ETSI_RRS_MURI::ETSI_RRS_MURI(){

    //accessControlServices = new ETSI_RRS_MURI_AccessControlServices(currentRC);
    //administrativeServices = new ETSI_RRS_MURI_AdministrativeServices(currentRC);
  //  dataFlowServices = new ETSI_RRS_MURI_DataFlowServices(currentRC);

    radioComputer = new ETSI_RRS_RadioComputer();

}





/*string ETSI_RRS_MURI::hashfile(const char *filename) {

    administrativeServices->hashfile(filename);
}*/
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ETSI_RRS_MURI::checkoutURA() {
    if (this->radioComputer->E1 == URA_ID) {
        cout << "URA ID is correct " << radioComputer->E1 << " < > " << URA_ID << endl;
        return true;
    } else {
        cout << "Error: URA ID is not correct " << radioComputer->E1 << " < > " << URA_ID << endl;
        return false;
    }
};

bool ETSI_RRS_MURI::checkoutRAP() {
    if (this->radioComputer->E1 == RAP_ID) {
        cout << "RAP ID is correct " << radioComputer->E1 << " < > " << RAP_ID << endl;
        return true;
    } else {
        cout << "Error: RAP ID is not correct " << radioComputer->E1 << " < > " << RAP_ID << endl;
        return false;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ETSI_RRS_MURI::~ETSI_RRS_MURI() {

    //delete accessControlServices;
    //delete administrativeServices;
    // delete dataFlowServices;
    delete radioComputer;
}


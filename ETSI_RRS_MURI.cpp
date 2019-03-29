//
// Created by stormy on 20.04.18.
//
#include "ETSI_RRS_MURI.h"



ETSI_RRS_MURI::ETSI_RRS_MURI(ETSI_RRS_RadioComputer &currentRC){

    accessControlServices = new ETSI_RRS_MURI_AccessControlServices(currentRC);
    administrativeServices = new ETSI_RRS_MURI_AdministrativeServices(currentRC);
  //  dataFlowServices = new ETSI_RRS_MURI_DataFlowServices(currentRC);

    radioComputer = &currentRC;

}

//access
int ETSI_RRS_MURI::activateRadioApps(int URA_ID) {

    accessControlServices->activateRadioApps(URA_ID);
}

bool ETSI_RRS_MURI::deactivateRadioApps(int URA_ID) {

    accessControlServices->deactivateRadioApps(URA_ID);
}

void ETSI_RRS_MURI::getListOfRadioApps() { //RadioAppList
    accessControlServices->getListOfRadioApps();
}

int ETSI_RRS_MURI::createAssociation() {
    accessControlServices->createAssociation();
}
bool ETSI_RRS_MURI::terminateAssociation() {
    accessControlServices->terminateAssociation();
}
//administrative
void ETSI_RRS_MURI::getRadioAppParameters() {
    accessControlServices->getListOfRadioApps();
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

    delete accessControlServices;
    delete administrativeServices;
    // delete dataFlowServices;
    delete radioComputer;
}
}

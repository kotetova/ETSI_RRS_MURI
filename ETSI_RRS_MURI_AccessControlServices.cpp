//
// Created by kate on 20.04.18.
//

#include "ETSI_RRS_MURI_AccessControlServices.h"
#include "ETSI_RRS_MURI.h"
#include <fstream>



ETSI_RRS_MURI_AccessControlServices::ETSI_RRS_MURI_AccessControlServices(AppTemplate &currentAPI) : ETSI_RRS_yMURI(){
    radioComputer = new ETSI_RRS_RadioComputer();
    currentApp = &currentAPI;
    cout << "Access Control Services was created"<< endl;

}

int ETSI_RRS_MURI_AccessControlServices::activateRadioApps(int URA_ID){
    activateRA = false;
    if (checkoutURA(URA_ID) == true) {
        cout << URA_ID + "Activate..."<<endl;
        return activateRA = true;
    } else if (activateRA == false) {
        cout <<URA_ID +  "Hard Activate..."<<endl;
        return activateRA = true;
    }
}

bool ETSI_RRS_MURI_AccessControlServices::deactivateRadioApps(int URA_ID) {
    activateRA = true;
       if (checkoutURA(URA_ID) == true) {
           cout << "Deactivate..."<<endl;
           return activateRA = false;
           } else if (activateRA == true) {
                cout << URA_ID + " Hard deactivate..."<<endl;
           return activateRA = false;
       }
}


    void ETSI_RRS_MURI_AccessControlServices::getListOfRadioApps() {   //RadioAppList
        arr();
    }

    bool ETSI_RRS_MURI_AccessControlServices::terminateAssociation() {

        if (checkoutURA(URA_ID) == true && associateRA == false) {
            cout << "Terminate Network Association yet.";
        }  else associateRA == false;
            cout << "Processing...";
    }

    int ETSI_RRS_MURI_AccessControlServices::createAssociation() {
        if (checkoutURA(URA_ID) == true && associateRA == true) {
                cout << "Network Association Established yet.";

        } else associateRA == true;
        cout << "Processing...";
    }

ETSI_RRS_MURI_AccessControlServices::~ETSI_RRS_MURI_AccessControlServices()
    {
    cout << "Access Control Services was destroyed" << endl;
    }





//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AdministrativeServices.h"

ETSI_RRS_MURI_AdministrativeServices::ETSI_RRS_MURI_AdministrativeServices(){

    cout << "Administrative Services was created"<< endl;

}
int ETSI_RRS_MURI_AdministrativeServices::installRadioApps(int RAP_ID) {

    if (muri.checkoutRAP() == true) {
        cout << "installable application " << RAP_ID;
    } else cout << "Not found this ID ";


//
//
//

    return 0;
}


    int ETSI_RRS_MURI_AdministrativeServices::uninstallRadioApps(int URA_ID) {

        if (muri.checkoutURA() == true) {
            cout << "uninstallable application " << URA_ID;
        } else cout << "Not found this ID ";

//
//
//


        return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::createRadioApps(int RAP_ID) {

    if (muri.checkoutURA() == true) {
        cout << "create application " << URA_ID;
    } else cout << "Not found this ID ";

//
//
//


    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::deleteRadioApps(int URA_ID){

    if (muri.checkoutURA() == true) {
        cout << "delete application " << URA_ID;
    } else cout << "Not found this ID ";

//
//
//


    return 0;

}

void ETSI_RRS_MURI_AdministrativeServices::getRadioAppParameters(){

}

bool ETSI_RRS_MURI_AdministrativeServices::setRadioAppParameters(){

}

void ETSI_RRS_MURI_AdministrativeServices::getListOfRadioApps(){

}


ETSI_RRS_MURI_AdministrativeServices::~ETSI_RRS_MURI_AdministrativeServices(){

    cout << "Administrative Services was destroyed"<< endl;
}


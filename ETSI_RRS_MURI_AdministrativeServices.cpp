//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AdministrativeServices.h"
ETSI_RRS_MURI_AdministrativeServices::ETSI_RRS_MURI_AdministrativeServices(ETSI_RRS_RadioComputer &currentRC){

    radioComputer = &currentRC;
    cout << "Administrative Services was created"<< endl;

}
int ETSI_RRS_MURI_AdministrativeServices::installRadioApps(int RAP_ID){


    if (checkoutRAP()== true);
    {

        
        cout << "installable application " << RAP_ID;
    }
    else if (checkoutRAP()!= true){
        cout << "Not found this RAP ID ";
    }

    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::uninstallRadioApps(int URA_ID){


    if (checkoutRAP()== true);
    {

        cout << "uninstallable application " << RAP_ID;
    }
    else {
        cout << "Not found this RAP ID ";
    }

    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::createRadioApps(int RAP_ID) {
    if (checkoutRAP() == true);
    {

        cout << "Application was create " << RAP_ID;
    }
    else if (checkoutRAP() != true) {
        cout << "Not found this RAP ID ";
    }

    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::deleteRadioApps(int URA_ID){
    if (checkoutURA()== true);
    {

        cout << "Application was delete " << URA_ID;
    }
    else if (checkoutURA()!= true){
        cout << "Not found this URA ID ";
    }

    return 0;
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

bool ETSI_RRS_MURI_AdministrativeServices::checkoutURA() {
    if (this->radioComputer->R1 == URA_ID) {
        cout << "URA ID is correct " << radioComputer->R1 << " < > " << URA_ID << endl;
        return true;
    } else {
        cout << "Error: URA ID is not correct " << radioComputer->R1 << " < > " << URA_ID << endl;
        return false;
    }
};

bool ETSI_RRS_MURI_AdministrativeServices::checkoutRAP() {
    if (this->radioComputer->R1 == RAP_ID) {
        cout << "RAP ID is correct " << radioComputer->R1 << " < > " << RAP_ID << endl;
        return true;
    } else {
        cout << "Error: RAP ID is not correct " << radioComputer->R1 << " < > " << RAP_ID << endl;
        return false;
    }
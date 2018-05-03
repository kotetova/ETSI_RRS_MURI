//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_AdministrativeServices.h"
ETSI_RRS_AdministrativeServices::ETSI_RRS_AdministrativeServices(){

    cout << "Administrative Services was created"<< endl;

}
int ETSI_RRS_AdministrativeServices::installRadioApps(){
    cout << "installable RAP ID ";
    return 0;
}

int ETSI_RRS_AdministrativeServices::uninstallRadioApps(){
    cout << "uninstallable RAP ID ";
    return 0;
}

int ETSI_RRS_AdministrativeServices::createRadioApps(){

    return 0;
}

int ETSI_RRS_AdministrativeServices::deleteRadioApps(){

    return 0;
}

void ETSI_RRS_AdministrativeServices::getRadioAppParameters(){


}

bool ETSI_RRS_AdministrativeServices::setRadioAppParameters(){

}

void ETSI_RRS_AdministrativeServices::getListOfRadioApps(){

}



void  ETSI_RRS_AdministrativeServices::setRAP_ID(int currentRAP_ID){
    this->RAP_ID = currentRAP_ID;
}

int ETSI_RRS_AdministrativeServices::getRAP_ID(){
    return RAP_ID;

}

void  ETSI_RRS_AdministrativeServices::setURA_ID(int currentURA_ID){
    this->URA_ID = currentURA_ID;
}

int ETSI_RRS_AdministrativeServices::getURA_ID(){
    return URA_ID;

}

ETSI_RRS_AdministrativeServices::~ETSI_RRS_AdministrativeServices(){

    cout << "Administrative Services was destroyed"<< endl;
}
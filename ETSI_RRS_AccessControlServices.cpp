//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_AccessControlServices.h"

ETSI_RRS_AccessControlServices::ETSI_RRS_AccessControlServices() {

    cout << "Access Control Services was created"<< endl;

}

int ETSI_RRS_AccessControlServices::activateRadioApps(){

    return 0;
}

bool ETSI_RRS_AccessControlServices::deactivateRadioApps(){

}

void ETSI_RRS_AccessControlServices::getListOfRadioApps(){   //RadioAppList


}

bool ETSI_RRS_AccessControlServices::startRadioMeasurment(){

}

void ETSI_RRS_AccessControlServices::stopRadioMeasurment(){  //RadioMeasurmentList

}

int ETSI_RRS_AccessControlServices::createAssociation(){

    return 0;
}

bool ETSI_RRS_AccessControlServices::terminateAssociation(){

}

int ETSI_RRS_AccessControlServices::createLink(){

    return 0;
}

int ETSI_RRS_AccessControlServices::releaseLink()
{

    return 0;
}

int ETSI_RRS_AccessControlServices::createDataFlow(){

    return 0;
}

int ETSI_RRS_AccessControlServices::terminateDataFlow(){

    return 0;
}


void ETSI_RRS_AccessControlServices::setRAP_ID(int currentRAP_ID){
    this->RAP_ID = currentRAP_ID;
}

int ETSI_RRS_AccessControlServices::getRAP_ID(){
    return RAP_ID;

}

void ETSI_RRS_AccessControlServices::setURA_ID(int currentURA_ID){
    this->URA_ID = currentURA_ID;
}

int ETSI_RRS_AccessControlServices::getURA_ID(){
    return URA_ID;

}

ETSI_RRS_AccessControlServices::~ETSI_RRS_AccessControlServices() {

    cout << "Access Control Services was destroyed"<< endl;
}
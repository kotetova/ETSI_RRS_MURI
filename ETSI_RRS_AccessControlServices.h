//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#ifndef MURI_ACCESSCONTROLSERVICES_H
#define MURI_ACCESSCONTROLSERVICES_H

using namespace std;

class ETSI_RRS_AccessControlServices {
public:

    ETSI_RRS_AccessControlServices();
    ~ETSI_RRS_AccessControlServices();

    int activateRadioApps();
    bool deactivateRadioApps();
    void getListOfRadioApps();   //RadioAppList
    bool startRadioMeasurment();
    void stopRadioMeasurment();  //RadioMeasurmentList
    int createAssociation();
    bool terminateAssociation();
    int createLink();
    int releaseLink();
    int createDataFlow();
    int terminateDataFlow();

    int getRAP_ID();
    int getURA_ID();
    void setRAP_ID(int);
    void setURA_ID(int);

protected:
private:
    int RAP_ID, URA_ID;

};


#endif //MURI_ACCESSCONTROLSERVICES_H

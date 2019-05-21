//
// Created by stormy on 20.04.18.
//
#include "ETSI_RRS_MURI.h"



ETSI_RRS_MURI::ETSI_RRS_MURI(AppTemplate &currentAPI){
    radioComputer = new ETSI_RRS_RadioComputer();
    this->currentApp = &currentAPI;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ETSI_RRS_MURI::checkoutURA(int ura) {
    this->radioComputer->E1;
    currentApp->appID = ura;

    if ( ura = URA_ID) {
        cout << "URA ID is correct " << ura << " < > " << URA_ID << endl;
        return true;
    } else {
        cout << "Error: URA ID is not correct " << ura << " < > " << URA_ID << endl;
        return false;
    }
};

bool ETSI_RRS_MURI::checkoutRAP(int rap) {
    this->radioComputer->E1;
    currentApp->appPackageID = rap;
    if ( int rap = RAP_ID) {
        cout << "RAP ID is correct " << rap<< " < > " << RAP_ID << endl;
        return true;
    } else {
        cout << "Error: RAP ID is not correct " << rap << " < > " << RAP_ID << endl;
        return false;
    }
};

int ETSI_RRS_MURI::arr() {
    currentApp->appID;
    list<int>
            radioAppsList(4, URA_ID);
    auto i = radioAppsList.begin(), j = radioAppsList.end();
    while (i != j) {
        URA_ID = rand()%7;
        i++;
    }
 for (int k = 0 ; k <4;k++) {
     cout << URA_ID;
 }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
ETSI_RRS_MURI::~ETSI_RRS_MURI() {
    delete radioComputer;
}


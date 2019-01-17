//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AccessControlServices.h"


ETSI_RRS_MURI_AccessControlServices::ETSI_RRS_MURI_AccessControlServices(ETSI_RRS_RadioComputer &currentRC) {
    radioComputer = &currentRC;
    cout << "Access Control Services was created"<< endl;

}

int ETSI_RRS_MURI_AccessControlServices::activateRadioApps(int URA_ID){


    if (this->radioComputer->R1==URA_ID){
        cout << "URA ID is correct " << radioComputer->R1 << " < > " << URA_ID<<endl;
        return 0;

        //activate
    }
    else {
        cout << "Error: URA ID is not correct " << radioComputer->R1 << " < > "<< URA_ID << endl;
        return -1;
    }
}

bool ETSI_RRS_MURI_AccessControlServices::deactivateRadioApps(int URA_ID){

    if (this->radioComputer->R1==URA_ID){
        cout << "URA ID is correct " << radioComputer->R1 << " < > " << URA_ID<<endl;
        return true;
    }
    else {
        cout << "Error: URA ID is not correct " << radioComputer->R1 << " < > "<< URA_ID << endl;
        return false;
    }
}


void ETSI_RRS_MURI_AccessControlServices::getListOfRadioApps(){   //RadioAppList

list<int> radioAppsList(5, URA_ID);
auto i = radioAppsList.begin(), j = radioAppsList.end();
while (i!=j){
    cout << *i<<endl;
    i++;
    }
}


int ETSI_RRS_MURI_AccessControlServices::createAssociation(int ){

    return 0;
}

bool ETSI_RRS_MURI_AccessControlServices::terminateAssociation(){

}




ETSI_RRS_MURI_AccessControlServices::~ETSI_RRS_MURI_AccessControlServices() {

    cout << "Access Control Services was destroyed"<< endl;
}
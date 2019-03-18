//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AccessControlServices.h"
#include <fstream>

ETSI_RRS_MURI_AccessControlServices::ETSI_RRS_MURI_AccessControlServices(ETSI_RRS_RadioComputer &currentRC) {
    radioComputer = &currentRC;
    cout << "Access Control Services was created"<< endl;

}

int ETSI_RRS_MURI_AccessControlServices::activateRadioApps(int URA_ID){

    checkoutURA();
    system("./test");
    //activate exe file

}

bool ETSI_RRS_MURI_AccessControlServices::deactivateRadioApps(int URA_ID) {
    int sw;
    char y,n;
    switch (sw) {
        case 1 : {
        cout << "If you need Hard Deactivation press 'y', another press 'n' "<< endl;
        cin >> y;
        if (y == 121){
            cout<<"Hard deactivate...";
            checkoutURA();



        } y = 0;
        }
        case 2: {
            if (n == 110) {
                cout << "Deactivate...";
                checkoutURA();

            }
        } n = 0;
        default:{
            cout << "Error!";
        }



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

bool ETSI_RRS_MURI_AccessControlServices::checkoutURA() {
    if (this->radioComputer->R1 == URA_ID) {
        cout << "URA ID is correct " << radioComputer->R1 << " < > " << URA_ID << endl;
        return true;
    } else {
        cout << "Error: URA ID is not correct " << radioComputer->R1 << " < > " << URA_ID << endl;
        return false;
    }
};

bool ETSI_RRS_MURI_AccessControlServices::checkoutRAP() {
    if (this->radioComputer->R1 == RAP_ID) {
        cout << "RAP ID is correct " << radioComputer->R1 << " < > " << RAP_ID << endl;
        return true;
    } else {
        cout << "Error: RAP ID is not correct " << radioComputer->R1 << " < > " << RAP_ID << endl;
        return false;
    }

}
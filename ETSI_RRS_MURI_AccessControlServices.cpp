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

    muri->checkoutURA();
    system("./test");
    //activate exe file

}

bool ETSI_RRS_MURI_AccessControlServices::deactivateRadioApps(int URA_ID) {
    int sw;
    char q = 0 ;
    switch (sw) {
        case 1 : {
        cout << "If you need Hard Deactivation press 'y', another press 'n' "<< endl;
        cin >> q;
        if (q == 1){
            muri->checkoutURA();
            cout<<"Hard deactivate...";
        }
        }
        case 2: {
            if (q == 2) {
                muri->checkoutURA();
                cout << "Deactivate...";

            }
        }
        default:{
            cout << "Error!";
        }



    }
}

void ETSI_RRS_MURI_AccessControlServices::getListOfRadioApps(int ){   //RadioAppList

list<int> radioAppsList(5, URA_ID);
auto i = radioAppsList.begin(), j = radioAppsList.end();
while (i!=j){
    cout << *i<<endl;
    i++;
    }
}


int ETSI_RRS_MURI_AccessControlServices::createAssociation(int URA_ID){
    int swsw, qq;
    bool associate;
    switch (swsw) {
        case 1 : {
            cout << "If you want Create Associate press 'y', another press 'n' "<< endl;
            cin >> qq;
            if (qq == 1){
                muri->checkoutURA();
                if (associate == true){
                    cout << "Network Association Established yet.";
                }
                   else associate == true;
                cout<<"Network Association Established ...";
            }
        }

        default:{
            associate == false;
            cout << "Error!";
        }
    }
    return 0;
}

bool ETSI_RRS_MURI_AccessControlServices::terminateAssociation(){
    int sw, q;
    bool associate;
    switch (sw) {
        case 1 : {
            cout << "If you want Terminate Associate press 'y', another press 'n' "<< endl;
            cin >> q;
            if (q == 1){
                muri->checkoutURA();
                if (associate == false){
                    cout << "Network Association Terminate yet.";
                }
                else associate == false;
                cout<<"Network Association Terminate...";
            }
        }

        default:{
            associate == true;
            cout << "Error!";
        }
    }
    return 0;
}

ETSI_RRS_MURI_AccessControlServices::~ETSI_RRS_MURI_AccessControlServices() {

        cout << "Access Control Services was destroyed"<< endl;
    }

}



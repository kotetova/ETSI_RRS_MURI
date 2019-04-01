//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AccessControlServices.h"
#include "ETSI_RRS_MURI.h"
#include <fstream>



ETSI_RRS_MURI_AccessControlServices::ETSI_RRS_MURI_AccessControlServices() : ETSI_RRS_MURI(){
    cout << "Access Control Services was created"<< endl;

}

int ETSI_RRS_MURI_AccessControlServices::activateRadioApps(int URA_ID){

    int q, sw;
    switch (sw) {
        case 1 : {
            cout << "If you need Activation press '1' " << endl;
            cin >> q;
            if (q == 1) {
                if( checkoutURA() == true) {
                    cout << "Aactivate...";
                    //activate exe file
                }
            }
        }
        default: {
            cout << "Error!";
        }
    }
}

bool ETSI_RRS_MURI_AccessControlServices::deactivateRadioApps(int URA_ID) {
    int q, sw;
    int activeApp = 1;
    switch (sw) {
        case 1 : {
            cout << "If you need Deactivation press '1'" << endl;
            cin >> q;
            if (q == 1) {
                if (checkoutURA() == true) {
                    cout << "Deactivate...";
                    activeApp = 0;
                }
            }
            default: {
                cout << "Error!";
            }
            if (activeApp == 1 && q == 1) {
                checkoutURA();
                cout << "Hard deactivate...";
            }
        }
    }
}

    void ETSI_RRS_MURI_AccessControlServices::getListOfRadioApps() {   //RadioAppList

        list<int> radioAppsList(5, URA_ID);
        auto i = radioAppsList.begin(), j = radioAppsList.end();
        while (i != j) {
            cout << *i << endl;
            i++;
        }
    }

    bool ETSI_RRS_MURI_AccessControlServices::terminateAssociation() {
        int sw, q;
        bool associate;
        switch (sw) {
            case 1 : {
                cout << "If you want Terminate Associate press '1" << endl;
                cin >> q;
                if (q == 1) {
                    if (checkoutURA() == true) {
                        if (associate == true) {
                            cout << "Network Association Terminate yet.";
                        } else associate = true;
                        cout << "Terminate Network Associate...";
                    }
                }
            }
            default: {
                associate == false;
                cout << "Error!";
            }
        }
        return associate;
    }

    int ETSI_RRS_MURI_AccessControlServices::createAssociation() {
        int sw, q;
        bool associate;
        switch (sw) {
            case 1 : {
                cout << "If you want Create Associate press '1, another press '0' " << endl;
                cin >> q;
                if (q == 1) {
                    if (checkoutURA() == true) {
                        if (associate == true) {
                            cout << "Network Association Established yet.";
                        } else associate = true;
                        cout << "Network Association Established...";
                    }
                } else
                    default: {
                        associate == false;
                        cout << "Error!";
                    }
            }
                return associate;
        }
    }

ETSI_RRS_MURI_AccessControlServices::~ETSI_RRS_MURI_AccessControlServices()
    {
    cout << "Access Control Services was destroyed" << endl;
    }





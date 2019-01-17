//
// Created by kate on 27.12.18.
//

#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_CSL.h"

ETSI_RRS_RadioComputer::ETSI_RRS_RadioComputer() {

}


ETSI_RRS_RadioComputer::~ETSI_RRS_RadioComputer() {


}


RadioApp::RadioApp(int, int) {

    cout << "Radio Computer have a secret RAP ID " << P1<<endl;
    cout << "Radio Computer have a secret URA ID " << R1<<endl;


}

RadioApp::~RadioApp() {


}

Capabilities::Capabilities() {

}

Capabilities::~Capabilities() {

}

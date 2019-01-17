//
// Created by kate on 27.12.18.
//

#include "ETSI_RRS_CSL.h"


ETSI_RRS_CSL::ETSI_RRS_CSL() {


    RadioApp radioApp(P1, R1); // call from RC


    Administrator *administrator;
    MobilityPolicyManager *mobilityPolicyManager;

  //  administrator->DownloadRAPReq(P1);
   // administrator->InstallRAPReq(P1);


    //mobilityPolicyManager->ActivateReq(R1);


}

Administrator::Administrator() {


}
MobilityPolicyManager::MobilityPolicyManager() {

}

int Administrator::DownloadRAPReq(int RAP_ID) {

    cout << P1 <<" < > "<< endl;
    return 0;

}
int Administrator::InstallRAPReq(int RAP_ID) {

    cout << "GREATE "<< P1<<endl;
    return 0;
}

int MobilityPolicyManager::ActivateReq(int URA_ID) {




}
Administrator::~Administrator() {

}

MobilityPolicyManager::~MobilityPolicyManager() {


}
ETSI_RRS_CSL::~ETSI_RRS_CSL() {


}


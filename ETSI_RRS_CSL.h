//
// Created by kate on 27.12.18.
//

#ifndef RRS_MURI_COMMUNICATIONSERVICESLAYER_H
#define RRS_MURI_COMMUNICATIONSERVICESLAYER_H
#include <iostream>
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_RCF.h"

using namespace std;

class ETSI_RRS_CSL {
private:
    ETSI_RRS_RadioComputer *radioComputer;
public:
    ETSI_RRS_CSL();
    int P1, R1;
    ~ETSI_RRS_CSL();

};

class Administrator: public ETSI_RRS_CSL {

public:
    Administrator();
    ~Administrator();

    int DownloadRAPReq(int);
    int InstallRAPReq(int);

};

class MobilityPolicyManager: public ETSI_RRS_CSL{

public:
    MobilityPolicyManager();
    ~MobilityPolicyManager();

    int ListRAReq();
    int ActivateReq(int);

};

class NetorkingStack: public ETSI_RRS_CSL{

};

class Monitor: public ETSI_RRS_CSL{


};

#endif //RRS_MURI_COMMUNICATIONSERVICESLAYER_H

//
// Created by kate on 27.12.18.
//

#ifndef RRS_MURI_ETSI_RRS_RADIOCOMPUTER_H
#define RRS_MURI_ETSI_RRS_RADIOCOMPUTER_H

#include <sstream>
#include <iostream>


using namespace std;

class ETSI_RRS_RadioComputer {

public:

    ETSI_RRS_RadioComputer();
    int radioComputer, E1, E2, E3;

    ~ETSI_RRS_RadioComputer();

};

class RadioApp: public ETSI_RRS_RadioComputer{
public:
    RadioApp(int);

    ~RadioApp();

};

class  Capabilities: public  ETSI_RRS_RadioComputer{
public:
    Capabilities();
    ~Capabilities();

};
#endif //RRS_MURI_ETSI_RRS_RADIOCOMPUTER_H

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
    int P1 = 222;  //RAP ID for current radiocomputer
    int R1 = 111;  //URA ID for current radiocomputer


    ~ETSI_RRS_RadioComputer();

};

class RadioApp: public ETSI_RRS_RadioComputer{
public:
    RadioApp(int, int);

    ~RadioApp();

};

class  Capabilities: public  ETSI_RRS_RadioComputer{
public:
    Capabilities();
    ~Capabilities();

};
#endif //RRS_MURI_ETSI_RRS_RADIOCOMPUTER_H

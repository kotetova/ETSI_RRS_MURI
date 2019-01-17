//
// Created by kate on 27.12.18.
//

#ifndef RRS_MURI_RADIOCONTROLFRAMEWORK_H
#define RRS_MURI_RADIOCONTROLFRAMEWORK_H
#include "ETSI_RRS_CSL.h"
#include "ETSI_RRS_RadioComputer.h"
#include <iostream>
#include <string>
using namespace std;

class ETSI_RRS_RCF {
private:
    ETSI_RRS_RadioComputer *radioComputer;
public:
    ETSI_RRS_RCF(ETSI_RRS_RadioComputer&);
    ~ETSI_RRS_RCF();

};

class ConfigurationManager: public ETSI_RRS_RCF{
public:
    ConfigurationManager();
    ~ConfigurationManager();

};

class RadioConnectionManager: public ETSI_RRS_RCF{
public:
    RadioConnectionManager();
    ~RadioConnectionManager();

    int ActivateCnf(int&);
};

class MultiRadioController: public ETSI_RRS_RCF{
public:
    MultiRadioController();
    ~MultiRadioController();

};

class ResourceManager: public ETSI_RRS_RCF{
public:
    ResourceManager();
    ~ResourceManager();

};

class FlowController: public ETSI_RRS_RCF{
public:
    FlowController();
    ~FlowController();

};


#endif //RRS_MURI_RADIOCONTROLFRAMEWORK_H

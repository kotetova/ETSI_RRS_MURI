#include <iostream>
#include "ETSI_RRS_MURI.h"
using namespace std;

int main() {

    ETSI_RRS_MURI MURI;

    ETSI_RRS_AdministrativeServices a;
    ETSI_RRS_AccessControlServices b;
    ETSI_RRS_DataFlowServices d;

    a.installRadioApps();

    cout << endl <<"Complete!";
    return 0;
}
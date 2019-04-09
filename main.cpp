
#include <iostream>

#include <zconf.h>
#include "ETSI_RRS_MURI.h"
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI_AdministrativeServices.h"
#include "ETSI_RRS_MURI_AccessControlServices.h"


using namespace std;


int main() {

    ETSI_RRS_MURI_AdministrativeServices* administrativeServices = new ETSI_RRS_MURI_AdministrativeServices;
    ETSI_RRS_MURI_AccessControlServices* accessControlServices = new ETSI_RRS_MURI_AccessControlServices;

    accessControlServices->getListOfRadioApps();
    accessControlServices->deactivateRadioApps(5);




    // Test hash
//    string hash = muri.hashfile("test.txt");
 //   cout << "The hash of our file is: " << hash << endl;

    // The End

    return 0;
}
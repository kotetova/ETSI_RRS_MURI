
#include <iostream>

#include <zconf.h>
#include "ETSI_RRS_MURI.h"
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI_AdministrativeServices.h"
#include "ETSI_RRS_MURI_AccessControlServices.h"


using namespace std;


int main() {

   // ETSI_RRS_MURI_AdministrativeServices* administrativeServices = new ETSI_RRS_MURI_AdministrativeServices();
   // ETSI_RRS_MURI_AccessControlServices* accessControlServices = new ETSI_RRS_MURI_AccessControlServices();

    //accessControlServices->getListOfRadioApps();
   // accessControlServices->deactivateRadioApps(5);
    AppTemplate wifi {5, 6,"wifi", "null", false};
    wifi.newApp();

    return 0;
}
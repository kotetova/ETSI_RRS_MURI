
#include <iostream>

#include <zconf.h>
#include "ETSI_RRS_MURI.h"
#include "ETSI_RRS_RadioComputer.h"


using namespace std;


int main() {

    ETSI_RRS_RadioComputer radioComputer;

    ETSI_RRS_MURI muri(radioComputer);

    muri.activateRadioApps(5);
    muri.deactivateRadioApps(111);
    muri.getListOfRadioApps();

    cout << endl <<"Complete!"<< endl;


    // Test file


    // Test hash
//    string hash = muri.hashfile("test.txt");
 //   cout << "The hash of our file is: " << hash << endl;

    // The End

    return 0;
}
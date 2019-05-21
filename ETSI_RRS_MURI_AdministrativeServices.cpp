//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AdministrativeServices.h"
// #include "AppTemplate.cpp"

ETSI_RRS_MURI_AdministrativeServices::ETSI_RRS_MURI_AdministrativeServices(AppTemplate &currentAPI) : ETSI_RRS_MURI(currentAPI) {
    cout << "Administrative Services was created"<< endl;

}
int ETSI_RRS_MURI_AdministrativeServices::installRadioApps(int RAP_ID) {


    if (checkoutRAP(RAP_ID) == true) {
        cout << "installable application " << RAP_ID;
        int key = RAP_ID%10;
        system("pause>>void");
        return (key);

    } else cout << "Not found this ID ";
     return 0;
}


    int ETSI_RRS_MURI_AdministrativeServices::uninstallRadioApps(int RAP_ID) {

        if (checkoutURA(RAP_ID) == true) {
            cout << "uninstallable application " << RAP_ID;
        } else cout << "Not found this ID ";
        return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::createRadioApps(int URA_ID) {

    if (checkoutRAP(RAP_ID) == true) {

        char filename[100];
        cout << "Enter file name to compile ";
        cin.getline(filename, 100);

        // Build command to execute.  For example if the input
        // file name is a.cpp, then str holds "gcc -o a.out a.cpp"
        // Here -o is used to specify executable file name
        string str = "gcc ";
        str = str + " -o a.out " + filename;

        // Convert string to const char * as system requires
        // parameter of type const char *
        const char *command = str.c_str();

        cout << "Compiling file using " << command << endl;
        system(command);

        cout << "\nRunning file ";
        system("./a.out");

        cout << "create application " << RAP_ID;
    } else cout << "Not found this ID ";



    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::deleteRadioApps(int URA_ID){

    if (checkoutURA(URA_ID) == true) {
        cout << "delete application " << URA_ID;
    } else cout << "Not found this ID ";

    return 0;

}

void ETSI_RRS_MURI_AdministrativeServices::getRadioAppParameters(){

}

bool ETSI_RRS_MURI_AdministrativeServices::setRadioAppParameters(){

}

void ETSI_RRS_MURI_AdministrativeServices::getListOfRadioApps(){

}


ETSI_RRS_MURI_AdministrativeServices::~ETSI_RRS_MURI_AdministrativeServices(){

    cout << "Administrative Services was destroyed"<< endl;
}


//
// Created by stormy on 20.04.18.
//

#include "ETSI_RRS_MURI_AdministrativeServices.h"
ETSI_RRS_MURI_AdministrativeServices::ETSI_RRS_MURI_AdministrativeServices(ETSI_RRS_RadioComputer &currentRC){

    radioComputer = &currentRC;
    cout << "Administrative Services was created"<< endl;

}
int ETSI_RRS_MURI_AdministrativeServices::installRadioApps(int RAP_ID){
    cout << "installable RAP ID " <<RAP_ID;
    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::uninstallRadioApps(int URA_ID){
    cout << "uninstallable RAP ID ";
    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::createRadioApps(int RAP_ID){

    return 0;
}

int ETSI_RRS_MURI_AdministrativeServices::deleteRadioApps(int URA_ID){

    return 0;
}

void ETSI_RRS_MURI_AdministrativeServices::getRadioAppParameters(){


}

bool ETSI_RRS_MURI_AdministrativeServices::setRadioAppParameters(){

}

void ETSI_RRS_MURI_AdministrativeServices::getListOfRadioApps(){

}

string ETSI_RRS_MURI_AdministrativeServices::hashfile(const char *filename)
{
    ifstream fp(filename);
    stringstream ss;

    // Unable to hash file, return an empty hash.
    if (!fp.is_open()) {
        return "";
    }

    // Hashing
    uint32_t magic = 5381;
    char c;
    while (fp.get(c)) {
        magic = ((magic << 5) + magic) + c; // magic * 33 + c
    }

    ss << hex << setw(8) << setfill('0') << magic;
    return ss.str();
}

ETSI_RRS_MURI_AdministrativeServices::~ETSI_RRS_MURI_AdministrativeServices(){

    cout << "Administrative Services was destroyed"<< endl;
}
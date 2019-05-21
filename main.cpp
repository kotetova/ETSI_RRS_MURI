
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#include <zconf.h>
#include "ETSI_RRS_MURI.h"
#include "ETSI_RRS_RadioComputer.h"
#include "ETSI_RRS_MURI_AdministrativeServices.h"
#include "ETSI_RRS_MURI_AccessControlServices.h"


using namespace std;


int main() {

//    FILE *handle = popen("wifi", "r");
//    if (handle == NULL){
//    return  1;}
//
//    char buf [64];
//    size_t readn;
//    while ((readn = fread(buf, 1 , sizeof(buf),handle)) > 0) {
//        fwrite(buf, 1 , readn, stdout);
//    }
//    pclose(handle);
    system("app");


    AppTemplate wifi {1, 123,"wifi", "null", false};
    wifi.newApp();

    AppTemplate lte {2, 321, "lte", "хз", true};
    lte.newApp();

    return 0;
}
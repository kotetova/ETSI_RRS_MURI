//
// Created by kate on 09.04.19.
//

#include <iostream>
#include "ETSI_RRS_RadioComputer.h"
using  namespace std;



class AppTemplate{
public:
    int appPackageID;
    int appID;
    string appName;
    string appParametres;
    bool appStatus;


    void newApp(){

        cout<< appPackageID << appName << appParametres<< appStatus;

    }


};


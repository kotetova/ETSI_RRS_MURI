//
// Created by kate on 09.04.19.
//

#include <iostream>
#include "ETSI_RRS_RadioComputer.h"
using  namespace std;



class AppTemplate{
public:
    int appID;
    int appPackageID;
    string appName;
    string appParametres;
    bool appStatus;


    void newApp(){
        cout << appID<<endl;
        cout<< appPackageID << appName << appParametres<< appStatus;

    }


};


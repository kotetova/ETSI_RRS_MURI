//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#include "ETSI_RRS_RadioComputer.h"
#include <list>

static int  RAP_ID;
static int URA_ID;

#ifndef RRS_MURI_MURI_H
#define RRS_MURI_MURI_H

using namespace std;
class ETSI_RRS_MURI {

private:
    ETSI_RRS_RadioComputer *radioComputer;

public:
   ETSI_RRS_MURI();

    bool checkoutURA(int);
    bool checkoutRAP(int);
    int arr();



//    string hashfile (const char*);


    ~ETSI_RRS_MURI();
};





#endif
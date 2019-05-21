//
// Created by stormy on 20.04.18.
//
#pragma once
#include <iostream>

#include "ETSI_RRS_RadioComputer.h"
#include "AppTemplate.cpp"
#include <list>

static int  RAP_ID;
static int URA_ID;

#ifndef RRS_MURI_MURI_H
#define RRS_MURI_MURI_H

using namespace std;
class ETSI_RRS_MURI {

protected:
    ETSI_RRS_RadioComputer *radioComputer;
    AppTemplate *currentApp;

public:
   ETSI_RRS_MURI(AppTemplate&);

    bool checkoutURA(int);
    bool checkoutRAP(int);
    int arr();

    ~ETSI_RRS_MURI();
};





#endif
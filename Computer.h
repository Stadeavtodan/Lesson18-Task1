#pragma once
#include <iostream>

using namespace std;

struct Computer{
    char name[100] = "undefined";
    int OM = 16;
    float price = 10'000;

    void showInfo(){
        cout << "Name: " << name << endl;
        cout << "OM: " << OM << endl;
        cout << "Price: " << price << endl << endl;
    }
};
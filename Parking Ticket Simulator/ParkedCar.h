#pragma once
#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>

using namespace std;

class ParkedCar {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    int parkedMinutes;

public:
    ParkedCar(string mk, string mdl, string clr, string lic, int minutes);

    string getMake() const;
    string getModel() const;
    string getColor() const;
    string getLicenseNumber() const;
    int getParkedMinutes() const;
};
#endif 



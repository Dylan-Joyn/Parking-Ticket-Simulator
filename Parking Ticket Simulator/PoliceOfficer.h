#pragma once
#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include <string>

using namespace std;

class PoliceOfficer {
private:
    string name;
    int badgeNumber;

public:
    PoliceOfficer(string officerName, int badge);

    ParkingTicket* examineCar(const ParkedCar& car, const ParkingMeter& meter) const;
};

#endif



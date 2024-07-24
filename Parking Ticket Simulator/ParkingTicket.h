#pragma once
#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include <iostream>
#include <string>

using namespace std;

class ParkingTicket {
private:
    string make;
    string model;
    string color;
    string licenseNumber;
    string officerName;
    int officerBadge;
    int illegalMinutes;
    double fine;

public:
    ParkingTicket(string mk, string mdl, string clr, string lic, string officer, int badge, int minutes);

    static double calcFine(int minutes);

    friend ostream& operator<<(ostream& out, const ParkingTicket& ticket);

};
#endif



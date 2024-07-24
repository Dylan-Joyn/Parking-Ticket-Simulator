// Parking Ticket Simulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"

int main() {
    
    ParkedCar car("Honda", "Odyssey", "Orange", "999 999", 60);

    ParkingMeter meter(60); 

    PoliceOfficer officer("Paul Blart", 1);

    ParkingTicket* ticket = officer.examineCar(car, meter);

    if (ticket) {
        cout << *ticket;
        delete ticket;
    }
    else {
        cout << "No ticket issued." << endl;
    }

}



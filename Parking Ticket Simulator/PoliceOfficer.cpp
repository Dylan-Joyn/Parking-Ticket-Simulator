#include "PoliceOfficer.h"
#include "PoliceOfficer.h"

PoliceOfficer::PoliceOfficer(string officerName, int badge) : name(officerName), badgeNumber(badge) {}

ParkingTicket* PoliceOfficer::examineCar(const ParkedCar& car, const ParkingMeter& meter) const {
    int illegalMinutes = car.getParkedMinutes() - meter.getPurchasedMinutes();
    if (illegalMinutes > 0) {
        return new ParkingTicket(car.getMake(), car.getModel(), 
            car.getColor(), car.getLicenseNumber(), 
            name, badgeNumber, illegalMinutes);
    }
    return nullptr;
}

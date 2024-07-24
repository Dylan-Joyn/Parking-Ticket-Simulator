#include "ParkedCar.h"

ParkedCar::ParkedCar(string mk, string mdl, string clr, string lic, int minutes)
    : make(mk), model(mdl), color(clr), licenseNumber(lic), parkedMinutes(minutes) {}

string ParkedCar::getMake() const {
    return make;
}

string ParkedCar::getModel() const {
    return model;
}

string ParkedCar::getColor() const {
    return color;
}

string ParkedCar::getLicenseNumber() const {
    return licenseNumber;

}

int ParkedCar::getParkedMinutes() const {
    return parkedMinutes;

}

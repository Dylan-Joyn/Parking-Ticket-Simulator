#include "ParkingTicket.h"

ParkingTicket::ParkingTicket(string mk, string mdl, string clr, string lic, string officer, int badge, int minutes)
    : make(mk), model(mdl), color(clr), licenseNumber(lic), officerName(officer), officerBadge(badge), illegalMinutes(minutes) {
    fine = calcFine(minutes);
}

double ParkingTicket::calcFine(int minutes) {
    int hours = (minutes + 59) / 60;
    return 25.0 + (hours - 1) * 10.0;
}

ostream& operator<<(ostream& out, const ParkingTicket& ticket) {
    out << "Ticket\n"
        << "Make: " << ticket.make << "\n"
        << "Model: " << ticket.model << "\n"
        << "Color: " << ticket.color << "\n"
        << "License: " << ticket.licenseNumber << "\n"
        << "Officer Name: " << ticket.officerName << "\n"
        << "Officer Badge: " << ticket.officerBadge << "\n"
        << "Time Illegally Parked: " << ticket.illegalMinutes << " minutes\n"
        << "Fine: $" << ticket.fine << "\n";
    return out;
}

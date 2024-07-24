#pragma once
class ParkingMeter {
private:
    int purchasedMinutes;

public:
    ParkingMeter(int minutes) : purchasedMinutes(minutes) {}

    int getPurchasedMinutes() const {
        return purchasedMinutes;

    }
};



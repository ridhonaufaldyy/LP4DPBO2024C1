#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include "Vehicle.h"

class Motorcycle : public Vehicle {
private:
    string jenis_motor;
    int kapasitas_tangki;

public:
    Motorcycle(string nomor_plat, string merek, int tahun_produksi, string warna, string jenis_motor, int kapasitas_tangki)
        : Vehicle(nomor_plat, merek, tahun_produksi, warna), jenis_motor(jenis_motor), kapasitas_tangki(kapasitas_tangki) {}

    string toString() {
        return Vehicle::toString() + ", Jenis Motor: " + jenis_motor + ", Kapasitas Tangki: " + to_string(kapasitas_tangki);
    }
};

#endif // MOTORCYCLE_H

#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle {
private:
    int jumlah_kursi;
    int jumlah_pintu;

public:
    Car(string nomor_plat, string merek, int tahun_produksi, string warna, int jumlah_kursi, int jumlah_pintu)
        : Vehicle(nomor_plat, merek, tahun_produksi, warna), jumlah_kursi(jumlah_kursi), jumlah_pintu(jumlah_pintu) {}

    string toString() {
        return Vehicle::toString() + ", Jumlah Kursi: " + to_string(jumlah_kursi) + ", Jumlah Pintu: " + to_string(jumlah_pintu);
    }
};

#endif // CAR_H

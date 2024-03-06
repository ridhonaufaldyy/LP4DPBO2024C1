#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>
using namespace std;

class Vehicle {
protected:
    string nomor_plat;
    string merek;
    int tahun_produksi;
    string warna;

public:
    Vehicle(string nomor_plat, string merek, int tahun_produksi, string warna) 
        : nomor_plat(nomor_plat), merek(merek), tahun_produksi(tahun_produksi), warna(warna) {}

    string toString() {
        return "Nomor Plat: " + nomor_plat + ", Merek: " + merek + ", Tahun Produksi: " + to_string(tahun_produksi) + ", Warna: " + warna;
    }
};

#endif // VEHICLE_H

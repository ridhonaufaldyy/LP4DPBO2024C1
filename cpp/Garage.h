#ifndef GARAGE_H
#define GARAGE_H

#include <string>
#include <vector>
#include "Vehicle.h"
using namespace std;

class Garage {
private:
    string nama_garasi;
    int luas_garasi;
    vector<Vehicle*> kendaraan;

public:
    Garage(string nama_garasi, int luas_garasi)
        : nama_garasi(nama_garasi), luas_garasi(luas_garasi) {}

    void tambah_kendaraan(Vehicle* kendaraan) {
        this->kendaraan.push_back(kendaraan);
    }

    string toString() {
        string info_kendaraan;
        for (auto kendaraan_ptr : kendaraan) {
            info_kendaraan += kendaraan_ptr->toString() + "\n";
        }
        return "Nama Garasi: " + nama_garasi + ", Luas Garasi: " + to_string(luas_garasi) + "\nKendaraan:\n" + info_kendaraan;
    }
};

#endif // GARAGE_H

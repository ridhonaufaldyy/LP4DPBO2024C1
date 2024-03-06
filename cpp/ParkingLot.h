#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <vector>
#include "Vehicle.h"
using namespace std;

class ParkingLot {
private:
    int kapasitas;
    int jumlah_kendaraan;
    vector<Vehicle*> kendaraan;

public:
    ParkingLot(int kapasitas)
        : kapasitas(kapasitas), jumlah_kendaraan(0) {}

    void parkir_kendaraan(Vehicle* kendaraan) {
        if (jumlah_kendaraan < kapasitas) {
            this->kendaraan.push_back(kendaraan);
            jumlah_kendaraan++;
            cout << "Kendaraan berhasil diparkir!" << endl;
            cout << kendaraan->toString() << endl;  // Tampilkan informasi kendaraan setelah diparkir
        } else {
            cout << "Tempat parkir penuh!" << endl;
        }
    }

    string toString() {
        string info_kendaraan;
        for (auto kendaraan_ptr : kendaraan) {
            info_kendaraan += kendaraan_ptr->toString() + "\n";
        }
        return "Kapasitas Tempat Parkir: " + to_string(kapasitas) + ", Jumlah Saat Ini: " + to_string(jumlah_kendaraan) + "\nKendaraan:\n" + info_kendaraan;
    }
};

#endif // PARKINGLOT_H

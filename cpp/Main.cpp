#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Garage.h"
#include "ParkingLot.h"

using namespace std;

int main() {
    // Membuat beberapa kendaraan
    Car mobil1("ABC123", "Toyota", 2020, "Merah", 5, 4);
    Motorcycle motor1("DEF456", "Honda", 2019, "Biru", "Sport", 10);

    // Membuat garasi
    Garage my_garage("Garasi Saya", 2);

    // Menambahkan kendaraan ke dalam garasi
    my_garage.tambah_kendaraan(&mobil1);
    my_garage.tambah_kendaraan(&motor1);

    // Membuat sebuah tempat parkir
    ParkingLot tempat_parkir_saya(10);

    // Memarkirkan kendaraan di tempat parkir
    tempat_parkir_saya.parkir_kendaraan(&mobil1);
    tempat_parkir_saya.parkir_kendaraan(&motor1);

    // Mencetak informasi tentang kendaraan, garasi, dan tempat parkir
    cout << "Informasi tentang Kendaraan:" << endl;
    cout << mobil1.toString() << endl;
    cout << motor1.toString() << endl;

    cout << "\nInformasi tentang Garasi:" << endl;
    cout << my_garage.toString() << endl;

    cout << "\nInformasi tentang Tempat Parkir:" << endl;
    cout << tempat_parkir_saya.toString() << endl;

    // Mencetak informasi tentang semua kendaraan di dalam garasi
    cout << "\nKendaraan di dalam Garasi:" << endl;
    cout << my_garage.toString() << endl;

    // Mencetak informasi tentang semua kendaraan yang diparkir di tempat parkir
    cout << "\nKendaraan di dalam Tempat Parkir:" << endl;
    cout << tempat_parkir_saya.toString() << endl;

    return 0;
}

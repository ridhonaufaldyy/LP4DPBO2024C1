from Vehicle import Vehicle
from Car import Car
from Motorcycle import Motorcycle
from Garage import Garage
from ParkingLot import ParkingLot

def main():
    # Membuat beberapa kendaraan
    mobil1 = Car("ABC123", "Toyota", 2020, "Merah", 5, 4)
    motor1 = Motorcycle("DEF456", "Honda", 2019, "Biru", "Sport", 10)

    # Membuat garasi
    my_garage = Garage("Garasi Saya", 2)

    # Menambahkan kendaraan ke dalam garasi
    my_garage.tambah_kendaraan(mobil1)
    my_garage.tambah_kendaraan(motor1)

    # Membuat sebuah tempat parkir
    tempat_parkir_saya = ParkingLot(10)

    # Memarkirkan kendaraan di tempat parkir
    tempat_parkir_saya.parkir_kendaraan(mobil1)
    tempat_parkir_saya.parkir_kendaraan(motor1)

    # Mencetak informasi tentang kendaraan, garasi, dan tempat parkir
    print("Informasi tentang Kendaraan:")
    print(mobil1)
    print(motor1)

    print("\nInformasi tentang Garasi:")
    print(my_garage)
    
    print("\nInformasi tentang Tempat Parkir:")
    print(tempat_parkir_saya)
    
    # Mencetak informasi tentang semua kendaraan di dalam garasi
    print("\nKendaraan di dalam Garasi:")
    for kendaraan in my_garage.kendaraan:
        print(kendaraan)
    
    # Mencetak informasi tentang semua kendaraan yang diparkir di tempat parkir
    print("\nKendaraan di dalam Tempat Parkir:")
    for kendaraan in tempat_parkir_saya.kendaraan:
        print(kendaraan)

if __name__ == "__main__":
    main()

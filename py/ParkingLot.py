class ParkingLot:
    def __init__(self, kapasitas):
        self.kapasitas = kapasitas
        self.jumlah_kendaraan = 0
        self.kendaraan = []

    def parkir_kendaraan(self, kendaraan):
        if self.jumlah_kendaraan < self.kapasitas:
            self.kendaraan.append(kendaraan)
            self.jumlah_kendaraan += 1
            print("Kendaraan berhasil diparkir!")
            print(kendaraan)  # Tampilkan informasi kendaraan setelah diparkir
        else:
            print("Tempat parkir penuh!")

    def __str__(self):
        info_kendaraan = "\n".join(str(kendaraan) for kendaraan in self.kendaraan)
        return f"Kapasitas Tempat Parkir: {self.kapasitas}, Jumlah Saat Ini: {self.jumlah_kendaraan}\nKendaraan:\n{info_kendaraan}"

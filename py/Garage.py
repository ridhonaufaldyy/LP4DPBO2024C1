class Garage:
    def __init__(self, nama_garasi, luas_garasi):
        self.nama_garasi = nama_garasi
        self.luas_garasi = luas_garasi
        self.kendaraan = []

    def tambah_kendaraan(self, kendaraan):
        self.kendaraan.append(kendaraan)

    def __str__(self):
        info_kendaraan = "\n".join(str(kendaraan) for kendaraan in self.kendaraan)
        return f"Nama Garasi: {self.nama_garasi}, Luas Garasi: {self.luas_garasi}\nKendaraan:\n{info_kendaraan}"

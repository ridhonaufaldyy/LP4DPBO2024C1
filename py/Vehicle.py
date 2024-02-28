class Vehicle:
    def __init__(self, nomor_plat, merek, tahun_produksi, warna):
        self.nomor_plat = nomor_plat
        self.merek = merek
        self.tahun_produksi = tahun_produksi
        self.warna = warna

    def __str__(self):
        return f"Nomor Plat: {self.nomor_plat}, Merek: {self.merek}, Tahun Produksi: {self.tahun_produksi}, Warna: {self.warna}"

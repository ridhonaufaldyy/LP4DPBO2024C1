from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, nomor_plat, merek, tahun_produksi, warna, jumlah_kursi, jumlah_pintu):
        super().__init__(nomor_plat, merek, tahun_produksi, warna)
        self.jumlah_kursi = jumlah_kursi
        self.jumlah_pintu = jumlah_pintu

    def __str__(self):
        return super().__str__() + f", Jumlah Kursi: {self.jumlah_kursi}, Jumlah Pintu: {self.jumlah_pintu}"

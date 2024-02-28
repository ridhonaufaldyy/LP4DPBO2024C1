from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, nomor_plat, merek, tahun_produksi, warna, jenis_motor, kapasitas_tangki):
        super().__init__(nomor_plat, merek, tahun_produksi, warna)
        self.jenis_motor = jenis_motor
        self.kapasitas_tangki = kapasitas_tangki

    def __str__(self):
        return super().__str__() + f", Jenis Motor: {self.jenis_motor}, Kapasitas Tangki: {self.kapasitas_tangki}"

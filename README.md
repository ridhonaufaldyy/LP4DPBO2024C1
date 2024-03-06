# LP4DPBO2024C1

/Saya [Ridho Alif Naufaldy] mengerjakan tugas praktikum 4 dalam mata kuliah DPBO untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin./

# alasan
Membuat kelas-kelas terpisah memungkinkan untuk pengorganisasian yang baik dan pemeliharaan kode yang lebih mudah. Setiap kelas memiliki tanggung jawab spesifiknya sendiri, memudahkan identifikasi dan penanganan masalah.
Pewarisan (Inheritance):

Pemakaian pewarisan (inheritance) memungkinkan untuk berbagi dan memanfaatkan fungsionalitas yang sama antara kelas-kelas. Dalam contoh tersebut, kelas Car dan Motorcycle mewarisi sifat dan perilaku umum dari kelas Vehicle.

# alur
Deklarasi Kelas Kendaraan (Vehicle):

Kelas Vehicle merupakan kelas dasar yang memiliki atribut dan metode yang umum untuk semua jenis kendaraan, seperti nomor plat, merek, tahun produksi, dan metode untuk mencetak informasi kendaraan.
Deklarasi Kelas Mobil (Car) dan Motor (Motorcycle):

Kelas Car dan Motorcycle mewarisi sifat dan perilaku dari kelas Vehicle. Masing-masing kelas ini memiliki atribut dan metode yang spesifik untuk jenis kendaraan mereka, seperti jumlah kursi atau jenis motor.
Deklarasi Kelas Garasi (Garage) dan Tempat Parkir (ParkingLot):

Kelas Garage dan ParkingLot bertanggung jawab untuk mengelola kendaraan yang diparkir di dalamnya. Kelas Garage menyimpan kendaraan di dalamnya, sementara ParkingLot menyediakan tempat parkir untuk kendaraan.
Implementasi Fungsi-fungsi Utama:

Fungsi-fungsi utama seperti tambah_kendaraan pada kelas Garage dan parkir_kendaraan pada kelas ParkingLot diimplementasikan untuk menambahkan kendaraan ke dalamnya.
Penggunaan Kelas dalam main():

Dalam main(), beberapa objek dari kelas Car dan Motorcycle dibuat.
Objek-objek ini kemudian ditambahkan ke dalam objek Garage dan ParkingLot.
Informasi tentang kendaraan, garasi, dan tempat parkir dicetak menggunakan metode toString().
Pencetakan Informasi:

Informasi tentang kendaraan, garasi, dan tempat parkir dicetak ke layar untuk memberikan informasi tentang status dan kondisi saat ini dari setiap komponen.


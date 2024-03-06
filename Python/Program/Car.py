from Vehicle import Vehicle

class Car(Vehicle):
    def __init__(self, jenisKendaraan="", platNomor="", merk="", tahunProduksi="", warna="", jumlahKursi=0, jumlahPintu=0):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(jenisKendaraan, platNomor, merk, tahunProduksi, warna)
        # Menginisialisasi atribut khusus mobil
        self.jumlahKursi = jumlahKursi
        self.jumlahPintu = jumlahPintu

    def display(self):
        # Memanggil metode display kelas induk (Vehicle)
        super().display()
        # Menampilkan informasi tambahan tentang mobil
        print("Jumlah Kursi       :", self.jumlahKursi)
        print("Jumlah Pintu       :", self.jumlahPintu)

    def getJumlahKursi(self):
        # Mengembalikan jumlah kursi mobil
        return self.jumlahKursi

    def setJumlahKursi(self, jumlahKursi):
        # Mengatur jumlah kursi mobil
        self.jumlahKursi = jumlahKursi

    def getJumlahPintu(self):
        # Mengembalikan jumlah pintu mobil
        return self.jumlahPintu

    def setJumlahPintu(self, jumlahPintu):
        # Mengatur jumlah pintu mobil
        self.jumlahPintu = jumlahPintu

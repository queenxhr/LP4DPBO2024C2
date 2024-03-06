from Vehicle import Vehicle

class Motorcycle(Vehicle):
    def __init__(self, jenisKendaraan="", platNomor="", merk="", tahunProduksi="", warna="", jenisMotor="", kapasitasTangki=0.0):
        # Memanggil konstruktor kelas induk (Vehicle)
        super().__init__(jenisKendaraan, platNomor, merk, tahunProduksi, warna)
        # Menginisialisasi atribut khusus motor
        self.jenisMotor = jenisMotor
        self.kapasitasTangki = kapasitasTangki

    def display(self):
        # Memanggil metode display kelas induk (Vehicle)
        super().display()
        # Menampilkan informasi tambahan tentang motor
        print("Jenis Motor        :", self.jenisMotor)
        print("Kapasitas Tangki   :", self.kapasitasTangki, "Liter")

    def getJenisMotor(self):
        # Mengembalikan jenis motor
        return self.jenisMotor

    def setJenisMotor(self, jenisMotor):
        # Mengatur jenis motor
        self.jenisMotor = jenisMotor

    def getKapasitasTangki(self):
        # Mengembalikan kapasitas tangki motor
        return self.kapasitasTangki

    def setKapasitasTangki(self, kapasitasTangki):
        # Mengatur kapasitas tangki motor
        self.kapasitasTangki = kapasitasTangki

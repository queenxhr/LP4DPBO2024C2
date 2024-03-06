class Vehicle:
    def __init__(self, jenisKendaraan="", platNomor="", merk="", tahunProduksi="", warna=""):
        # Menginisialisasi atribut-atribut kendaraan
        self.jenisKendaraan = jenisKendaraan
        self.platNomor = platNomor
        self.merk = merk
        self.tahunProduksi = tahunProduksi
        self.warna = warna

    def display(self):
        # Menampilkan informasi tentang kendaraan
        print("Jenis Kendaraan    :", self.jenisKendaraan)
        print("Plat Nomor         :", self.platNomor)
        print("Merk               :", self.merk)
        print("Tahun Produksi     :", self.tahunProduksi)
        print("Warna              :", self.warna)

    def getJenisKendaraan(self):
        # Mengembalikan jenis kendaraan
        return self.jenisKendaraan

    def setJenisKendaraan(self, jenisKendaraan):
        # Mengatur jenis kendaraan
        self.jenisKendaraan = jenisKendaraan

    def getPlatNomor(self):
        # Mengembalikan plat nomor kendaraan
        return self.platNomor

    def setPlatNomor(self, platNomor):
        # Mengatur plat nomor kendaraan
        self.platNomor = platNomor

    def getMerk(self):
        # Mengembalikan merk kendaraan
        return self.merk

    def setMerk(self, merk):
        # Mengatur merk kendaraan
        self.merk = merk

    def getTahunProduksi(self):
        # Mengembalikan tahun produksi kendaraan
        return self.tahunProduksi

    def setTahunProduksi(self, tahunProduksi):
        # Mengatur tahun produksi kendaraan
        self.tahunProduksi = tahunProduksi

    def getWarna(self):
        # Mengembalikan warna kendaraan
        return self.warna

    def setWarna(self, warna):
        # Mengatur warna kendaraan
        self.warna = warna

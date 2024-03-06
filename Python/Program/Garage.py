class Garage:
    def __init__(self, namaGarasi="", luasGarasi=""):
        # Menginisialisasi atribut-atribut garasi
        self.namaGarasi = namaGarasi
        self.luasGarasi = luasGarasi
        self.daftarKendaraan = []

    def tambahKendaraan(self, kendaraan):
        # Menambahkan kendaraan ke dalam daftar kendaraan garasi
        self.daftarKendaraan.append(kendaraan)
        print("Kendaraan berhasil diparkir di garasi.")

    def display(self):
        # Menampilkan informasi tentang garasi dan daftar kendaraan yang ada di dalamnya
        print("Data Garasi Ratu")
        print("Nama Garasi        :", self.namaGarasi)
        print("Luas Garasi        :", self.luasGarasi)
        print("\nDaftar Kendaraan   :")
        for i, kendaraan in enumerate(self.daftarKendaraan, start=1):
            print("Kendaraan ke-", i)
            kendaraan.display()
            print()

    def getNamaGarasi(self):
        # Mengembalikan nama garasi
        return self.namaGarasi

    def setNamaGarasi(self, namaGarasi):
        # Mengatur nama garasi
        self.namaGarasi = namaGarasi

    def getLuasGarasi(self):
        # Mengembalikan luas garasi
        return self.luasGarasi

    def setLuasGarasi(self, luasGarasi):
        # Mengatur luas garasi
        self.luasGarasi = luasGarasi

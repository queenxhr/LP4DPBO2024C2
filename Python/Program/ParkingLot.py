class ParkingLot:
    def __init__(self, kapasitas=0):
        # Menginisialisasi kapasitas dan jumlah kendaraan saat ini di lapangan parkir
        self.kapasitas = kapasitas
        self.jumlahKendaraanSaatIni = 0
        self.daftarKendaraan = []

    def park(self, kendaraan):
        # Memeriksa apakah masih ada ruang kosong di lapangan parkir dan menambahkan kendaraan jika ada
        if self.jumlahKendaraanSaatIni < self.kapasitas:
            self.daftarKendaraan.append(kendaraan)
            self.jumlahKendaraanSaatIni += 1
            print("Kendaraan berhasil diparkir di Lapang Parkir Gymnasium.")
        else:
            print("Parkiran penuh.")

    def display(self):
        # Menampilkan informasi tentang lapangan parkir dan daftar kendaraan yang terparkir di dalamnya
        print("Data Parkiran di Lapang Parkiran Gymnasium")
        print("Jumlah kendaraan terparkir :", self.jumlahKendaraanSaatIni, "kendaraan")
        print("Kapasitas total            :", self.kapasitas, "kendaraan\n")
        print("Daftar kendaraan yang terparkir :")
        for i, kendaraan in enumerate(self.daftarKendaraan, start=1):
            print("Kendaraan ke-", i)
            kendaraan.display()
            print()

    def getKapasitas(self):
        # Mengembalikan kapasitas lapangan parkir
        return self.kapasitas

    def setKapasitas(self, kapasitas):
        # Mengatur kapasitas lapangan parkir
        self.kapasitas = kapasitas

    def getJumlahKendaraanSaatIni(self):
        # Mengembalikan jumlah kendaraan saat ini di lapangan parkir
        return self.jumlahKendaraanSaatIni

    def setJumlahKendaraanSaatIni(self, jumlahKendaraanSaatIni):
        # Mengatur jumlah kendaraan saat ini di lapangan parkir
        self.jumlahKendaraanSaatIni = jumlahKendaraanSaatIni

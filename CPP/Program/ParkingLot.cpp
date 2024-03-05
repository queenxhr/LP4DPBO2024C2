#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Vehicle.cpp"  // Mengikutsertakan definisi Vehicle untuk penggunaan pointer kendaraan

using namespace std;

class ParkingLot {
private:
    int kapasitas;  // Menyimpan kapasitas total parkiran
    int jumlahKendaraanSaatIni;  // Menyimpan jumlah kendaraan yang saat ini terparkir
    list<Vehicle*> daftarKendaraan;  // Menyimpan daftar pointer kendaraan yang terparkir
public:
    ParkingLot() {}  // Konstruktor default

    // Konstruktor dengan parameter
    ParkingLot(int kapasitas) : kapasitas(kapasitas), jumlahKendaraanSaatIni(0) {}

    // Getter untuk kapasitas
    int getKapasitas() const {
        return kapasitas;
    }

    // Setter untuk kapasitas
    void setKapasitas(int kapasitas) {
        this->kapasitas = kapasitas;
    }

    // Getter untuk jumlahKendaraanSaatIni
    int getJumlahKendaraanSaatIni() const {
        return jumlahKendaraanSaatIni;
    }

    // Setter untuk jumlahKendaraanSaatIni
    void setJumlahKendaraanSaatIni(int jumlahKendaraanSaatIni) {
        this->jumlahKendaraanSaatIni = jumlahKendaraanSaatIni;
    }

    // Metode untuk memarkir kendaraan
    void park(Vehicle* kendaraan) {
        if (jumlahKendaraanSaatIni < kapasitas) {  // Jika masih ada ruang kosong di parkiran
            daftarKendaraan.push_back(kendaraan);  // Memasukkan pointer kendaraan ke daftar
            jumlahKendaraanSaatIni++;  // Menambahkan jumlah kendaraan yang saat ini terparkir
            cout << "Kendaraan berhasil diparkir di Lapang Parkir Gymnasium." << endl;  // Menampilkan pesan sukses
        } else {
            cout << "Parkiran penuh." << endl;  // Menampilkan pesan parkiran penuh jika tidak ada ruang kosong
        }
    }

    // Metode untuk menampilkan informasi parkiran beserta daftar kendaraan yang terparkir di dalamnya
    void display() const {
        cout << "Data Parkiran di Lapang Parkiran Gymnasium" << endl;  // Menampilkan judul parkiran
        cout << "Jumlah kendaraan terparkir : " << jumlahKendaraanSaatIni << " kendaraan" << endl;  // Menampilkan jumlah kendaraan terparkir
        cout << "Kapasitas total            : " << kapasitas << " kendaraan" << endl << endl;  // Menampilkan kapasitas total parkiran dengan spasi tambahan
        cout << "Daftar kendaraan yang terparkir :" << endl;  // Menampilkan label daftar kendaraan terparkir
        int count = 1;  // Variabel untuk menghitung nomor kendaraan
        for (const auto& kendaraan : daftarKendaraan) {  // Iterasi melalui daftar kendaraan
            cout << "Kendaraan ke-" << count << endl;  // Menampilkan nomor kendaraan
            kendaraan->display();  // Memanggil metode display kendaraan
            cout << endl;  // Spasi kosong antara kendaraan
            count++;  // Menambahkan nomor kendaraan
        }
    }

    ~ParkingLot(){  // Destruktor
        // Tidak ada operasi khusus yang diperlukan dalam destruktur ini
    }
};

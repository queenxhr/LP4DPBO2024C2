#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Vehicle.cpp"  // Mengikutsertakan definisi Vehicle untuk penggunaan pointer kendaraan

using namespace std;

class Garage {
private:
    string namaGarasi;  // Menyimpan nama garasi
    string luasGarasi;  // Menyimpan luas garasi
    list<Vehicle*> daftarKendaraan;  // Menyimpan daftar pointer kendaraan
public:
    Garage() {}  // Konstruktor default

    // Konstruktor dengan parameter
    Garage(string namaGarasi, string luasGarasi) : namaGarasi(namaGarasi), luasGarasi(luasGarasi) {}

    // Getter untuk namaGarasi
    string getNamaGarasi() const {
        return namaGarasi;
    }

    // Setter untuk namaGarasi
    void setNamaGarasi(string namaGarasi) {
        this->namaGarasi = namaGarasi;
    }

    // Getter untuk luasGarasi
    string getLuasGarasi() const {
        return luasGarasi;
    }

    // Setter untuk luasGarasi
    void setLuasGarasi(string luasGarasi) {
        this->luasGarasi = luasGarasi;
    }

    // Metode untuk menambahkan kendaraan ke dalam garasi
    void tambahKendaraan(Vehicle* kendaraan) {
        daftarKendaraan.push_back(kendaraan);  // Menambahkan pointer kendaraan ke dalam daftar
        cout << "Kendaraan berhasil diparkir di garasi." << endl;  // Menampilkan pesan berhasil
    }

    // Metode untuk menampilkan informasi garasi beserta daftar kendaraan yang ada di dalamnya
    void display() const {
        cout << "Data Garasi Ratu" << endl;  // Menampilkan judul garasi
        cout << "Nama Garasi        : " << namaGarasi << endl;  // Menampilkan nama garasi
        cout << "Luas Garasi        : " << luasGarasi << endl << endl;  // Menampilkan luas garasi dengan spasi tambahan
        cout << "Daftar Kendaraan   :" << endl;  // Menampilkan label daftar kendaraan
        int count = 1;  // Variabel untuk menghitung nomor kendaraan
        for (const auto& kendaraan : daftarKendaraan) {  // Iterasi melalui daftar kendaraan
            cout << "Kendaraan ke-" << count << endl;  // Menampilkan nomor kendaraan
            kendaraan->display();  // Memanggil metode display kendaraan
            cout << endl;  // Spasi kosong antara kendaraan
            count++;  // Menambahkan nomor kendaraan
        }
    }

    ~Garage(){  // Destruktor
        // Tidak ada operasi khusus yang diperlukan dalam destruktur ini
    }
};

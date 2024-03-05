#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string jenisKendaraan; 
    string platNomor;  // Menyimpan nomor plat kendaraan
    string merk;  // Menyimpan merk kendaraan
    string tahunProduksi;  // Menyimpan tahun produksi kendaraan
    string warna;  // Menyimpan warna kendaraan
public:
    Vehicle() {}  // Konstruktor default

    // Konstruktor dengan parameter
    Vehicle(string jenisKendaraan, string platNomor, string merk, string tahunProduksi, string warna)
        : platNomor(platNomor), merk(merk), tahunProduksi(tahunProduksi), warna(warna) {}

    // Getter untuk jenisKendaraan
    string getjenisKendaraan() const {
        return jenisKendaraan;
    }

    // Setter untuk jenisKendaraan
    void setjenisKendaraan(string jenisKendaraan) {
        this->jenisKendaraan = jenisKendaraan;
    }

    // Getter untuk platNomor
    string getPlatNomor() const {
        return platNomor;
    }

    // Setter untuk platNomor
    void setPlatNomor(string platNomor) {
        this->platNomor = platNomor;
    }

    // Getter untuk merk
    string getMerk() const {
        return merk;
    }

    // Setter untuk merk
    void setMerk(string merk) {
        this->merk = merk;
    }

    // Getter untuk tahunProduksi
    string getTahunProduksi() const {
        return tahunProduksi;
    }

    // Setter untuk tahunProduksi
    void setTahunProduksi(string tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    // Getter untuk warna
    string getWarna() const {
        return warna;
    }

    // Setter untuk warna
    void setWarna(string warna) {
        this->warna = warna;
    }

    // Metode virtual untuk menampilkan informasi kendaraan
    virtual void display() const {
        cout << "Jenis Kendaraan    : " << jenisKendaraan << endl;  // Menampilkan nomor plat
        cout << "Plat Nomor         : " << platNomor << endl;  // Menampilkan nomor plat
        cout << "Merk               : " << merk << endl;  // Menampilkan merk kendaraan
        cout << "Tahun Produksi     : " << tahunProduksi << endl;  // Menampilkan tahun produksi
        cout << "Warna              : " << warna << endl;  // Menampilkan warna kendaraan
    }

    ~Vehicle(){  // Destruktor
        // Tidak ada operasi khusus yang diperlukan dalam destruktur ini
    }
};

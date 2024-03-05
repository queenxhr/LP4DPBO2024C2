#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"  // Mengikutsertakan definisi Vehicle untuk pewarisan

using namespace std;

class Car : public Vehicle {  // Mendefinisikan kelas Car yang merupakan turunan dari kelas Vehicle
private:
    int jumlahKursi;  // Menyimpan jumlah kursi dalam mobil
    int jumlahPintu;  // Menyimpan jumlah pintu dalam mobil
public:
    Car() {}  // Konstruktor default

    // Konstruktor dengan parameter
    Car(string jenisKendaraan, string platNomor, string merk, string tahunProduksi, string warna, int kursi, int pintu)
        : Vehicle(jenisKendaraan, platNomor, merk, tahunProduksi, warna), jumlahKursi(kursi), jumlahPintu(pintu) {}

    // Getter untuk jumlahKursi
    int getJumlahKursi() const {
        return jumlahKursi;
    }

    // Setter untuk jumlahKursi
    void setJumlahKursi(int jumlahKursi) {
        this->jumlahKursi = jumlahKursi;
    }

    // Getter untuk jumlahPintu
    int getJumlahPintu() const {
        return jumlahPintu;
    }

    // Setter untuk jumlahPintu
    void setJumlahPintu(int jumlahPintu) {
        this->jumlahPintu = jumlahPintu;
    }

    // Metode override untuk menampilkan informasi mobil
    void display() const override {
        Vehicle::display();  // Memanggil metode display dari kelas dasar
        cout << "Jumlah Kursi       : " << jumlahKursi << endl;  // Menampilkan jumlah kursi mobil
        cout << "Jumlah Pintu       : " << jumlahPintu << endl;  // Menampilkan jumlah pintu mobil
    }

    ~Car(){  // Destruktor
        // Tidak ada operasi khusus yang diperlukan dalam destruktur ini
    }
};

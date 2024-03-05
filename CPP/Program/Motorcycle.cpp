#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"  // Mengikutsertakan definisi Vehicle untuk pewarisan

using namespace std;

class Motorcycle : public Vehicle {  // Mendefinisikan kelas Motorcycle yang merupakan turunan dari kelas Vehicle
private:
    string jenisMotor;  // Menyimpan jenis motor
    double kapasitasTangki;  // Menyimpan kapasitas tangki bahan bakar
public:
    Motorcycle() {}  // Konstruktor default

    // Konstruktor dengan parameter
    Motorcycle(string jenisKendaraan,string platNomor, string merk, string tahunProduksi, string warna, string jenis, double tangki)
        : Vehicle(jenisKendaraan, platNomor, merk, tahunProduksi, warna), jenisMotor(jenis), kapasitasTangki(tangki) {}

    // Getter untuk jenisMotor
    string getJenisMotor() const {
        return jenisMotor;
    }

    // Setter untuk jenisMotor
    void setJenisMotor(string jenisMotor) {
        this->jenisMotor = jenisMotor;
    }

    // Getter untuk kapasitasTangki
    double getKapasitasTangki() const {
        return kapasitasTangki;
    }

    // Setter untuk kapasitasTangki
    void setKapasitasTangki(double kapasitasTangki) {
        this->kapasitasTangki = kapasitasTangki;
    }

    // Metode override untuk menampilkan informasi sepeda motor
    void display() const override {
        Vehicle::display();  // Memanggil metode display dari kelas dasar
        cout << "Jenis Motor        : " << jenisMotor << endl;  // Menampilkan jenis motor
        cout << "Kapasitas Tangki   : " << kapasitasTangki << " Liter" << endl;  // Menampilkan kapasitas tangki
    }

    ~Motorcycle(){  // Destruktor
        // Tidak ada operasi khusus yang diperlukan dalam destruktur ini
    }
};

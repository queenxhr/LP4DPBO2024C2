#include <iostream>  // Mengikutsertakan header iostream untuk input-output
#include <string>  // Mengikutsertakan header string untuk penggunaan string
#include "Vehicle.cpp"  // Mengikutsertakan definisi Vehicle untuk penggunaan kelas Vehicle
#include "Car.cpp"  // Mengikutsertakan definisi Car untuk penggunaan kelas Car
#include "Motorcycle.cpp"  // Mengikutsertakan definisi Motorcycle untuk penggunaan kelas Motorcycle
#include "Garage.cpp"  // Mengikutsertakan definisi Garage untuk penggunaan kelas Garage
#include "ParkingLot.cpp"  // Mengikutsertakan definisi ParkingLot untuk penggunaan kelas ParkingLot

using namespace std;  // Menggunakan namespace std untuk mempersingkat penulisan kode

int main() {  // Fungsi utama program
    Car myCar1;  // Membuat objek myCar1 dari kelas Car
    myCar1.setjenisKendaraan("Mobil");
    myCar1.setPlatNomor("B 1234 ABC");  // Mengatur nomor plat myCar1
    myCar1.setMerk("Toyota");  // Mengatur merk myCar1
    myCar1.setTahunProduksi("2020");  // Mengatur tahun produksi myCar1
    myCar1.setWarna("Silver");  // Mengatur warna myCar1
    myCar1.setJumlahKursi(5);  // Mengatur jumlah kursi myCar1
    myCar1.setJumlahPintu(4);  // Mengatur jumlah pintu myCar1

    Car myCar2;  // Membuat objek myCar2 dari kelas Car
    myCar2.setjenisKendaraan("Mobil");
    myCar2.setPlatNomor("D 1716 UQ");  // Mengatur nomor plat myCar2
    myCar2.setMerk("Nissan");  // Mengatur merk myCar2
    myCar2.setTahunProduksi("2011");  // Mengatur tahun produksi myCar2
    myCar2.setWarna("Abu");  // Mengatur warna myCar2
    myCar2.setJumlahKursi(4);  // Mengatur jumlah kursi myCar2
    myCar2.setJumlahPintu(4);  // Mengatur jumlah pintu myCar2

    Motorcycle myMotorcycle1;  // Membuat objek myMotorcycle1 dari kelas Motorcycle
    myMotorcycle1.setjenisKendaraan("Motor");
    myMotorcycle1.setPlatNomor("B 1234 UEJ");  // Mengatur nomor plat myMotorcycle1
    myMotorcycle1.setMerk("Honda");  // Mengatur merk myMotorcycle1
    myMotorcycle1.setTahunProduksi("2023");  // Mengatur tahun produksi myMotorcycle1
    myMotorcycle1.setWarna("Merah");  // Mengatur warna myMotorcycle1
    myMotorcycle1.setJenisMotor("Skuter");  // Mengatur jenis motor myMotorcycle1
    myMotorcycle1.setKapasitasTangki(5.5);  // Mengatur kapasitas tangki myMotorcycle1

    Motorcycle myMotorcycle2;  // Membuat objek myMotorcycle2 dari kelas Motorcycle
    myMotorcycle2.setjenisKendaraan("Motor");
    myMotorcycle2.setPlatNomor("D 1834 AJZ");  // Mengatur nomor plat myMotorcycle2
    myMotorcycle2.setMerk("Yamaha");  // Mengatur merk myMotorcycle2
    myMotorcycle2.setTahunProduksi("2023");  // Mengatur tahun produksi myMotorcycle2
    myMotorcycle2.setWarna("Ungu");  // Mengatur warna myMotorcycle2
    myMotorcycle2.setJenisMotor("Matic");  // Mengatur jenis motor myMotorcycle2
    myMotorcycle2.setKapasitasTangki(7);  // Mengatur kapasitas tangki myMotorcycle2

    Garage myGarage("Garage A", "100 m^2");  // Membuat objek myGarage dari kelas Garage dengan parameter nama dan luas garasi
    myGarage.tambahKendaraan(&myCar1);  // Memasukkan kendaraan myCar1 ke dalam garasi
    myGarage.tambahKendaraan(&myMotorcycle1);  // Memasukkan kendaraan myMotorcycle1 ke dalam garasi

    myGarage.display();  // Menampilkan informasi garasi

    ParkingLot myParkingLot;  // Membuat objek myParkingLot dari kelas ParkingLot
    myParkingLot.setKapasitas(500);  // Mengatur kapasitas total parkiran myParkingLot
    myParkingLot.setJumlahKendaraanSaatIni(0);  // Mengatur jumlah kendaraan saat ini di parkiran myParkingLot
    myParkingLot.park(&myCar2);  // Memarkir kendaraan myCar2 di parkiran
    myParkingLot.park(&myMotorcycle2);  // Memarkir kendaraan myMotorcycle2 di parkiran

    myParkingLot.display();  // Menampilkan informasi parkiran

    return 0;  // Mengakhiri program dengan nilai 0 (sukses)
}

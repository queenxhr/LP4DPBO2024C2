from Car import Car  # Mengimpor kelas Car dari file Car.py
from Motorcycle import Motorcycle  # Mengimpor kelas Motorcycle dari file Motorcycle.py
from Garage import Garage  # Mengimpor kelas Garage dari file Garage.py
from ParkingLot import ParkingLot  # Mengimpor kelas ParkingLot dari file ParkingLot.py

if __name__ == "__main__":
    # Membuat objek mobil pertama (myCar1)
    myCar1 = Car()
    myCar1.setJenisKendaraan("Mobil")
    myCar1.setPlatNomor("B 1234 ABC")
    myCar1.setMerk("Toyota")
    myCar1.setTahunProduksi("2020")
    myCar1.setWarna("Silver")
    myCar1.setJumlahKursi(5)
    myCar1.setJumlahPintu(4)

    # Membuat objek mobil kedua (myCar2)
    myCar2 = Car()
    myCar2.setJenisKendaraan("Mobil")
    myCar2.setPlatNomor("D 1716 UQ")
    myCar2.setMerk("Nissan")
    myCar2.setTahunProduksi("2011")
    myCar2.setWarna("Abu")
    myCar2.setJumlahKursi(4)
    myCar2.setJumlahPintu(4)

    # Membuat objek motor pertama (myMotorcycle1)
    myMotorcycle1 = Motorcycle()
    myMotorcycle1.setJenisKendaraan("Motor")
    myMotorcycle1.setPlatNomor("B 1234 UEJ")
    myMotorcycle1.setMerk("Honda")
    myMotorcycle1.setTahunProduksi("2023")
    myMotorcycle1.setWarna("Merah")
    myMotorcycle1.setJenisMotor("Skuter")
    myMotorcycle1.setKapasitasTangki(5.5)

    # Membuat objek motor kedua (myMotorcycle2)
    myMotorcycle2 = Motorcycle()
    myMotorcycle2.setJenisKendaraan("Motor")
    myMotorcycle2.setPlatNomor("D 1834 AJZ")
    myMotorcycle2.setMerk("Yamaha")
    myMotorcycle2.setTahunProduksi("2023")
    myMotorcycle2.setWarna("Ungu")
    myMotorcycle2.setJenisMotor("Matic")
    myMotorcycle2.setKapasitasTangki(7)

    # Membuat objek garasi (myGarage)
    myGarage = Garage("Garage A", "100 m^2")
    myGarage.tambahKendaraan(myCar1)  # Menambahkan mobil pertama ke garasi
    myGarage.tambahKendaraan(myMotorcycle1)  # Menambahkan motor pertama ke garasi

    myGarage.display()  # Menampilkan informasi garasi

    # Membuat objek lapangan parkir (myParkingLot)
    myParkingLot = ParkingLot(500)
    myParkingLot.park(myCar2)  # Memparkir mobil kedua di lapangan parkir
    myParkingLot.park(myMotorcycle2)  # Memparkir motor kedua di lapangan parkir

    myParkingLot.display()  # Menampilkan informasi lapangan parkir

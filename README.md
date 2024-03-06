# LP4DPBO2024C2

# Janji
Saya Ratu Syahirah Khairunnisa [2200978] 
mengerjakan Latihan Praktikum 4
dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan 
seperti yang telah dispesifikasikan. 
Aamiin

# Bahasa yang dibahas C++

# Desain Kelas (Diagram)
![Ratu Syahirah Khairunnisa_LP4DPBO2024C2 drawio](https://github.com/queenxhr/LP4DPBO2024C2/assets/135084798/77827443-53d5-465d-98dd-efcb69a58448)


# Desain Program :
Desain program yang dirancang terdiri dari 4 file yaitu Product.java, Clothing.java, Shirt.java, dan Main.java
Tentu, saya akan menjelaskan setiap kelas dan hubungan inheritance serta composition di antara mereka:

### 1. Kelas Vehicle:
- **Penjelasan**: Kelas ini merupakan kelas dasar yang merepresentasikan kendaraan. Memiliki atribut seperti plat nomor, merk, tahun produksi, dan warna. Kelas ini juga menyediakan metode untuk mengakses dan mengubah atribut kendaraan serta metode untuk menampilkan detail kendaraan.
- **Hubungan Inheritance**: Tidak memiliki hubungan inheritance karena ini adalah kelas dasar.
- **Hubungan Composition**: Tidak memiliki hubungan composition.

### 2. Kelas Car:
- **Penjelasan**: Kelas ini adalah turunan dari kelas Vehicle yang mewakili mobil. Selain atribut dari Vehicle, Car memiliki atribut tambahan seperti jumlah kursi dan jumlah pintu. Juga memiliki metode display yang override metode display dari Vehicle untuk menampilkan informasi spesifik tentang mobil.
- **Hubungan Inheritance**: Car mewarisi sifat dan perilaku dari kelas Vehicle.
- **Hubungan Composition**: Tidak memiliki hubungan composition.

### 3. Kelas Motorcycle:
- **Penjelasan**: Kelas ini juga turunan dari kelas Vehicle yang mewakili sepeda motor. Memiliki atribut tambahan seperti jenis motor dan kapasitas tangki. Seperti Car, Motorcycle juga memiliki metode display yang override metode display dari Vehicle.
- **Hubungan Inheritance**: Motorcycle juga mewarisi sifat dan perilaku dari kelas Vehicle.
- **Hubungan Composition**: Tidak memiliki hubungan composition.

### 4. Kelas Garage:
- **Penjelasan**: Kelas ini mewakili garasi tempat kendaraan disimpan. Setiap garasi memiliki nama dan luas, serta daftar kendaraan yang disimpan di dalamnya. Menyediakan metode untuk menambahkan kendaraan ke dalam garasi dan menampilkan informasi tentang garasi serta daftar kendaraan di dalamnya.
- **Hubungan Inheritance**: Tidak memiliki hubungan inheritance.
- **Hubungan Composition**: Kelas Garage memiliki composition dengan kelas Vehicle, karena memiliki daftar kendaraan (objek Vehicle) yang disimpan di dalamnya.

### 5. Kelas ParkingLot:
- **Penjelasan**: Kelas ini mewakili tempat parkir dengan kapasitas tertentu. Tempat parkir memiliki kapasitas total dan jumlah kendaraan saat ini yang terparkir di dalamnya. Menyediakan metode untuk memarkir kendaraan ke dalam tempat parkir dan menampilkan informasi tentang tempat parkir serta daftar kendaraan yang terparkir di dalamnya.
- **Hubungan Inheritance**: Tidak memiliki hubungan inheritance.
- **Hubungan Composition**: Kelas ParkingLot memiliki composition dengan kelas Vehicle, karena memiliki daftar kendaraan (objek Vehicle) yang terparkir di dalamnya.

Dengan demikian, hubungan inheritance terjadi antara kelas Car dan Motorcycle dengan kelas Vehicle, sedangkan hubungan composition terjadi antara kelas Garage dan ParkingLot dengan kelas Vehicle. Hal ini membantu dalam memodelkan hierarki dan struktur hubungan antar objek dalam program.
# Penjelasan Alur Program:

1. **Membuat Kendaraan**: 
   - Membuat kendaraan seperti mobil atau sepeda motor dengan atribut seperti plat nomor, merk, tahun produksi, dan warna.
   - Setiap kendaraan dibuat menggunakan kelas Car atau Motorcycle, tergantung jenisnya.

2. **Memasukkan Kendaraan ke Tempat Parkir**:
   - Kendaraan dimasukkan ke dalam tempat parkir menggunakan metode park.
   - Jika tempat parkir penuh, program memberi tahu bahwa tidak ada tempat kosong.

3. **Memasukkan Kendaraan ke Garasi**:
   - Kendaraan juga bisa dimasukkan ke dalam garasi menggunakan metode tambahKendaraan.
   - Ini memungkinkan pemilik kendaraan untuk menyimpan kendaraan di dalam garasi.

4. **Menampilkan Informasi**:
   - Setelah semua kendaraan dimasukkan, program menampilkan informasi tentang tempat parkir dan garasi.
   - Ini termasuk jumlah kendaraan yang terparkir, kapasitas tempat parkir atau luas garasi, dan detail kendaraan yang terparkir di dalamnya.

# Dokumentasi
<img width="571" alt="CODE CPP" src="https://github.com/queenxhr/LP4DPBO2024C2/assets/135084798/432c74e9-b4b3-4185-9421-000f795a3c3a">



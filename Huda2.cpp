#include <iostream>
#include <string>
using namespace std;

class Mobil {
private:
    string Merek;
    int Tahun;
    double Kecepatan;  // Kecepatan dalam km/jam

public:
    // Konstruktor untuk inisialisasi atribut
    Mobil(string Merek, int Tahun, double Kecepatan) : Merek(Merek), Tahun(Tahun), Kecepatan(Kecepatan) {}

    // Method untuk menghitung waktu yang dibutuhkan untuk menempuh jarak tertentu
    double calculateTime(double jarak) {
        return jarak / Kecepatan;
    }
};

int main() {
    // Membuat objek mobil
    Mobil myCar("Toyota", 2020, 60);  // Kecepatan dalam km/jam

    // Menghitung waktu yang dibutuhkan untuk menempuh jarak 100 km dengan kecepatan 60 km/jam
    double jarak = 100;  // Jarak dalam km
    double waktu = myCar.calculateTime(jarak);

    // Menampilkan hasil perhitungan waktu
    cout << "Mobil " << myCar.calculateTime(jarak) << " memerlukan waktu " << waktu << " jam untuk menempuh jarak " << jarak << " km." << std::endl;

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

class Murid {
private:
    string nama;
    int umur;
    double nilai;

public:
    // Konstruktor untuk inisialisasi atribut
    Murid(string nama, int umur, double nilai) : nama(nama), umur(umur), nilai(nilai) {}

    // Method untuk menampilkan informasi lengkap mahasiswa
    void displayInfo() {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << " tahun" << endl;
        cout << "Nilai: " << nilai << endl;
    }
};

int main() {
    // Membuat objek mahasiswa
    Murid murid1("Huda", 20, 95.5);

    // Menampilkan informasi lengkap mahasiswa
    murid1.displayInfo();

    return 0;
}

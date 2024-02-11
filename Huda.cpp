#include <iostream>
#include <string>
using namespace std;

class Buku {
private:
    string Judul;
    string Penulis;
    int Tahun;

public:
    // Konstruktor untuk inisialisasi atribut
    Buku(string judul, string penulis, int tahun) : Judul(judul), Penulis(penulis), Tahun(tahun) {}

    // Method untuk menampilkan informasi lengkap buku
    void displayInfo() {
        cout << "Judul: " << Judul << endl;
        cout << "Penulis: " << Penulis << endl;
        cout << "Tahun Terbit: " << Tahun << endl;
    }

    // Method untuk menentukan apakah buku tersebut "kuno" atau tidak
    bool isAntique() {
        return Tahun < 2000;
    }
};

int main() {
    // Membuat objek buku
    Buku huda("memancing", "huda", 1999);

    // Menampilkan informasi lengkap buku
    huda.displayInfo();

    // Menentukan apakah buku tersebut "kuno" atau tidak
    if (huda.isAntique()) {
        cout << "Status: Kuno" << endl;
    } else {
        cout << "Status: Tidak Kuno" << endl;
    }

    return 0;
}

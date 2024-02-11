#include <iostream>
#include <string>

using namespace std;

class Karyawan {
private:
    string nama;
    double gajiperjam;
    double jumlahjamkerja;

public:
    // Konstruktor untuk inisialisasi atribut
    Karyawan(string nama, double gajiperjam, double jumlahjamkerja) : nama(nama), gajiperjam(gajiperjam), jumlahjamkerja(jumlahjamkerja) {}

    // Method untuk menghitung total gaji
    double totalgaji() {
        return gajiperjam * jumlahjamkerja;
    }
};

int main() {
    // Membuat objek karyawan
    Karyawan huda("huda", 20000.0, 20.0);  // Gaji per jam: 15.0, Jam kerja: 40.0

    // Menampilkan total gaji
    cout << "Total gaji untuk karyawan " << huda.totalgaji() << endl;

    return 0;
}

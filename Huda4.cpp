#include <iostream>
#include <string>

using namespace std;

class AkunBank {
private:
    string pemilik;
    double saldo;

public:
    // Konstruktor untuk inisialisasi atribut
    AkunBank(string pemilik, double saldoAwal) : pemilik(pemilik), saldo(saldoAwal) {}

    // Metode untuk melakukan penyetoran uang
    void deposit(double jumlah) {
        saldo += jumlah;  // Menggunakan variabel yang benar, yaitu "jumlah"
        cout << "Berhasil melakukan penyetoran. Saldo sekarang: " << saldo << endl;
    }

    // Metode untuk melakukan penarikan uang
    void withdraw(double jumlah) {
        if (jumlah <= saldo) {  // Menggunakan variabel yang benar, yaitu "jumlah"
            saldo -= jumlah;
            cout << "Berhasil melakukan penarikan. Saldo sekarang: " << saldo << endl;
        } else {
            cout << "Penarikan gagal. Saldo tidak mencukupi." << endl;
        }
    }

    // Metode untuk menampilkan informasi saldo terkini
    void displayBalance() {
        cout << "Saldo terkini untuk pemilik " << pemilik << ": " << saldo << endl;  // Menggunakan variabel yang benar, yaitu "pemilik" dan "saldo"
    }
};

int main() {
    // Membuat objek rekening bank
    AkunBank huda("huda", 200000.0);

    // Melakukan beberapa penyetoran dan penarikan uang
    huda.deposit(500000.0);
    huda.withdraw(200000.0);
    huda.withdraw(100000.0);  // Penarikan gagal karena saldo tidak mencukupi

    // Menampilkan saldo terkini
    huda.displayBalance();

    return 0;
}

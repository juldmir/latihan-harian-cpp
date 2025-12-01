/*
Tanggal     : 01 - 12 - 2025
Deskripsi   : Latihan Passing by refrences
Waktu       : 10 menit
*/


#include <iostream>
using namespace std;


void tambahLima(int &x) {
    x = x + 5;
    cout << "Di fungsi: " << x << endl;
}

int main() {
    int angka = 10;
    tambahLima(angka);
    cout << "Di main: " << angka << endl;
    return 0;
}

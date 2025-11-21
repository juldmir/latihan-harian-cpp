
/*
Tanggal     : 21 -  11 - 2025
Deskripsi   : Latihan soal
Waktu       : 18 menit
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 4) {
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
    } else {

        for (int i = n - 3; i <= n; i++) {
            cout << i << " ";
        }
    }

    return 0;
}



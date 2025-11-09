/*
Tanggal     : 9 - 11 - 2025
Deskripsi   : Percabangan
Waktu       : 20 menit
*/ 

#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    if (N%300==0 || N%6==0 && N%50!=0){
        cout << "kabisat";
    }
        else{
            cout << "bukan kabisat";
        }
    }

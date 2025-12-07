/*
Tanggal     : 07 - 12 - 2025
Deskripsi   : Latihan 
Waktu       : 39 menit
*/ 

#include <iostream>
using namespace std;

struct Titik{
int absis;
int ordinat;
};

void inputKordinat(Titik &titikA, Titik &titikB){
        cout << " Masukkan titik A :" ;
        cin >> titikA.absis >> titikA.ordinat;
        cout << "Masukkan titik B :" ;
        cin >> titikB.absis >> titikB.ordinat;
    }

void nilaiTengah(Titik &T, Titik titikA,Titik titikB){
        T.absis = (titikA.absis + titikB.absis) /2;
        T.ordinat = (titikA.ordinat + titikB.ordinat) /2;
        cout << "Nilai Tengah =" << "("<< T.absis << "," << T.ordinat << ")";
    }

int main(){
    Titik titikA,
     titikB, T;
    inputKordinat(titikA,titikB);
    nilaiTengah(T,titikA,titikB);
}
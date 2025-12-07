/*
Tanggal     : 07 - 12 - 2025
Deskripsi   : Latihan 
Waktu       : 34 menit
*/ 

#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int npm;
    int nilai;
};
void tampilMahasiswa(Mahasiswa mhs[], int n){
    for(int i=0;i<n; i++){
        cout << "Data Mahasiswa ke-" << i+1 << endl;
        cout << " nama :"; cin >> mhs[i].nama;
        cout << " npm : "; cin >> mhs[i].npm;
        cout << " nilai : "; cin >> mhs[i].nilai;
    }
}

double hitungRata(Mahasiswa mhs[], int n){
    int total =0;
    for(int i=0;i<n;i++){
        total += mhs[i].nilai;
    }
    return(double)total/n;
}

int nilaiTertinggi(Mahasiswa mhs[], int n){
    int nilaiMax = mhs[0].nilai;
    for(int i=1 ;i <n ; i++){
        if(mhs[i].nilai > nilaiMax)
        nilaiMax = mhs[i].nilai;
}
return nilaiMax;
}

void tampilNilai(Mahasiswa mhs[], int n, int nilaiMax){
    for(int i=0;i<n;i++){
        if(mhs[i].nilai == nilaiMax){
            cout << "Mahasiswa dengan nilai tertinggi:" << endl;
            cout << "nama:" << " " << mhs[i].nama << endl;
            cout << "npm:" << " " << mhs[i].npm << endl;
            cout << "nilai" << " " << mhs[i].nilai << endl;
        }

    }
}

int main(){
    int n;
    cin >> n;
    Mahasiswa mhs[n];
    tampilMahasiswa(mhs,n);
    double rata = hitungRata(mhs,n);
    cout << "Rata-Rata = " << " " << rata << endl;
    int nilaiMax = nilaiTertinggi(mhs,n);
    tampilNilai(mhs, n, nilaiMax);

}
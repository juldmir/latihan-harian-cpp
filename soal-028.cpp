/*
Tanggal     : 07 - 12 - 2025
Deskripsi   : Latihan 
Waktu       : 60 menit
*/ 
#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int npm;
    int nilai;
};

void tampilMahasiswa(Mahasiswa mhs[], int n){
    for(int i=0;i,i<n;i++){
        cout << "Data Mahasiswa ke-" << i+1 << endl;
        cout << "Masukkan nama mahasiswa:" ;
        cin >> mhs[i].nama;
        cout << "Masukkan NPM mahasiswa:";
        cin >> mhs[i].npm;
        cout << "Masukkan nilai mahasiswa:";
        cin >> mhs[i].nilai;
    }
}

double nilaiRataRata(Mahasiswa mhs[], int n){
    int total =0;
    for(int i=0;i<n;i++){
        total += mhs[i].nilai;
    }
    return (double)total/n;
}

int nilaiTertinggi(Mahasiswa mhs[], int n){
    int nilaiMax = mhs[0].nilai;
     for(int i=1;i<n;i++){
     if( mhs[i].nilai > nilaiMax)
     nilaiMax = mhs[i].nilai;
}
    return nilaiMax;
}

void tampilNilaiTertinggi(Mahasiswa mhs[], int n, int nilaiMax){
    cout << "Mahasiswa dengan nilai tertinggi: " << endl;
    for(int i=0;i<n;i++){
        if(mhs[i].nilai == nilaiMax){
        cout << "Nama :" << " " << mhs[i].nama << endl;
        cout << "NPM :" << " " << mhs[i].npm << endl;
        cout << "Nilai :" << " " << mhs[i].nilai << endl;
    }
}
}

int main(){
    int n;
    cin >> n;
    Mahasiswa mhs[n];
    tampilMahasiswa(mhs, n);
    double rata=nilaiRataRata(mhs,n);
    cout << "Nilai rata-rata =" << rata << endl;
    int nilaiMax = nilaiTertinggi(mhs,n);
    tampilNilaiTertinggi(mhs,n,nilaiMax);

}
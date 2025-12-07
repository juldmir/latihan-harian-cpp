/*
Tanggal     : 07 - 12 - 2025
Deskripsi   : Latihan 
Waktu       : 30 menit
*/ 
#include <iostream>
using namespace std;


struct Mahasiswa{
string nama;
int NPM;
float nilai;
};

void inputMahasiswa(Mahasiswa mhs[], int n){
for(int i=0;i<n;i++){
cout << " Masukkan nama mahasiswa : ";
cin >> mhs[i].nama;
cout << "Masukkan no NPM :";
cin >> mhs[i].NPM;
cout << "Masukkan nilai mahasiswa :" ;
cin >> mhs[i].nilai;
}
}

void cetakMahasiswa(Mahasiswa mhs[], int n){
    for(int i=0;i<n;i++){
    cout << " Nilai mahasiswa diatas 80 ;" << endl;
    if (mhs[i].nilai >= 80)
        cout << "Nama :" << " " << mhs[i].nama << "NPM :" << " " << mhs[i].NPM << "Nilai :" << mhs[i].nilai<< " " << endl;
    else 
    cout << " Nilai mahasiswa kurang dari 80" << endl;
         cout << "Nama :" << " " << mhs[i].nama << "NPM :" << " " << mhs[i].NPM << "Nilai :" << mhs[i].nilai<< " " << endl;
    }
}

int main(){
    int j;
    cin >> j;
    Mahasiswa mhs[j];
    inputMahasiswa(mhs,j);
    cetakMahasiswa(mhs,j);

}
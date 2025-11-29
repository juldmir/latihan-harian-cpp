/*
Tanggal     : 29 - 11 - 2025
Deskripsi   : Latihan membuat project menggunakan searching
Waktu       : 50 menit
*/


#include <iostream>
using namespace std;

void cariData(string id[], string nama[], string key, string jenis, int n){
    bool ketemu = false;

    for(int i=0;i<n;i++){
        if(jenis == "nama"){
            if(nama[i].find(key) != -1){
                cout << " ID : " << id[i] << endl << "Nama : " << nama[i] << endl;
                ketemu =true;
            }
        }
        else if (jenis == "id"){
            if (id[i] == key){
                 cout << " ID : " << id[i] << endl << "Nama : " << nama[i] << endl;
                ketemu =true;
            }
        }
        if(!ketemu){
            cout << "Data Tidak Ditemukan!" << endl;
        }
    }
}
int main (){
    string id[1000];
    string nama[1000];
    int n;
    
    string jenis, key;
    cout << "Masukkan bedasarkan Nama / ID Pasien" << endl;
    getline (cin, jenis);

    cout << "Masukkan nama / ID pasien" << endl;
    getline (cin, key);

    cariData(id, nama, key, jenis, n);

    return 0;

}

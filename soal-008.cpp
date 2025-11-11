
/*
Tanggal     : 11 - 11 - 2025
Deskripsi   : Latihan Soal
Waktu       : 20 menit
*/ 
#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
        float berat;
        berat = sum/n;
        cout << fixed<< setprecision(2)<< berat;
   


}
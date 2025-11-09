/*
Tanggal     : 9 - 11 - 2025
Deskripsi   : Percabangan
Waktu       : 10 menit
*/ 
#include <iostream>
using namespace std;

int main(){
    string n;
    cin >> n;
     if(n[0]=='-'){
       n= n.substr(1);
     }
    if (n.length()==4)
    cout << "Ya";
    else
        cout << "tidak";
}

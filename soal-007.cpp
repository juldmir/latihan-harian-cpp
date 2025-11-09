/*
Tanggal     : 9 - 11 - 2025
Deskripsi   : Percabangan
Waktu       : 8 menit
*/   

#include <iostream>
using namespace std;

int main(){
int n;
cin >> n;
if(n%5==0 && n%3==0){
cout << "FizzBuzz";
}
else if(n%5 == 0)
cout << "Buzz";
else if(n&3==0)
cout <<"Fizz";
else{
    cout << n;

}
}
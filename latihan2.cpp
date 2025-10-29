#include <iostream>
using namespace std;

void bubbleSort( int n, int angka[]){
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            if(angka[j]>angka[j+1]){
            int temp= angka[j];
            angka[j]=angka[j+1];
            angka[j+1]=temp;
        }

    }
}
}
int main(){
    int n;
    cout << "Masukkan jumlah angka :";
    cin >> n;
    int angka[n];
    for (int i=0;i<n;i++){
        cin >> angka[i];
    }
    bubbleSort(n, angka);
    cout << "Data setelah diurutkan :";
    for (int i=0;i<n;i++){
    cout << angka[i] << " ";
    }
}

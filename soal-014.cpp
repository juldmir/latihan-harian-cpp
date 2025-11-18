/*
Tanggal     : 17 - 11 - 2025
Deskripsi   : Merge Sort
Waktu       : 15 menit
*/ 
#include <iostream>
using namespace std;

void gabung(int arr[], int kiri, int tengah, int kanan){
    int temp[1000];
    int i= kiri;
    int j= tengah+1;
    int k=0;
    while(i<= tengah && j<= kanan){
        if (arr[i]> arr[j])
        temp [k++]= arr[i++];
        else 
        temp[k++]= arr [j++];
    while( i <=tengah)
    temp[k++] = arr[i++];
    while (j<=kanan)
    temp [k++]= arr[j++];
    for(int x=0;x<k;x++)
        arr[kiri+x]=temp [x];
    }
}

void urut(int arr[], int kiri, int kanan){
    if(kiri >=kanan)return;
    int tengah =(kiri+kanan)/2;
    urut (arr, kiri, tengah);
    urut (arr, tengah+1, kanan);
    gabung (arr, kiri, tengah, kanan);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr[i];
    }
    urut(arr, 0, n-1);
    for (int i=0;i< n;i++){
        cout << arr[i] << " ";
    }

}

/*
Tanggal     : 05 - 11 - 2025
Deskripsi   : Heap sort
Waktu       : 40 menit
*/ 



#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i) {
    int indexTerbesar = i;       
    int anakKiri = 2*i + 1;     
    int anakKanan = 2*i + 2;     

    if(anakKiri < n && arr[anakKiri] > arr[indexTerbesar])
        indexTerbesar = anakKiri;

    if(anakKanan < n && arr[anakKanan] > arr[indexTerbesar])
        indexTerbesar = anakKanan;

 
    if(indexTerbesar != i) {
        swap(arr[i], arr[indexTerbesar]);  
        heapify(arr, n, indexTerbesar);  
    }
}


void heapSort(int arr[], int n) {
   
    for(int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);


    for(int i = n-1; i >= 0; i--) {
        swap(arr[0], arr[i]);  
        heapify(arr, i, 0);     
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Sebelum diurutkan:\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    heapSort(arr, n);

    cout << "Setelah diurutkan:\n";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
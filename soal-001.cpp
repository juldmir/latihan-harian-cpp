/*
Tanggal     : 03 - 11 - 2025
Deskripsi   : Count sort
Waktu       : 40 menit
*/ 

#include <iostream>
using namespace std;

void countSort(int arr[], int n){
    int max=arr [0];
    for (int i=1;i<n;i++){
        if(arr[i] > max)
        max = arr [i];
    }
    for(int i=0;i<n;i++){
    int count[max + 1] = {0};
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int idx = 0;
    for (int i = 0; i <= max; i++) {
        while (count[i] > 0) {
            arr[idx++] = i;
            count[i]--;
        }
    }
}
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countSort(arr, n);

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

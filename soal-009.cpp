#include <iostream>
using namespace std;


int warna(string warna){
    if(warna== "Merah") return 1;
    else if (warna =="Kuning") return 2;
    else return 3;
}
    int main(){
        int n;
        cin >> n;
        string arr [n];
    for (int i=0;i<n;i++){
        cin >> arr [i];

    }
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if(warna(arr[i]) > warna(arr[j])){
            swap(arr[i], arr [j]);
        }
    }
    }
    for (int i=0;i<n;i++){
        cout << arr [i];
    }
    }
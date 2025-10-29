#include <iostream>
using namespace std;

void selectionSort (int n,int arr[]){
    for (int i=0;i<n-1;i++){
        int pos= i;
        for (int j=i+1;j<n;j++){
            if(arr[j]>arr[pos]){
                pos=j;

            }
        }
    int temp= arr[i];
    arr [i]= arr[pos];
    arr [pos]= temp;
}
    }
  
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin >> arr [i];
    }
    selectionSort(n, arr);
        for (int i=0;i<n;i++){
            cout << arr[i] << " ";
        }
    }


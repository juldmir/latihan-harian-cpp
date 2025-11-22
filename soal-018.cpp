#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string biner = "";

    while (N > 0) {
        biner = char((N % 2) + '0') + biner; 
        N /= 2;
    }

    cout << biner << endl;
    return 0;
}
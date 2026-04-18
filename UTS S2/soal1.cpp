#include <iostream>
using namespace std;

bool pangkatdua(int n) {
    if (n <= 0) return false;
    
    return (n & (n - 1)) == 0;
}

int main(){
    int angka;

    cout << "Kode: ";
    cin >> angka;

    if (pangkatdua(angka)) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }

    return 0;
}

// n & (n - 1)
// n = 1: 0 0 0 1, n-1 = 0; 0 0 0 0
// 0 0 0 1
// 0 0 0 0
// -------- &
// 0 0 0 0 == 0
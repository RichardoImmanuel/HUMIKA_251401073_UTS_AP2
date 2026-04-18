#include <iostream>
#include <string>
using namespace std;

int main() {
    string biner;
    cout << "Input kode biner : ";
    cin >> biner;

    bool valid = true;

    for (char c : biner){
        if (c != '1' && c != '0'){
            valid = false;
            break;
        }
    }

    if (!valid || biner.empty()){
        cout << "Pesan rusak!" << endl;
    } else {
        int desimal = 0;
        int basis = 1;

        for (int i = biner.length() - 1; i >= 0; i--) {
            if (biner[i] == '1') {
                desimal += basis;
            }
            basis = basis * 2;
        }

        cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;
    }
}
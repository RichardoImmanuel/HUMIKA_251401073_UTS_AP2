#include <iostream>
#include <string>

using namespace std;

int main() {
    string kata;
    int jumlahVokal = 0;

    cout << "Masukkan Mantra: ";
    cin >> kata;

    for (char c : kata) {
        char huruf = tolower(c);

        if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
            jumlahVokal++;
        }
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
    string rakBuku;
    cout << "Masukkan daftarjudul buku: ";
    getline(cin, rakBuku); 

    int jumlahBuku = 0;
    int i = 0;
    bool satuJudul = false;

    while (i < rakBuku.length()) {
        if (rakBuku[i] != ' ') {
            if (!satuJudul) {
                jumlahBuku++;
                satuJudul = true; 
            }
        } else {
           satuJudul = false;
        }
        i++;
    }
    cout << "Jumlah judul buku: " << jumlahBuku << endl;

    return 0;
}
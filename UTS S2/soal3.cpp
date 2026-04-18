#include <iostream>
using namespace std;

int main(){
    int nalpro, npds, nso;
    char nim[20], nama[20];
    float rata;

    cout << "Nama Mahasiswa: ";cin >> nama;
    cout << "NIM: " ;cin >> nim;
    cout << "Nilai Mata Kuliah:" << endl;
    cout << " Algortima dan Pemrograman: " ;cin >> nalpro;
    cout << " Probabilitas dan Statistika: " ;cin >> npds;
    cout << " Sistem Operasi: " ;cin >> nso;

    cout << "" << endl;

    cout << "Algoritma dan Pemrograman: " << (nalpro >= 60 ? "Lulus" : "Tidak Lulus. Silahkan Ulangi di Tahun Depan!") << endl;
    cout << "Probabilitas dan Statistika: " << (npds >= 60 ? "Lulus" : "Tidak Lulus. Silahkan Ulangi di Tahun Depan!") << endl;
    cout << "Sistem Operasi: " << (nso >= 60 ? "Lulus" : "Tidak Lulus. Silahkan Ulangi di Tahun Depan!") << endl;

    rata = (nalpro + npds + nso) / 3.0;
    cout << "Nilai Rata-rata Semester ini: " << rata << endl;
}
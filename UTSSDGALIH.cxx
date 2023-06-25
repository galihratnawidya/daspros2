#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> jumlahMahasiswa;
    
     int nim[jumlahMahasiswa];
    float nilaiTugas[jumlahMahasiswa];
    float nilaiUTS[jumlahMahasiswa];
    float nilaiUAS[jumlahMahasiswa];
    float nilaiAkhir[jumlahMahasiswa];

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Masukkan NIM mahasiswa ke-" << i + 1 << ": ";
        cin >> nim[i];
        cout << "Masukkan nilai tugas mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiTugas[i];
        cout << "Masukkan nilai UTS mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiUTS[i];
        cout << "Masukkan nilai UAS mahasiswa ke-" << i + 1 << ": ";
        cin >> nilaiUAS[i];

     
        nilaiAkhir[i] = nilaiTugas[i] * 0.2 + nilaiUTS[i] * 0.25 + nilaiUAS[i] * 0.3;
    }

   
    cout << "=====================================" << endl;
    cout << "No" <<setw(4)<<"NIM"<<setw(6)<<"TUGAS"<<setw(8)<<"UTS"<<setw(9)<<"UAS"<<setw(10)<< "Akhir" << endl;
    cout << "=====================================" << endl;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << i + 1 << setw(4)<<nim[i] <<setw(6)<< nilaiTugas[i]<<setw(8) << nilaiUTS[i]<<setw(9) << nilaiUAS[i]<<setw(10)<< nilaiAkhir[i] << endl;
    }

    cout << "=====================================" << endl;

    return 0;
}

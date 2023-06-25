//Galih Ratna widyaningtias
//2213030089/1B

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

int hitung_umur(int tahun_lahir) {
    time_t t = time(NULL);
    tm* sekarang = localtime(&t);
    int tahun_sekarang = sekarang->tm_year + 1900;
    int umur = tahun_sekarang - tahun_lahir;
    return umur;
}

int baca_data_dari_file(const std::string& nama_file) {
    std::ifstream file(nama_file);
    if (file.is_open()) {
        std::string tahun_str;
        std::getline(file, tahun_str);
        file.close();
        try {
            int tahun_lahir = std::stoi(tahun_str);
            return tahun_lahir;
        } catch (const std::invalid_argument&) {
            std::cout << "Data yang terdapat dalam file tidak valid." << std::endl;
        }
    } else {
        std::cout << "File tidak ditemukan." << std::endl;
    }
    return 0;
}

int main() {
    std::string nama_file = "data_tahun_lahir.txt";
    int tahun_lahir = baca_data_dari_file(nama_file);
    if (tahun_lahir != 0) {
        int umur = hitung_umur(tahun_lahir);
        std::cout << "Umur: " << umur << " tahun" << std::endl;
    }

    return 0;
}
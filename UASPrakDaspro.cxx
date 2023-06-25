#include <iostream>
#include <string>
using namespace std;

class Hotel {
    string name;
    int roomNumber;
    bool isBooked;

public:
    Hotel(string hotelName, int number) {
        name = hotelName;
        roomNumber = number;
        isBooked = false;
    }

    void bookRoom() {
        if (isBooked) {
            cout << "Kamar sudah dipesan." << endl;
        } else {
            isBooked = true;
            cout << "Kamar berhasil dipesan." << endl;
        }
    }

    void cancelBooking() {
        if (isBooked) {
            isBooked = false;
            cout << "Pemesanan kamar berhasil dibatalkan." << endl;
        } else {
            cout << "Tidak ada pemesanan untuk kamar ini." << endl;
        }
    }

    void displayStatus() {
        cout << "Nama Hotel: " << name << endl;
        cout << "Nomor Kamar: " << roomNumber << endl;
        if (isBooked) {
            cout << "Status: Kamar sedang dipesan." << endl;
        } else {
            cout << "Status: Kamar tersedia." << endl;
        }
    }
};

int main() {
    Hotel hotel("Hotel Indah", 101);

    hotel.displayStatus(); // Menampilkan status kamar awal

    hotel.bookRoom(); // Memesan kamar
    hotel.displayStatus(); // Menampilkan status kamar setelah pemesanan

    hotel.bookRoom(); // Mencoba memesan kamar lagi
    hotel.displayStatus(); // Menampilkan status kamar setelah pemesanan ulang

    hotel.cancelBooking(); // Membatalkan pemesanan kamar
    hotel.displayStatus(); // Menampilkan status kamar setelah pembatalan

    return 0;
}
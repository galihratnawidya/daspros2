#include <iostream>
#define mx 5 // variabel penentu panjang antrian

using namespace std;

// Inisialisasi awal
char queue[mx]; // Inisialisasi array queue
int front = -1; // Variabel penunjuk posisi depan
int back = -1; // Variabel penunjuk posisi belakang

// Fungsi untuk mengecek apakah queue kosong
bool isEmpty() {
    return (front == -1 && back == -1);
}

// Fungsi untuk mengecek apakah queue penuh
bool isFull() {
    return (back == mx - 1);
}

// Fungsi untuk melakukan operasi enqueue (memasukkan elemen ke dalam queue)
void enqueue(char data) {
    if (isFull()) {
        cout << "Queue penuh!" << endl;
    } else {
        if (isEmpty()) {
            front = 0;
        }
        back++;
        queue[back] = data;
        cout << "Elemen " << data << " berhasil dimasukkan ke dalam queue" << endl;
    }
}

// Fungsi untuk melakukan operasi dequeue (mengeluarkan elemen dari queue)
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Elemen " << queue[front] << " berhasil dikeluarkan dari queue" << endl;
        if (front == back) {
            front = -1;
            back = -1;
        } else {
            front++;
        }
    }
}

// Fungsi untuk mencetak isi queue
void printQueue() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Isi Queue: ";
        for (int i = front; i <= back; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    char huruf;
    short pil;
    do {
        system("cls"); // Untuk membersihkan layar
        cout << "======================================" << endl;
        cout << "          PROGRAM STACK & QUEUE        " << endl;
        cout << "======================================" << endl;
        cout << "1. Push (Enqueue)" << endl;
        cout << "2. Pop (Dequeue)" << endl;
        cout << "3. Cetak Stack/Queue" << endl;
        cout << "4. Clear" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> pil;

        switch (pil) {
            case 1:
                cout << "Masukkan karakter: ";
                cin >> huruf;
                enqueue(huruf);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                printQueue();
                break;
            case 4:
                front = -1;
                back = -1;
                cout << "Queue direset" << endl;
                break;
            default:
                break;
        }
        system("pause");
    } while (pil != 5);
    return 0;
}
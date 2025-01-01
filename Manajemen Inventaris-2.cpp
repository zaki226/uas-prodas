#include <iostream>
#include <string>
using namespace std;

struct Barang {
    string nama;
    int jumlah;
};

void tambahBarang(Barang &barang, int jumlahTambah) {
    barang.jumlah += jumlahTambah;
    cout << "Jumlah barang '" << barang.nama << "' setelah penambahan: " << barang.jumlah << endl;
}

void kurangiBarang(Barang &barang, int jumlahKurang) {
    if (barang.jumlah >= jumlahKurang) {
        barang.jumlah -= jumlahKurang;
        cout << "Jumlah barang '" << barang.nama << "' setelah pengurangan: " << barang.jumlah << endl;
    } else {
        cout << "Stok tidak cukup!" << endl;
    }
}

void tampilkanInventaris(const Barang &barang) {
    cout << "Nama Barang: " << barang.nama << endl;
    cout << "Jumlah Stok: " << barang.jumlah << endl;
}

int main() {
    Barang barang1 = {"Hoodie", 200};
    Barang barang2 = {"Kemeja", 100};
    
    int pilihan, jumlah;
    
    while (true) {
        cout << "\nMenu Inventaris Pabrik\n";
        cout << "1. Tampilkan Inventaris\n";
        cout << "2. Tambah Barang\n";
        cout << "3. Kurangi Barang\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        
        if (pilihan == 1) {
            tampilkanInventaris(barang1);
            tampilkanInventaris(barang2);
        } else if (pilihan == 2) {
            cout << "Masukkan jumlah yang ingin ditambah: ";
            cin >> jumlah;
            tambahBarang(barang1, jumlah);
        } else if (pilihan == 3) {
            cout << "Masukkan jumlah yang ingin dikurangi: ";
            cin >> jumlah;
            kurangiBarang(barang2, jumlah);
        } else if (pilihan == 4) {
            break;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }
    }
    return 0;
}


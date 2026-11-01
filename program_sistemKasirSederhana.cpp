#include <iostream>
#include <string>
using namespace std;


int main() {
	string namaBarang;
    double harga, subtotal, diskonBelanja = 0, diskonMember = 0, totalBayar;
    int jumlah;
    char statusMember;
    
    cout << "===================================" << endl;
    cout << "=== SISTEM KASIR WARUNG PAK OWO ===" << endl;
    cout << "===================================" << endl;
    cout << "Masukkan Nama Barang  : ";
    getline(cin, namaBarang);
    cout << "Masukkan Harga Barang (Rp): ";
    cin >> harga;
    cout << "Masukkan Jumlah Barang   : ";
    cin >> jumlah;

    subtotal = harga * jumlah;

    if (subtotal >= 100000) {
        diskonBelanja = 0.10 * subtotal;
    } else {
    	diskonBelanja = 0.0; 
	}

    cout << "Apakah pelanggan Member? (Y/T): ";
    cin >> statusMember;

    if (statusMember == 'Y' || statusMember == 'y') {
        diskonMember = 0.05 * subtotal;
    }

    totalBayar = subtotal - diskonBelanja - diskonMember;

    cout << "\n==================================" << endl;
    cout << "======== BUKTI PEMBAYARAN ========" << endl;
    cout << "==================================" << endl;
    cout << "Nama barang     : " << namaBarang << endl;
    cout << "Harga satuan    : Rp " << harga << endl;
    cout << "Jumlah          : " << jumlah << endl;
    cout << "----------------------------------" << endl;
    cout << "Subtotal        : Rp " << subtotal << endl;
    cout << "Diskon Belanja  : Rp " << diskonBelanja << endl;
    cout << "Diskon Member   : Rp " << diskonMember << endl;
    cout << "----------------------------------" << endl;
    cout << "TOTAL BAYAR     : Rp " << totalBayar << endl;
    cout << "==================================" << endl;
    cout << "== Terimakasih Telah Berbelanja ==" << endl;
    cout << "==================================" << endl;

    return 0;
}
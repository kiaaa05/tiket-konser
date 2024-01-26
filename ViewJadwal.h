#include "..//model/ModelJadwal.h"


#include <iostream>
#include <string>

using namespace std;

void vAddJadwal() {
    int jumlahJadwal;

    cout << endl;
    cout << "Berapa jadwal yang ingin anda tambahkan: ";
    cin >> jumlahJadwal;

    for (int i = 0; i < jumlahJadwal; ++i) {
        string inpkode, inpnama, inptanggal, inptempat, inptiket, inpharga;
        cout << endl;
        cout << "=========================================" << endl;
        cout << "=            TAMBAH KONSER              =" << endl;
        cout << "=========================================" << endl;
        cout << "Kode Konser    : ";
        cin >> inpkode;
        cin.ignore();

        cout << "Nama Konser    : ";
        getline(cin, inpnama);

        cout << "Tanggal Konser : ";
        cin >> inptanggal;
        cin.ignore();

        cout << "Tempat Konser  : ";
        getline(cin, inptempat);

        cout << "Jumlah Tiket   : ";
        cin >> inptiket;

        cout << "Harga Konser   : Rp. ";
        cin >> inpharga;
        mAddJadwal(inpkode, inpnama, inptanggal, inptempat, inptiket, inpharga);
    }
}


void vSearchJadwal(){
    string inpkode;
    cout << "=========================================" << endl;
    cout << "=          CARI JADWAL KONSER           =" << endl;
    cout << "=========================================" << endl;
    cout << "Kode Konser : ";
    cin >> inpkode;
    mSearchJadwal(inpkode);
}


#include "view/viewUser.h"
#include "view/viewJadwal.h"
#include "view/viewTransaksi.h"
#include <iostream>

using namespace std;

double infoSaldoAwal=0;
int saldoDitambahkan;


void menuUtama() {
    int pilihan2;
    do {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "=                MENU UTAMA             =" << endl;
        cout << "=========================================" << endl;
        cout << "=  1. Tambahkan jadwal Konser           =" << endl;
        cout << "=  2. Lihat Jadwal Konser               =" << endl;
        cout << "=  3. Harmony Wallet                    =" << endl;
        cout << "=  4. Transaksi                         =" << endl;
        cout << "=  5. Keluar                            =" << endl;
        cout << "=========================================" << endl;
        cout << "Pilih menu : ";
        cin >> pilihan2;
        switch (pilihan2) {
            case 1:
                vAddJadwal();
                cout << endl;
                cout << "Apakah anda ingin menambahkan jadwal lagi ? (y/n) : ";
                char pilihan3;
                cin >> pilihan3;
                if (pilihan3 == 'y' || pilihan3 == 'Y') {
                    vAddJadwal();
                } else if (pilihan3 == 'n' || pilihan3 == 'N') {
                    cout << "Keluar dari menu tambahkan konser" << endl;
                } else {
                }
                break;

            case 2:
                cout << endl;
                cout << "=========================================" << endl;
                cout << "=            JADWAL KONSER              =" << endl;
                cout << "=========================================" << endl;
                cout << "1. Lihat Semua Jadwal Konser" << endl;
                cout << "2. Cari Jadwal Konser" << endl;
                cout << "3. Keluar" << endl;
                cout << "=========================================" << endl;
                int pilihan4;
                cout << "Pilihan : ";
                cin >> pilihan4;
                if (pilihan4 == 1) {
                    mDaftarJadwal();
                } else if (pilihan4 == 2) {
                    vSearchJadwal();
                } else if (pilihan4 == 3) {
                    cout << "Keluar dari menu utama" << endl;
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;


            case 3:
                cout << endl;
                cout << "=========================================" << endl;
                cout << "=            Harmony Wallet             =" << endl;
                cout << "=========================================" << endl;
                cout << "1. Lihat Saldo" << endl;
                cout << "2. Keluar" << endl;
                cout << "=========================================" << endl;
                int pilihan5;
                cout << "Pilihan : ";
                cin >> pilihan5;
                if (pilihan5 == 1) {
                    harmonyWallet(infoSaldoAwal, saldoDitambahkan);
                } else if (pilihan5 == 2) {
                    cout << "Keluar dari menu utama" << endl;
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }
                break;


            case 4:
                cout << endl;
                cout << "=========================================" << endl;
                cout << "=            TRANSAKSI                  =" << endl;
                cout << "=========================================" << endl;
                cout << "1. Beli Tiket" << endl;
                cout << "2. Keluar" << endl;
                cout << "=========================================" << endl;
                int pilihan6;
                cout << "Pilihan : ";
                cin >> pilihan6;

                if (pilihan6 == 1) {
                    if (vLoginTransaksi()) {
                        bool jikaBenarLanjutkan = true;
                        while (jikaBenarLanjutkan) {
                            jikaBenarLanjutkan = mViewJadwal();
                            if (jikaBenarLanjutkan) {
                                jikaBenarLanjutkan = transaksiewallet(infoSaldoAwal, saldoDitambahkan);
                            }
                            if (jikaBenarLanjutkan) {
                                menuUtama();
                                break;
                            }
                        }
                    }
                } else if (pilihan6 == 2) {
                    cout << "Kembali menu utama" << endl;
                } else {
                    cout << "Pilihan tidak tersedia" << endl;
                }

                break;
            case 5:
                cout << "Anda keluar dari menu utama sekarang";
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }

    } while (pilihan2 != 5);
}




int main() {
    int pilihan1;

    do {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "=          Welcome to Harmonytic        =" << endl;
        cout << "=========================================" << endl;
        cout << "1. Menu Register"                          << endl;
        cout << "2. Menu Login"                             << endl;
        cout << "3. Exit"                                   << endl;
        cout << "=========================================" << endl;
        cout << "Pilihan : ";
        cin >> pilihan1;

        switch (pilihan1) {
            case 1: {
                int pilihan2;
                do {
                    cout << endl;
                    cout << "=========================================" << endl;
                    cout << "                REGISTER                 " << endl;
                    cout << "=========================================" << endl;
                    cout << "1. Register"                               << endl;
                    cout << "2. Tampilkan user"                         << endl;
                    cout << "3. Cari user"                              << endl;
                    cout << "4. Hapus user"                             << endl;
                    cout << "5. Keluar"                                 << endl;
                    cout << "=========================================" << endl;
                    cout << "Pilihan : ";
                    cin >> pilihan2;

                    switch (pilihan2) {
                        case 1:
                            vAddUser();
                            break;
                        case 2:
                            vViewUser();
                            break;
                        case 3:
                            vSearchUser();
                            break;
                        case 4:
                            vDeleteUser();
                            break;
                        case 5:
                            cout << "Keluar dari register" << endl;
                            break;
                        default:
                            cout << "Pilihan tidak tersedia" << endl;
                            break;
                    }
                } while (pilihan2 != 5);
                break;
            }
            case 2:
                while (true) {
                    if (vLoginUser()) {
                        menuUtama();
                        break;
                    } else {
                    }
                }
                break;
            case 3:
                cout << "Keluar dari program" << endl;
                break;
            default:
                cout << "Pilihan tidak tersedia" << endl;
                break;
        }
    } while (pilihan1 != 3);

    return 0;
}
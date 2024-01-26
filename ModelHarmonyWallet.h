#include <iostream>
#include <string>

using namespace std;

bool topUpSaldo(double &infoSaldoAwal, int &saldoDitambahkan) {
    int maxSaldo = 1000000000;
    int minSaldo = 10000;

    do {
        cout << endl;
        cout << "=========================================" << endl;
        cout << "=              TOP UP SALDO             =" << endl;
        cout << "=========================================" << endl;
        cout << "Masukkan jumlah saldo yang ingin ditambahkan ";
        cout << "\nRp. ";
        cin >> saldoDitambahkan;

        if (saldoDitambahkan < minSaldo) {
            cout << "MINIMAL RP.10.000" << endl;
        } else if (saldoDitambahkan > maxSaldo) {
            cout << "MAKSIMUM RP.1.000.000.000" << endl;
        } else {
            infoSaldoAwal += saldoDitambahkan;
            return true;
        }
    } while (true);
}

bool harmonyWallet(double &infoSaldoAwal, int &saldoDitambahkan) {
    cout << endl;
    cout << "=========================================" << endl;
    cout << "=              INFO SALDO               =" << endl;
    cout << "=========================================" << endl;
    cout << "Saldo Anda : Rp. " << infoSaldoAwal << endl;
    cout << "=========================================" << endl;
    cout << endl;
    cout << "Apakah anda ingin melakukan top up saldo ? " << endl;
    cout << "1. Ya" << endl;
    cout << "2. Tidak" << endl;
    cout << "Pilih menu : ";
    int pilihan;
    cin >> pilihan;

    if (pilihan == 1) {
        topUpSaldo(infoSaldoAwal, saldoDitambahkan);

        cout << "Top Up Saldo lagi ?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Pilih menu : ";
        cin >> pilihan;
        cout << endl;
        if (pilihan == 1) {
            cout << "Anda melakukan top up lagi " << endl;
            topUpSaldo(infoSaldoAwal, saldoDitambahkan);
        } else if (pilihan == 2) {
            cout << "Kembali ke menu sebelumnya" << endl;
        } else {
            cout << "Pilihan tidak valid" << endl;
        }

        return true;

    } else if (pilihan == 2) {
        cout << "Kembali ke menu sebelumnya" << endl;
        return false;
    } else {
        cout << "Pilihan tidak valid" << endl;
        return false;
    }
}

bool transaksiewallet(double &infoSaldoAwal, int &saldoDitambahkan) {
    cout << "=========================================" << endl;
    cout << "=            TRANSAKSI WALLET           =" << endl;
    cout << "=========================================" << endl;
    cout << "Saldo anda : Rp." << infoSaldoAwal << endl;

    cout << "Masukkan jumlah uang untuk pembelian: ";
    cout << "Rp.";
    int jumlah_pembelian;
    cin >> jumlah_pembelian;

    if (jumlah_pembelian <= infoSaldoAwal) {
        infoSaldoAwal -= jumlah_pembelian;
        saldoDitambahkan = infoSaldoAwal;

        cout << "Pembelian berhasil" << endl;
        cout << "Jumlah uang yang dibayarkan : Rp. " << jumlah_pembelian << endl;
        cout << "Sisa saldo                  : Rp. " << infoSaldoAwal << endl;
        cout << endl;
        return true;
    } else {
        cout << "Saldo tidak cukup" << endl;
        cout << "Mohon melakukan Top Up Harmony Wallet anda" << endl;
        cout << endl;
        return false;
    }

}
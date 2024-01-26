#include "../database/DatabaseJadwal.h"
#include "../model/ModelHarmonyWallet.h"
#include <iostream>
#include <string>

using namespace std;

void mAddJadwal(string inpkode, string inpnama, string inptanggal, string inptempat,string inptiket, string inpharga){
    kodeKonser[totalKonser] = inpkode;
    namaKonser[totalKonser] = inpnama;
    tanggalKonser[totalKonser] = inptanggal;
    tempatKonser[totalKonser] = inptempat;
    jumlahTiketKonser[totalKonser] = inptiket;
    hargaKonser[totalKonser] = inpharga;
    totalKonser++;

}


bool mViewJadwal() {
    for (int i = 0; i < totalKonser; i++) {
        cout << endl;
        cout << "Apakah anda ingin memilih tiket?" << endl;
        cout << "1. Ya" << endl;
        cout << "2. Tidak" << endl;
        cout << "Pilih menu: ";
        int pilihan_pembayaran1;
        cin >> pilihan_pembayaran1;

        if (pilihan_pembayaran1 == 1) {
            cout << "=========================================" << endl;
            cout << "=                TRANSAKSI              =" << endl;
            cout << "=========================================" << endl;
            cout << "Masukkan kode konser yang akan dibeli: ";
            string kode_konser_input;
            cin >> kode_konser_input;

            for (int j = 0; j < totalKonser; ++j) {
                if (kode_konser_input == kodeKonser[j]) {
                    cout << endl;
                    cout << "=========================================" << endl;
                    cout << "=            JADWAL KONSER              =" << endl;
                    cout << "=========================================" << endl;
                    cout << "Kode Konser    : " << kodeKonser[j] << endl;
                    cout << "Nama Konser    : " << namaKonser[j] << endl;
                    cout << "Tanggal Konser : " << tanggalKonser[j] << endl;
                    cout << "Tempat Konser  : " << tempatKonser[j] << endl;
                    cout << "Jumlah Tiket   : " << jumlahTiketKonser[j] << endl;
                    cout << "Harga Konser   : Rp. " << hargaKonser[j] << endl;
                    cout << "=========================================" << endl;
                    cout << endl;
                    int batasTiket = stoi(jumlahTiketKonser[j]);
                    cout << "Pilih jumlah tiket yang akan dibeli: ";
                    int jumlahTiketInput;
                    cin >> jumlahTiketInput;

                    if (jumlahTiketInput <= batasTiket) {
                        int tax = 5000 * jumlahTiketInput;
                        cout << endl;
                        cout << "Anda membeli " << jumlahTiketInput << " tiket" << endl;
                        cout << "Tax Rp. 5000/tiket  : Rp " << tax << endl;
                        int totalPembayaran;
                        totalPembayaran = jumlahTiketInput * stoi(hargaKonser[j]);
                        cout << "Total pembayaran    : Rp. " << totalPembayaran + tax << endl;
                        cout << endl;
                        cout << "=========================================" << endl;
                        cout << "Pilih metode pembayaran:" << endl;
                        cout << "1. Harmony Wallet" << endl;
                        cout << "2. Kembali" << endl;
                        cout << "=========================================" << endl;
                        cout << "Pilih menu: ";
                        int pilihan_pembayaran2;
                        cin >> pilihan_pembayaran2;

                        if (pilihan_pembayaran2 == 1) {
                            cout << endl;
                            cout << "Anda akan membayar dengan Harmony Wallet" << endl;
                            return true;
                        } else {
                            cout << "Anda kembali ke menu utama" << endl;
                            return false;
                        }
                    } else if (jumlahTiketInput > batasTiket) {
                        cout << "Maaf, tiket anda melebihi jumlah tiket yang tersedia" << endl;
                        return false;
                    }
                }
            }
            cout << "Konser tidak ditemukan" << endl;
            break;
        } else if (pilihan_pembayaran1 == 2) {
            cout << "Anda keluar" << endl;
            break;
        }
    }
    return false;
}





bool mSearchJadwal(const string& inpkode){
    for(int i=0; i<totalKonser; i++){
        if(kodeKonser[i] == inpkode){
            cout << "=========================================" << endl;
            cout << "=            HASIL PENCARIAN            =" << endl;
            cout << "=========================================" << endl;
            cout << "Kode Konser    : " << kodeKonser[i]        << endl;
            cout << "Nama Konser    : " << namaKonser[i]        << endl;
            cout << "Tanggal Konser : " << tanggalKonser[i]     << endl;
            cout << "Tempat Konser  : " << tempatKonser[i]      << endl;
            cout << "Jumlah Tiket   : " << jumlahTiketKonser[i] << endl;
            cout << "Harga Konser   : Rp." << hargaKonser[i]    << endl;
            cout << "=========================================" << endl;
            cout << endl;
            cout << "Konser berhasil ditemukan"<<endl;
            return true;
        }
    }
    cout << "Konser tidak ditemukan" << endl;
    return false;
}


bool mDaftarJadwal() {
    cout << endl;
    cout << "Menampilkan Daftar Konser" << endl;
    for (int i = 0; i < totalKonser; i++) {
        cout << "=========================================" << endl;
        cout << "=            DAFTAR KONSER              =" << endl;
        cout << "=========================================" << endl;
        cout << "Kode Konser    : " << kodeKonser[i]        << endl;
        cout << "Nama Konser    : " << namaKonser[i]        << endl;
        cout << "Tanggal Konser : " << tanggalKonser[i]     << endl;
        cout << "Tempat Konser  : " << tempatKonser[i]      << endl;
        cout << "Jumlah Tiket   : " << jumlahTiketKonser[i] << endl;
        cout << "Harga Konser   : Rp." << hargaKonser[i]    << endl;
        cout << "=========================================" << endl;
        cout << endl;
    }
    return true;
}

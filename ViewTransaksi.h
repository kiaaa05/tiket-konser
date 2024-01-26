#include "../model/ModelTransaksi.h"

#include <iostream>
#include <string>

using namespace std;

bool vLoginTransaksi() {
    string inpusername;
    string inppassword;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "              LOGIN TRANSAKSI            " << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "Masukkan password : ";
    cin >> inppassword;
    cout << "=========================================" << endl;
    cout << endl;
    return mLoginTransaksi(inpusername,inppassword);
}

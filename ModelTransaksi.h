#include <iostream>
#include <string>

using namespace std;

bool mLoginTransaksi(const string &inpusername,const string &inppassword) {
    int i = 0;

    while (i < totalUser) {
        if (inpusername == usernameUser[i] && inppassword == passwordUser[i] ) {
            cout << "Login berhasil" << endl;
            return true;
        } else if (inpusername != usernameUser[i] && inppassword != passwordUser[i]) {
            cout << "Login gagal" << endl;
            cout << "Mohon periksa unsername & password anda" << endl;
            return false;
        }else if (inpusername != usernameUser[i]) {
            cout << "Login gagal" << endl;
            cout << "Mohon periksa unsername anda" << endl;
            return false;
        }else if (inppassword != passwordUser[i]) {
            cout << "Login gagal" << endl;
            cout << "Mohon periksa password anda" << endl;
            return false;
        } else {
            i++;
        }
    }

    cout << "Mohon periksa username Anda" << endl;
    return false;
}

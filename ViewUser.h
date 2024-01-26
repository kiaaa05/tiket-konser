#include "../model/ModelUser.h"

#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

void vAddUser() {
    string inpusername, inppassword, inpemail;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "            TAMBAHKAN USER           " << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "Masukkan password : ";
    cin >> inppassword;
    cout << "Masukkan email    : ";
    cin >> inpemail;
    cout << "=========================================" << endl;
    mAddUser(inpusername, inppassword, inpemail);

}



bool vLoginUser() {
    string inpusername, inppassword;

    cout << endl;
    cout << "=========================================" << endl;
    cout << "            LOGIN USER              " << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "Masukkan password : ";
    cin >> inppassword;
    cout << "=========================================" << endl;
    cout << endl;
    if (inpusername == usernameUser[0] && inppassword == passwordUser[0]) {
        cout << "Login berhasil" << endl;
        return true;
    } else if (inpusername != usernameUser[0] && inppassword != passwordUser[0]) {
        cout << "Login gagal" << endl;
        cout << "Mohon periksa unsername & password anda" << endl;
        return false;
    }else if (inpusername != usernameUser[0]) {
        cout << "Login gagal" << endl;
        cout << "Mohon periksa unsername anda" << endl;
        return false;
    }else if (inppassword != passwordUser[0]) {
        cout << "Login gagal" << endl;
        cout << "Mohon periksa password anda" << endl;
        return false;
    }
    return true;
}


void vViewUser(){
    mViewUser();
}

void vSearchUser(){
    string inpusername;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "            SEARCH USER             "      << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "=========================================" << endl;
    cout << endl;
    mSearchUser(inpusername);
}

void vDeleteUser(){
    string inpusername;
    cout << endl;
    cout << "=========================================" << endl;
    cout << "           DELETE USER               "     << endl;
    cout << "=========================================" << endl;
    cout << "Masukkan username : ";
    cin >> inpusername;
    cout << "=========================================" << endl;
    cout << endl;
    mDeleteUser(inpusername);
}





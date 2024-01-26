#include "../database/DatabaseUser.h"
#include <string>
#include <iostream>

using namespace std;

void mAddUser(string inpusername, string inppassword, string inpemail) {
    usernameUser[totalUser] = inpusername;
    passwordUser[totalUser] = inppassword;
    emailUser[totalUser] = inpemail;
    totalUser++;
}



void mViewUser () {
    cout << "=========================================" << endl;
    cout << "=              DATA USER                 " << endl;
    cout << "=========================================" << endl;
    cout << "jumlah  : " << totalUser << " User "       << endl;
    cout << "username\tPassword\temail" << endl;
    cout << "=========================================" << endl;
    for (int i = 0; i < totalUser; i++) {
        cout << usernameUser[i] << "\t\t" << passwordUser[i] << "\t" << emailUser[i] << endl;
    }
    cout << "=========================================" << endl;
}

void mSearchUser (string inpusername) {
    bool found = false;
    int i = 0;
    while (i < totalUser && !found) {
        if (usernameUser[i] == inpusername) {
            found = true;
        } else {
            i++;
        }
    }
    if (found) {
        cout << "data ditemukan" << endl;
        cout << "username\tPassword\temail" << endl;
        cout << usernameUser[i] << "\t\t" << passwordUser[i] << "\t" << emailUser[i] << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }
}

void mDeleteUser (string inpusername) {
    bool found = false;
    int i = 0;
    while (i < totalUser && !found) {
        if (usernameUser[i] == inpusername) {
            found = true;
        } else {
            i++;
        }
    }
    if (found) {
        for (int j = i; j < totalUser; j++) {
            usernameUser[j] = usernameUser[j+1];
            passwordUser[j] = passwordUser[j+1];
            emailUser[j] = emailUser[j+1];
        }
        totalUser--;
        cout << "data berhasil dihapus" << endl;
    } else {
        cout << "data tidak ditemukan" << endl;
    }
}


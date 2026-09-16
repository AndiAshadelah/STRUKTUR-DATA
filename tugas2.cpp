#include <iostream>
using namespace std;

int main () {
    string nama;
    int nim;

    cout << "Masukkan Nama : ";
    getline(cin, nama);
    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Nama : " << nama << endl;
    cout << "NIM : " << nim << endl;

    return 0;
}
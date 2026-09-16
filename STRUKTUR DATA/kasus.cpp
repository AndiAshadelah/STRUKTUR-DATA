#include<iostream>
using namespace std;

void persegi(int sisi) {
    for (int i = 0; i < sisi; i++) {
        for (int j = 0; j < sisi; j++) {
            cout << "* ";
        }
        cout << endl;
    }

}

int main () {
    int sisi;
    cout << "Masukkan sisi persegi: ";
    cin >> sisi;
    persegi(sisi);
    return 0;
}






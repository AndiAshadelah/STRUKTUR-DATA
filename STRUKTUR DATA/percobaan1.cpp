#include <iostream>
using namespace std;

int hitungBiayaParkir (int jam) {
    int biaya = 0;
    if (jam <= 1) {
        biaya = jam * 3000;
    } else {
        biaya = 1 * 3000 + (jam - 1) * 2000;
    }
    return biaya;
}

int main() {
    int jam;
    cout << "Lama Parkir (dalam jam): ";
    cin >> jam;
    int biaya = hitungBiayaParkir(jam);
    cout << "Biaya parkir: Rp " << biaya << endl;
    return 0;
}




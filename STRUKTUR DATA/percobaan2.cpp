#include <iostream>
using namespace std;

float hitungKWh(float uang)
{
    const float admin = 2500;
    const float PPJ = 0.03;
    float KWH = 1444.70;

    float total = uang - admin;
    float pajak = total * PPJ;
    float biaya = (total - pajak) / KWH;
    return biaya;
}

int main()
{
    float uang;
    cout << "Masukkan jumlah uang: ";
    cin >> uang;
    float kwh = hitungKWh(uang);
    cout << "Jumlah KWH yang dapat dibeli: " << kwh << endl;
    return 0;
}


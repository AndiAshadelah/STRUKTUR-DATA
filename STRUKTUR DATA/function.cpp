#include <iostream>
using namespace std;

int add (int a, int b) {
    return a + b;
}
int subtract (int a, int b) {
    return a - b;
}

int main () {
    int a = 100 , b = 78;
    cout << "Add " << add(a, b) << endl;
    cout << "Subtract " << subtract(a, b) << endl;
}
#include <iostream>
#include <string>

using namespace std;

template <typename T>
void cetakInfoPointer(string namaTipe, T* ptr) {
    cout << "=== " << namaTipe << " ===" << endl;
    // Di-cast ke (void*) agar tipe char tidak tercetak sebagai teks, melainkan sebagai alamat memori
    cout << "Alamat              : " << (void*)ptr << endl;
    cout << "Alamat + 1          : " << (void*)(ptr + 1) << endl;
    cout << "Selisih alamat      : " << (char*)(ptr + 1) - (char*)ptr << " byte" << endl;
    cout << "Ukuran via sizeof   : " << sizeof(T) << " byte\n" << endl;
}

int main() {
    char c = 'A';
    int x = 10;
    float f = 3.14f;
    double d = 3.14159;
    string s = "Hello";
    
    cetakInfoPointer("char", &c);
    cetakInfoPointer("int", &x);
    cetakInfoPointer("float", &f);
    cetakInfoPointer("double", &d);
    cetakInfoPointer("string", &s);

    return 0;
}
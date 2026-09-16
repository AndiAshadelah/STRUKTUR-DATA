#include <iostream> 
using namespace std; 
int main() { 
int b = 4; 
int *a = &b; 
cout << "Alamat b : " << a << endl; 
cout << "Nilai b melalui pointer : " << *a << endl; 
*a = 9;   
cout << "Nilai b setelah diubah pointer: " << b << endl; 
return 0; 
}
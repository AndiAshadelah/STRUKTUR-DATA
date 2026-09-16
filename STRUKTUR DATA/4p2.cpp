#include <iostream> 
using namespace std; 
int main() { 
int *a = new int;    
*a = 10; 
cout << "Alamat a: " << a << endl; 
cout << "Nilai a: " << *a << endl; 
delete a;            
cout << "Memori a sudah dibebaskan." << endl; 
return 0; 
} 
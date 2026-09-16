#include <iostream> 
using namespace std; 
int main() { 
int x[]={8, 2, 9, 4, 6, 3, 1}; 
int *p = x;   
cout << "Elemen pertama: " << *p << endl;   
p++;                                        
cout << "Elemen kedua: " << *p << endl;     
cout << "Elemen keempat: " << *(p + 2) << endl;  
return 0; 
}
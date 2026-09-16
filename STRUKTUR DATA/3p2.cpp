#include <iostream> 
using namespace std; 
void swap(int* x, int* y) { 
int tmp = *x; 
*x = *y; 
*y = tmp; 
} 
int main() { 
int a = 3; 
int b = 4; 
cout << "Sebelum swap: a = " << a << ", b = " << b << endl; 
swap(&a, &b); 
cout << "Sesudah swap: a = " << a << ", b = " << b << endl; 
return 0; 
} 
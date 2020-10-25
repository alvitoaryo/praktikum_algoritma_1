#include <iostream>
using namespace std;
int main()
{
int a = 0, b = 0, x = 0, y = 35;
cout << "Nilai awal adalah";
cout << "\na : " << a;
cout << "\nb : " << b;
cout << "\nx : " << x;
cout << "\ny : " << y;
cout << endl;
a = 9, b = 7, y = x = a + b;
cout << "\nNilai setelah masing-masing variabel di ubah menjadi";
cout << "\na : "<< a;
cout << "\nb : " << b;
cout << "\nx : " << x;
cout << "\ny : " << y;
return 0;
}

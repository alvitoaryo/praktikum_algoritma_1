#include <iostream>
using namespace std;

main()
{
	char nama[50];
	cout << "nama panajang :";
	cin.getline (nama,50);
	
	int nim;
	cout << "nim :";
	cin >> nim;
	cout << endl;
	
	float frh,celcius,kelvin,reamure;
	cout << " input the temperature in celcius : ";
	cin >> celcius;
	frh = (9.0/5) * (celcius + 32);
	kelvin = (celcius + 273);
	reamure = (4.0/5) * (celcius);
	cout << " the temperature in celcius : " << celcius << endl;
	cout << " the temperature in fahrenheit : " << frh << endl;
	cout << " the temperature in kelvin : " << kelvin << endl;
	cout << " the temperature in reamur : " << reamure << endl;
	cout << endl;
	return 0;
	
	
	
	
	


}

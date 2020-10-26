#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	char nama[80],plug[90];
	int nim;
	cout<<"masukan  :"<<endl;
	cout<<"Nama     :";
	cin.getline(nama,sizeof(nama));
	cout<<"Plug     :";
	cin.getline(plug,sizeof(plug));
	cout<<"Nim      :";
	cin>> nim;cout<<endl;
	cout<<"inilah data anda :"<<endl;
	cout<<"Nama     :"<<nama<<endl;
	cout<<"Nim      :"<<nim<<endl;
	cout<<"plug     :"<<plug<<endl;
	cout<<endl;
	cout<<"dalam bentuk tabel :"<<endl;
	cout<<"====================================================="<<endl;
	cout<<"nim"<<setw(11)<<"|"<<setw(10)<<"nama"<<setw(10)<<"|"<<setw(10)<<"Plug"<<setw(8)<<endl;
	cout<<"====================================================="<<endl;
	cout<<nim<<setw(5)<<"|"<<setw(10)<<nama<<"|"<<setw(10)<<plug<<setw(10)<<endl;
	
}

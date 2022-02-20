#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
   char nama [25];
   char alamat [35];
   cout<<"nama anda: ";
   cin.getline (nama, sizeof (nama) );

    cout<< "alamat   : ";
    cin.getline (alamat, sizeof (alamat) );

    cout <<"nama =  "<<nama <<endl;
    cout <<"alamat = "<<alamat << endl;
    
    int jumlahAlamat = 0;
    int jumlahNama = 0;
    for (int i = 0; nama[i]; i++) {
    	jumlahNama++;
	}
    for (int i = 0; alamat[i]; i++) {
    	jumlahAlamat++;
	}
	cout<<"Jumlah karakter nama : "<<jumlahNama<<" dan karakter Alamat adalah : "<<jumlahAlamat<<endl;	
}

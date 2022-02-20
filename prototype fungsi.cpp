#include<iostream>
using namespace std;

double hitung_luas(double panjang, double lebar);

int main () {
	double panjang, lebar;
	cout<<"masukkan nilai panjang : ";
	cin>>panjang;
	cout<<"masukkan nilai lebar : ";
	cin>>lebar;
	cout<<"fungsi luas : "<<hitung_luas(panjang, lebar)<<endl;
	
	return 0; 
}

double hitung_luas(double p, double l) {
	return p*l;
}


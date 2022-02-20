#include<iostream>
#include<conio.h>
using namespace std;

//basic function
int luas_kotak (int panjang, int lebar) {
	int luas = panjang * lebar;
	return luas;
}
//overload function 1 (bil.bulat)
int luas_kotak (int panjang) {
	int luas = panjang * panjang;
	return luas;
}
//overload function 2 (bil.koma)
double luas_kotak(double panjang) {
	double luas = panjang*panjang;
	return luas;
}

int main () {
	
	cout<<"luas balok 1) 2x3 : "<<luas_kotak(2,3)<<endl;
	cout<<"luas balok 2) 2x2 : "<<luas_kotak(2)<<endl;
	cout<<"luas balok 3) 2.5x2.5 :"<<luas_kotak(2.5)<<endl;
	
	return 0;
}

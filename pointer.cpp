#include<iostream>
using namespace std;

int main () {
	
	int a = 5;
	//int a mempunyai value dan alamat
	
	//pointer (pinter tipe data nya selalu integer)
	int *pointerA = &a;
	//pointerA (tanda *) mengakses alamat a...untuk dapat merubah value a
	
	cin>>a;
	cout<<"nilai dari a adalah : "<<a<<endl;
	cout<<"nilai dari ponterA adalah : "<<*pointerA<<endl;
	cout<<"alamat dari a adalah : "<<&a<<endl;
	cout<<"alamat dari pointerA adalah : "<<&pointerA<<endl;
	
	return 0 ;
}

#include<iostream>
using namespace std;

int main() {
	int a = 5;	
	//reference
	int &b = a;//alamat b sama dengan value a
	cout<<"nilai dari a adalah : "<<a<<endl;
	cout<<"nilai dari b adalah : "<<b<<endl;
	
	//rubah nilai dari a
	a = 15;
	
	cout<<"nilai dari a baru adalah : "<<a<<endl;
	cout<<"nilai dari b baru adalah : "<<b<<endl;
	
	//rubah nilai dari reference b
	b = 100;
	
	cout<<"nilai dari a terbaru adalah : "<<a<<endl;
	cout<<"nilai dari b terbaru adalah : "<<b<<endl;
	
	return 0 ;
}

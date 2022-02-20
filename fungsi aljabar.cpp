#include<iostream>
#include<conio.h>
using namespace std;

int aljabar(int x) {//reporter
	int b = (2*x)+10;		
	return b;//kembalian
}

void penjumlahan(int a, int b) {//worker (menjalankan aja tanpa feedback)
	int c = a + b;
	cout<<"nilai penjumlahan adalah "<<c;
} 

int main () {
	
	int nilai;
	cout<<"Masukkan Nilai x : ";
	cin>>nilai;
	int hasil = aljabar(nilai);
	cout<<"nilai x pada fungsi 2x + 10 adalah "<<hasil<<endl;
	penjumlahan(5,7);
	getch();
	
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;

void diamond() {
	
	int a,b,c,d,e,f, x=1, y=7;
	cout<<"Diamond Statis";cout<<endl;
	
	for (a=1; a<=5 ; a++) //meningkat
	{
		for (b=4; b>=a; b--)
		{
			cout<<" ";
		}
		for (c=1; c<=x; c++)
		{
			cout<<"*";
		}
		x=x+2;//kenapa ini x=x+2, maka saat loop i mengulang untuk kolom selanjutnya , maka nilai x akan diperbarui terus menerus-->1,3,5,7 (di + 2 setiap perulangan)
		cout<<endl;//biar bisa kesusun kebawah pada loop i(jadi kolom)
	}
	for (d=1; d<=4; d++) //menurun
	{
		for (e=1; e<=d; e++)
		{
			cout<<" ";
		}
		for (f=1; f<=y; f++) //ini untuk baris pertama f akan diprint 7  kali(karena looping dengan kondisi f lebih kecil sama dengan 7..dimana dalam loop kolom selanjutnya y akan dikurangi2.)
		{
			cout<<"*";
		}
		y=y-2;
		cout<<endl;	
	} 
}

void diamond2() {
	
	int panjang;
	int a,b,c,d,e,f, x=1, y=5, z=2;
	cout<<"Masukkan Panjang untuk diamond Dinamis: ";
	cin>>panjang;
	cout<<endl;
	
	for (a=0; a<=panjang ; a++) //meningkat
	{
		for (b=panjang-1; b>=a; b--)
		{
			cout<<" ";
		}
		for (c=0; c<x; c++)
		{
			cout<<"*";
		}
		x=x+2;
		cout<<endl;//biar bisa kesusun kebawah pada loop i(jadi kolom)
	}
	
	if(panjang%2!=0) 
{
	for (d=1; d<=panjang; d++) //menurun (apabila cin = ganjil)
	{
		for (e=1; e<=d; e++)
		{
			cout<<" ";
		}
		for (f=1; f<panjang*2; f++) //ini untuk baris pertama f akan diprint 7  kali(karena looping dengan kondisi f lebih kecil sama dengan 7..dimana dalam loop kolom selanjutnya y akan dikurangi2.)
		{
			cout<<"*";
		}
		panjang=panjang-1;
		cout<<endl;	
	}

} 
	else
{
	for (d=0; d<panjang; d++) //menurun (apabila cin = genap)
	{
		for (e=0; e<=d; e++)
		{
			cout<<" ";
		}
		for (f=0; f<=z; f++) //ini untuk baris pertama f akan diprint 7  kali(karena looping dengan kondisi f lebih kecil sama dengan 7..dimana dalam loop kolom selanjutnya y akan dikurangi2.)
		{
			cout<<"*";//biar pas bintangnya , genep paling kecil 2..jadi pikirkan algoritma agar diamond panjang 2 pas yg kebawah
		}
		z=z-2;
		cout<<endl;	
	} 
}
}

int main () {
	
	int panjang;
	cout<<"Masukkan panjang yang diinginkan : ";
	cin>>panjang;
	cout<<endl;
	
	for (int i = 0; i<panjang; i++) 
	{
		for (int j = 0; j<i+1; j++) 
		{
		 cout<<"*";	//yg memberi corak/pola bukan loop i tapi loop ke j, i hanya panjang kolom saja (empety)
		}
		cout<<endl;
	}
	cout<<endl;
	diamond();
	diamond2();
	getch();
}



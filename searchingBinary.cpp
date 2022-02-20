#include<iostream>
#include<conio.h>
using namespace std;

int main () {
	int A,R,T;//(Indek (Awal,Akhir,Tengah)
	int key;
	bool ada = false;//untuk ngecek kondisi perulangan
	int data[9] = {3,9,11,12,15,17,23,30,35};//harus urut ascending
	
	//algoritma binary searching
	A=0;//first index
	R=8;//Last  index
	
	cout<<"Angka yang mau dicari : ";cin>>key;
	
	//perulangan pakai do while, karena loop tdak pasti dan minimal harus 1 loop
	do {
		T=(A+R)/2;
		if(data[T]==key) { ada = true; }
		else if(data[T]>key) { R=T-1; }
		else { A=T+1; }
			
	}while (A <= R && ada == false);
	
	if (ada == true) { cout<<"ADA :)"<<endl;}
	else { cout<<"TIDAK ADA!"<<endl; }
	getch();}

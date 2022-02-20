#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	//kamus
	int data[10] = {4,2,6,8,9,1,4,2,8,3};
	int key;
	int jumlah = 0;
	int temp;
	
	//algoritma linier seaching
	cout<<"cari Angka = ";
	cin>>key;
	
	for (int i = 0; i<10; i++)
	{
		if (data[i] == key) 
		{
			jumlah++;//data yg ditemukan disimpan divar jumlah
		}
	}
	if (jumlah > 0) 
	{
		cout<<"Ada, Jumlahnya = "<<jumlah<<endl;
	}else 
	{
		cout<<"Data Tidak Ditemukan"<<endl;
	}
	
	//sorting secara bubble sort
	for (int i = 0; i<10; i++) 
	{
		for (int j=i+1; j<10; j++)
		{
			if (data[i]>data[j]) 
			{
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	cout<<"Sorting data"<<endl;
	for (int i = 0; i<10; i++) 
	{
		cout<<data[i]<<" ";
	}
	getch();
}

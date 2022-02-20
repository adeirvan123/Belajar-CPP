#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int data[100];
	int i, j, panjang, temp;
	cout<<"PROGRAM PENGURUTAN ARRAY BUBBLE SORT"<<endl;
	cout<<"Masukkan Panjang Angka : ";cin>>panjang;
	cout<<endl;
	
	//bikin loop angka yang akan dimasukkan
	for (int i = 0; i<panjang; i++) {
		cout<<"masukkan angka ke "<<(i+1)<<" : ";
		cin>>data[i];	
	}
	cout<<endl;
	
	//nampilin data yang belum terurut
	cout<<"Berikut Nilai Yang Belum Terurut : "<<endl;
	for (int i = 0; i<panjang; i++) {
		cout<<data[i]<<" ";//ditampilkan secara loop, berulang menyamping..perlu spasi
	}
	cout<<endl;cout<<endl;
	
	//Algoritma pengurutan bubble sort
	for (int i = 0; i<panjang; i++) 
	{
		for (int j = i+1; j<panjang; j++) //selalu disebelah kanan i,after i
		{
			if (data[i]>data[j]) //jika data dengan index i > dari data dengan index j
			{
				temp=data[i]; 	 //jika if benar .. maka value data indek ke i pindah ke var temp
				data[i]=data[j]; //karena value data i kosong, maka value data j mengisi indek ke i
				data[j]=temp; 	 //karena value data ke j kosong , maka indek j diisi oleh value dari var temp
			}
		}	
	}
	cout<<"Menampilkan Hasil Pengurutan : "<<endl;
	for (int i = 0; i<panjang; i++) {
		cout<<data[i]<<" ";
	}
	getch();
}

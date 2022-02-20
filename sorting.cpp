#include<iostream>
#include<conio.h>
using namespace std;

int main ()
{
	int data[100];
	int i, j, k, temp;
	cout<<"PROGRAM PENGURUTAN BILANGAN BUBBLE SORT\n\n";
	cout<<"Masukkan Jumlah Bilangan : ";cin>>k;//masukkan jumlah angka
	for(i=0; i<k; i++) 
	{
		cout<<"Masukkan Angka ke "<<(i+1)<<" : ";//loop nomor mulai dari 1 sampai k-1
		cin>>data[i];//masukkin nilai yg dirutin sesuai dengan loop for pada jumlah angka (k)
	}
	cout<<"\nAngka Sebelum Diurutkan : "<<endl;
	for(i=0; i<k; i++)
		{
			cout<<data[i]<<" ";
		}
	cout<<endl;
   for(i=0; i<k; i++)
   	{
   		for(j=i+1; j<k; j++)
   		{
   			if(data[i]>data[j])
   			{
   				temp=data[i];
   				data[i]=data[j];
   				data[j]=temp;
			   }
		   }
   	}
   		cout<<"\nAngka Setelah Diurutkan : "<<endl;
   	for(i=0; i<k; i++)
   	{
  		cout<<data[i]<<" ";
	}
	getch();
}

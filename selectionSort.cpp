#include<iostream>
#include<conio.h>
using namespace std;

void main() {
	const panjang = 8;
	int data[panjang]={44,55,12,42,94,18,6,67};
	int pos;
	int tmp;
	
	//algoritma selection sort
	for (int i=0; i<panjang-1; i++) {//i sampai indek ke-6 (7 dlm panjang)
		pos=i;//tampung i dalam var pos
		for(int j=i+1; j<panjang; j++) {//indek j = indek i + 1 -> i = 0, j = 1
			if(data [pos]>data[j]) {
			//jika value di indek data ke i > dari value diindek data ke j (ada penukaran)
			pos=j;
			//maka value pos = indek ke j (pos nampung nilai yg lebih kecil)
		}
	}
	tmp=data[i];//selamatkan value indek ke i
	data[i]=data[pos];
	//data ke i yg kosong valuenya di replace dengan value data ke pos/j
	data[pos]=tmp;
	//maka data indek ke pos/j sebelah kanan i yang kosong di replace oleh value tmp
}
//cetak array
for (int k=0; k<panjang; k++) {
	cout<< data[k] <<", ";
}
cout<<endl;
getch();
}

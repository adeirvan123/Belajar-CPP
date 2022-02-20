#include<iostream>
using namespace std;

int faktorial(int a) {
	
	if (a == 1) {
	return 1;
	}else if (a%2==0){
		cout<<"genap"<<endl;
		int hasil = (a/2) * faktorial(a-1);//rekursif genap (agak bingung w konsepnya)
		return hasil;
	}else {
		cout<<"ganjil"<<endl;
		int hasil = a * faktorial(a-1);//a = hasil pada rekursi fungsi setelahnya
		return hasil;
	}
	
}

int main () {
	int a;
	cout<<"masukkan nilai faktorial : ";
	cin>>a;
	cout<<"hasil adalah : "<<faktorial(a)<<endl;
	return 0;
}

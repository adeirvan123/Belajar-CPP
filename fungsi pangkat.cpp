#include<iostream>
using namespace std;

int pangkat (int a , int b) {
	
	int hasil = a;
	for (int i = 1; i<b ; i++) {//untuk perulangan 1 ...hasil*a (angkanya sama)..sampai seterusnya dan setiap perulangan value hasil berunah sesuai hasil perkalian saat itu.
		hasil = hasil*a;
	}
	return hasil;
}

int rekursif (int a, int b) {
	if (b <= 1) {
		cout<<"hasil rekursif : "<<endl;
		return a;
	}else {
		cout<<"masih proses : "<<endl;
		int hasil = a*rekursif(a,b-1);
		return hasil;
	}
}
int main () {
	
	int a, b;
	cout<<"masukkan angka : ";
	cin>>a;
	cout<<"masukkan pangkat : ";
	cin>>b;
	cout<<"hasil dari fungsi pangkat iterasi "<<a<<" pangkat "<<b<<" adalah "<<pangkat(a,b)<<endl;
	cout<<"hasil dari fungsi pangkat rekursif "<<a<<" pangkat "<<b<<" adalah "<<rekursif(a,b)<<endl;
	return 0;
}

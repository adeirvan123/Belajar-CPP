#include<iostream>
#include<cstdlib>//library untuk fungsi nilai acak {rand()}
using namespace std;

int main () {
	
	char lanjut;
	while(true) {
		cout<<"Pilih antara y/n"<<endl;
		cin>>lanjut;
		
		if(lanjut == 'y') {
			cout<< 1 + (rand() % 6)<<endl;//rand()%6..maksudnya pembatas nilainya adalah 5..6/6 = 0, dan + 1 didepan biar nilai awal nya gk 0..menghiagkan nilai index 0
		}else if (lanjut == 'n'){
			break;
		}else {
			cout<<"masukkin y / n dong sayyyy!!!";
		}
	}
	
	return 0;
}

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
	ofstream masukan;
	ifstream keluaran;
	string tampungGan, kebanyakanGan;
	
	masukan.open("hello.text", ios::trunc);
	masukan<<"Hello World"<<endl;
	masukan<<"Hello World (2)"<<endl;
	masukan<<"Hello Bos";
	masukan.close();
	

	keluaran.open("hello.text", ios::in);
	getline(keluaran, tampungGan);
	cout<<tampungGan;
	while (!keluaran.eof()) {
		getline(keluaran, tampungGan);
		kebanyakanGan.append("\n" + tampungGan);
	}
	cout<<kebanyakanGan;
	
	return 0;
}

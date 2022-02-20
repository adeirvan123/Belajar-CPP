#include<iostream>
#include<string>
using namespace std;

int main () {
	string kalimat1 = ("beli apa aja ya");
	string kalimat2 = ("suka makan pisang yang warna coklat");
	
	cout<<"1. "<<kalimat1<<endl;
	cout<<"2. "<<kalimat2<<endl<<endl;
	
//swap string
	kalimat1.swap(kalimat2);
	cout<<"Swap string"<<endl;
	cout<<"1. "<<kalimat1<<endl;
	cout<<"2. "<<kalimat2<<endl<<endl;
	
//replace string {replace
//(index mulai,panjang karakter yg mau diganti,di diganti dengan)}
	kalimat2.replace(kalimat2.find("ya"),2,"yang");
	cout<<"Replace string"<<endl;
	cout<<"1. "<<kalimat1<<endl;
	cout<<"2. "<<kalimat2<<endl<<endl;
	
//insert string {insert(index start, dimasukkan karakter)
	kalimat1.insert(4, " Sekali");
	cout<<"Insert string"<<endl;
	cout<<"1. "<<kalimat1<<endl;
	cout<<"2. "<<kalimat2<<endl<<endl;

}

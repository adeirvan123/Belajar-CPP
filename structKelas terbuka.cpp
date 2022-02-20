#include<iostream>
#include<string>
using namespace std;

struct aktor {
	string nama;
	int tahun_lahir;
};

struct film {
	string judul;
	string genre;
	int tahun;
	//struct aktor
	aktor pemeran_1;//aktor = struct , pemeran_1 definisi (var name)
	aktor pemeran_2;
};

int main ()  {
	
	aktor aktor1 , aktor2;
	film film1;
	
	//aktor1
	aktor1.nama = "Firga";
	aktor1.tahun_lahir = 2000;
	
	//aktor2
	aktor2.nama = "Otong";
	aktor2.tahun_lahir = 2005;
	
	//buat film
	film1.judul = "squirt game";
	film1.genre = "parody";
	film1.tahun = 2021;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;
	
	cout<<film1.judul<<endl;
	cout<<film1.pemeran_1.nama;
	
}


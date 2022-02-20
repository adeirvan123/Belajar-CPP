#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

int main() {
	char nama[35];
	int gender, usia, tinggi_laki, berat_laki, tinggi_perem, berat_perem, ideal_laki, ideal_perem;

while (true) {
	cout<<"Masukkan Nama Lengkap : ";
	cin>>nama;	
	
	cout<<"1. Laki - Laki"<<endl;
	cout<<"2. Perempuan"<<endl;
	cout<<"3. Stop"<<endl<<endl;

	cout<<endl;
	cout<<"Pilih 1, 2, atau 3 : ";
	cin>>gender;
	cout<<endl;
	
	if (gender == 1) {
		cout<<"Masukkan Usia : ";
		cin>>usia;
		
		if (usia<6 && usia>12) {
			cout<<"Umur Tidak Masuk Kriteria Pengukuran";
		}else {
			cout<<"Masukkan Tinggi Badan : ";
			cin>>tinggi_laki;
			if(tinggi_laki < 116 && tinggi_laki > 149) {
				cout<<"Tinggi Badan Tidak Masuk Dalam Kriteria";
			}else {
				cout<<"Masukkan Berat Badan : ";
				cin>>berat_laki;
				ideal_laki = (tinggi_laki-100)-((tinggi_laki-100)*0.1);
				cout<<endl;
				if(berat_laki==ideal_laki) {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_laki<<" berat badan "<<berat_laki<<" sangat ideal.";
				}else if(berat_laki<ideal_laki) {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_laki<<" berat badan "<<berat_laki<<" terlalu kurus, disarankan untuk mencukupi nutrisi.";
				}else {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_laki<<" berat badan "<<berat_laki<<" terlalu gemuk, disarankan untuk diet.";
				}
			}
		}
	}
	else if (gender == 2) {
		cout<<"Masukkan Usia : ";
		cin>>usia;
		
		if (usia<6 && usia>12) {
			cout<<"Umur Tidak Masuk Kriteria Pengukuran";
		}else {
			cout<<"Masukkan Tinggi Badan : ";
			cin>>tinggi_perem;
			if(tinggi_perem < 115 && tinggi_perem > 152) {
				cout<<"Tinggi Badan Tidak Masuk Dalam Kriteria";
			}else {
				cout<<"Masukkan Berat Badan : ";
				cin>>berat_perem;
				ideal_perem = (tinggi_perem-100)-((tinggi_perem-100)*0.15);
				cout<<endl;
				if(berat_perem==ideal_perem) {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_perem<<" berat badan "<<berat_perem<<" sangat ideal.";
				}else if(berat_perem<ideal_perem) {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_perem<<" berat badan "<<berat_perem<<" terlalu kurus, disarankan untuk mencukupi nutrisi.";
				}else {
					cout<<nama<<" usia "<<usia<<" tinggi badan "<<tinggi_perem<<" berat badan "<<berat_perem<<" terlalu gemuk, disarankan untuk diet.";
				}
			}
		}
			
			
	}
	else if (gender == 3){
		break;
	}
		else {
			cout<<"Inputankan 1 Atau 2 Saja";
		}
	getch();
	system("cls");
}
	return 0;
}

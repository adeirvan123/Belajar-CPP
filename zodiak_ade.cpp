#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int tanggal, bulan;
	
	// proses menginput tanggal
	cout<<"masukkan tanggal : "; 
	cin>>tanggal;
	if(!((tanggal>=1) && (tanggal<=31)))
		{
			cout<<"masukkan ulang tanggal dengan jangkauan 1-31"<<endl;
			
				while(!((tanggal>=1) && (tanggal<=31)))
				{
					cout<<"masukkan tanggal : ";
					cin>>tanggal;
				}
		}
		
	//proses menginput bulan
	cout<<"masukkan bulan : ";
	cin>>bulan;
	if(!((bulan>=1) && (bulan<=12)))
		{
			cout<<"masukkan ulang bulan dengan jangkauan 1-12"<<endl;
			
				while(!((bulan>=1) && (bulan<=12)))
				{
					cout<<"masukkan bulan : ";
					cin>>bulan;
				}
		}
	
	cout<<"jadi, orang yang lahirnya pada tanggal " <<tanggal << " dan bulan " << bulan << " memiliki zodiak ";
		
	switch(bulan)
	{
		case 1: 	//januari
			if(tanggal<=19){cout<<"Capicorn"<<endl;}	else{cout<<"Aquarius"<<endl;}
			break;
		case 2:		//febuari
			if(tanggal<=18){cout<<"Aquarius"<<endl;}	else{cout<<"Pisces"<<endl;}
			break;
		case 3:		//maret
			if(tanggal<=20){cout<<"Pisces"<<endl;}		else{cout<<"Aries"<<endl;}
			break;
		case 4:		//april
			if(tanggal<=19){cout<<"Aries"<<endl;}		else{cout<<"Taurus"<<endl;}
			break;
		case 5:		//mei
			if(tanggal<=20){cout<<"Taurus"<<endl;}		else{cout<<"Gemini"<<endl;}
			break;
		case 6:		//juni
			if(tanggal<=20){cout<<"Gemini"<<endl;}		else{cout<<"Cancer"<<endl;}
			break;
		case 7:		//juli
			if(tanggal<=22){cout<<"Cancer"<<endl;}		else{cout<<"Leo"<<endl;}
			break;
		case 8:		//agustus
			if(tanggal<=22){cout<<"Leo"<<endl;}		else{cout<<"Virgo"<<endl;}
			break;
		case 9:		//september
			if(tanggal<=22){cout<<"Virgo"<<endl;}		else{cout<<"Libra"<<endl;}
			break;
		case 10:		//oktober
			if(tanggal<=22){cout<<"Libra"<<endl;}		else{cout<<"Scorpio"<<endl;}
			break;
		case 11:		//Nopember
			if(tanggal<=21){cout<<"Scorpio"<<endl;}		else{cout<<"Sagitarius"<<endl;}
			break;
		case 12:		//Desember
			if(tanggal<=19){cout<<"Sagitarius"<<endl;}		else{cout<<"Capicorn"<<endl;}
			break;
	}
	
	return 0;
}

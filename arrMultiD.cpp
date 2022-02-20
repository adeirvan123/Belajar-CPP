#include<iostream>
using namespace std;

void printArray(int meme[] ,int a , int b) {
	for(int i= 0; i<a; i++) {
		cout<<"[ ";
		for (int j=0; j<b; j++) {
			cout<<*meme<<" ";
			meme++;
		}
		cout<<"]"<<endl;	
	}
	
}

int main() {
	const int baris = 2;
	const int kolom = 3;
	int arrayMD[baris][kolom] = {1,2,3,4,5,6};
	
	printArray(*arrayMD, baris, kolom);
	/*kenapa pake pointer, karna jika tidak arrayMD doang
	cuma ngeluarin alamat aja(address), jadi addres biar 
	jadi value pake pasing by pointer
	*/	
}

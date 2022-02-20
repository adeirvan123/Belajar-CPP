#include <iostream>
using namespace std;

int main() {
	
	int array[7];
	
	for (int i=0; i<sizeof(array)/sizeof(int); i++) {
		cout<<"Masukkan nilai array ke "<<i+1<< " : ";
		cin>>array[i];
	} 
	cout<<"---------------------------------------------"<<endl;
	for (int i=0; i<sizeof(array)/sizeof(int); i++) {
		cout<<"nilai dari array ke "<<i+1<<" adalah "<<array[i];
		cout<<endl;
	} 	
}

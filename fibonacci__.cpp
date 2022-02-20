#include <iostream>
using namespace std;

//prototype
int fibonacci (int a);

int main () {
	int x;
	cout<<"masukkan nilai fibonacci : ";
	cin>>x;
	cout<<"nilai fibonacci = "<<fibonacci(x)<<endl;
	return 0;
}

int fibonacci (int i) {
	if(i == 0) 
		{
			return 0;	
		}
	if(i == 1)
		{
			return 1;
		} 
	return fibonacci(i-1)+fibonacci(i-2);
}

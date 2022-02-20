#include<iostream>
using namespace std;

int x = 10;//scope global

int x_global() {return x;}//fungsi x global

int x_lokal() {int	x = 5;	return x;}//fungsi x lokal

int main () {
	
	cout<<"1. x global = "<<x<<endl;
	int x = 8;
	cout<<"2. x lokal = "<<x<<endl;
	cout<<"3. x fungsi x global = "<<x_global()<<endl;
	cout<<"4. x fungsi x lokal = "<<x_lokal()<<endl;
	{
		int x = 20;
		cout<<"5. x block = "<<x<<endl;
	}
}


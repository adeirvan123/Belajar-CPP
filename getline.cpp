#include<iostream>
using namespace std;

int main() {
	
	string nama;
	char habit[40];
	
	//input spasi pada string
	cout<<"input spasi pada string : ";
	getline(cin,nama);
	
	//input spasi pada char
	cout<<"input spasi pada char : ";
	cin.getline(habit, sizeof(habit));
	cout<<endl;
	
	cout<<"output pada string : "<<nama<<endl;
	cout<<"output pada char : "<<habit<<endl;
	
}

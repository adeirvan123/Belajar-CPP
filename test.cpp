#include <iostream>
using namespace std;

int main() {
	char huruf[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd'};
	string teks;
	
	for (int i=0; i<sizeof(huruf)/sizeof(char); i++) {
		cout<<huruf[i];
	}
}

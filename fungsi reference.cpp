#include <iostream>
using namespace std;

void reference(int &b) {
	cout<<"nilai dari b adalah "<<b<<" dengan alamat "<<&b<<endl;
}
void pangkat(int &b) {
	b = b*b;
	cout<<b<<endl;
}

int main() {
	int a = 4;
	cout<<"nilai dari a adalah "<<a<<" dengan alamat "<<&a<<endl;
	
	reference(a);
	pangkat(a);
	cout<<"hasil a yang baru dari  fungsi pangkat reference adalah "<<a<<endl;
	return 0 ;
}

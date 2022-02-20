#include<iostream>
using namespace std;

void nampilin(int *pointer) {
	cout<<"nilai dari pointer a adalah "<<*pointer<<" dengan address "<<pointer<<endl;;
}

int kuadrat (int *pointer) {
	*pointer = (*pointer) * (*pointer);
	return *pointer;
}

int main() {
	//deklarasi pointer *a = &b,,jika dibuat fungsi ...paramater fungsi pakai pointer_variabel
	//value parameter nya pakai alamat variabel (&b)
	int a = 5;
	cout<<"nilai dari a adalah "<<a<<" dengan address "<<&a<<endl;
	nampilin(&a);
	kuadrat(&a);
	cout<<endl;
	cout<<"nilai a yang baru dari fungsi kuadrat "<<a<<endl;

return 0;	
}

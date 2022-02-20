#include <iostream>
#include <conio.h>
using namespace std;

struct teks {//struct harus paling atas lokasinya (prosedural structure)
	string tulisan;
};
	teks bapakku;//var global harus paling atas. biar bisa masuk fungsi
	
int nginput(bool apaHayo) {
	while(apaHayo) {
		getline(cin,bapakku.tulisan);
		
		if (bapakku.tulisan == "Hello World") {
			
			apaHayo = false;
		} 
	}
}
	
int main () {
	bool anda = true;
	nginput(anda);
	system("cls");
	cout<<"<-->...<-->"<<endl;
	cout<<bapakku.tulisan;
	cout<<endl;
	cout<<"=^..^= >^.^<";
	return 0;
}

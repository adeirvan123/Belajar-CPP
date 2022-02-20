#include<iostream>
using namespace std;

int main () {
	
	int arr[6] = {1,2,3,4,5,6};
	cout<<sizeof(arr)/sizeof(int)<<endl;
	
	cout<<"loop"<<endl;
	for (int i=0; i<sizeof(arr)/sizeof(int); i++) {
		
	cout<<arr[i]<<"  ";
	}
	
	return 0;
}

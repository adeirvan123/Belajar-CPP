#include<stdio.h>

void pangkat (int &a) {
	a = a*a;
	printf("%d\n", a);
}

int main () {
	int x = 2;
	printf("nilai x awal = %d\n", x);
	pangkat(x);
	printf("nilai x akhir = %d\n", x); 
	
}

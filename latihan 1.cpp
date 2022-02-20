#include <stdio.h>

int main() {
	
	int size ;
	scanf("%d", &size);
	for (int i = 0; i<size; i++){
		for (int j = 0; j<size; j++){
			if (i == 0 || i == size-1 || j == 0 || j == size-1) {//gabisa pakai and, harus pakai or...
				printf("*");//karena apabila and, misal baris i paling kiri tidak boleh diiisi oleh kolom j paling kiri..makanya pakai or
			}
			else {
				printf(" ");
			for (int k = j; k<size; k++){
				printf("*");
				}
			}
		}
		printf("\n");
	}
	
	return 0;
}
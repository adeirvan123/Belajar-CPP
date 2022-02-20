#include <stdio.h>

void rata2(int jumlah, int banyak);

int main () {
	int jumlah;
	int pembagi = 0;
	int arr[20];
		
	for (int i = 0; i<20; i++) {
		printf("Masukkan nilai siswa ke - %d : ", i+1);
		scanf("%d", &arr[i]);
		
		if (arr[0] == 0) {
			printf("error\n");
			break;
		}
		else if(arr[i] == 0) {
			printf("\ninputan selesai\n\n");
			break;
		}
	 jumlah += arr[i];
	 pembagi ++;
	}
//	printArray(arr,20);
	printf("TOTAL NILAI SISWA : ");
	printf("%d\n\n", jumlah);
	
	printf("NILAI RATA - RATA SISWA: \n");
	rata2(jumlah,pembagi);

}

void rata2(int total, int banyak) {
	float rata2 = total/banyak;
	printf("%f", rata2);
}

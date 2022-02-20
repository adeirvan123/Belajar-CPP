#include <stdio.h>
#include <conio.h>

void deteksiNol(int data[]);

int main () {
	float rata2;
	int urutan = 1;
	int arr[20];
		
	for (int i = 0; i<20; i++) {
		printf("Masukkan nilai siswa ke - %d : ", urutan);
		scanf("&d", arr[i]);
	}
	

}

void deteksiNol (int data[]) {
	int key = 0;
	for(int i= 1; i<sizeof(data)/sizeof(int); i++) {
		if (data[i] == key) {
			printf("inputan selesai");
		    break;
		}
	}
}

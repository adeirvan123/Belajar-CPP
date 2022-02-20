#include<stdio.h>
#include<string.h> //buat strcpy (copy nama)
#include<stdlib.h> //buat sytem"cls"

struct rectangle{
	int length;
	int width;
};

struct person{
	char name[200];
	int age;
};

struct info {
	person pemilik;
	rectangle luasBangunan;
};

info infoBangunan[100];//masukkan ke variabel struct info, jadikan array
int banyakBangunan = 0;//var kosong, buat nampung

info tambahBangunan() {//struct dijadikan function
	char name[200];
	int age, length, width;
	
	printf("Input nama Pemilik : ");
	scanf("%s", &name);getchar();
	
	printf("Input umur pemilik : ");
	scanf("%d", &age);getchar();
	
	printf("Input lebar pemilik : ");
	scanf("%d", &width);getchar();
	
	printf("Input panjang pemilik : ");
	scanf("%d", &length);getchar();
	
	info infoBaru = {{"", age}, {length, width}};//name kosong karena string gabisa masuk pada struct
	strcpy(infoBaru.pemilik.name, name);//harus dicopy terlebih dahulu..yg kanan = yg kiri
	
	return infoBaru;
}

void lihatBangunan() {
	for(int i = 0; i<banyakBangunan; i++) {
		info bangunan = infoBangunan[i];
		printf("%s berumur % memiliki luas bangunan %d\n", 
				bangunan.pemilik.name, bangunan.pemilik.age,
				bangunan.luasBangunan.length*bangunan.luasBangunan.width);
	}
}

int main() {
	
	int input = 0;
	
	do{
		system("cls");
		printf("1. Tambah Bangunan\n");
		printf("2. Lihat Bangunan\n");
		printf("3. Exit\n");
		scanf("%d", &input);getchar();//biar masih bisa dienter
		switch (input) {
			case 1 :
				infoBangunan[banyakBangunan++] = tambahBangunan();
				break;
			case 2 :
				lihatBangunan();
				getchar();
				break;
		}
	}while (input != 3);
	
	
}

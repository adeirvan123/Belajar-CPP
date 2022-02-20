#include <stdio.h>

int main () {
	
	char kata_sifat, kegiatan, nama_orang, tempat;
	
	printf("sebutkan kata sifat: ");
	 scanf("%[^\n]\n", kata_sifat);
	printf("sebutkan sebuah kegiatan: ");
	 scanf("%[^\n]", kegiatan);
	printf("sebutkan nama seseorang: ");
	 scanf("%[^\n]\n", nama_orang);
	printf("sebutkan sebuah tempat: ");
	 scanf("%[^\n]\n", tempat);
	printf("\n");
	
	printf("Aku adalah seseorang yang %c\n", kata_sifat);
	printf("Hobiku adalah %c\n", kegiatan);
	printf("Aku suka dengan %c\n", nama_orang);
	printf("Aku punya kebiasaan tidur di %c\n", tempat);
	
	return 0;

}

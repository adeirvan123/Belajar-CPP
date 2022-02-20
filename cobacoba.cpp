#include <iostream>
#include <conio.h> //library 
#include <stdlib.h> //standar library
using namespace std;
int main()
{
 	char map[6][6] = {"*****",//memetakan dulu array string dimensi
	 				  "*****",//buat dimensi 6*6 karena diisi 5x5
					  "*****",
					  "*****",
					  "*****"};
	int playerY = 0, playerX = 0; //ini koordinat P
	char player = 'P';
	char input;
	
	while(true) {//loop terus karena kondisi selalu benar, kenapa pake while karena for gk bisa loop infinite
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if(playerX == j && playerY == i) {//jika korrdinat x & y benar print P
					printf("%c", player);
				}
				else 
					printf("*");//salah print *
			}
			printf ("\n");//enter saat baris 5, dan terisi kolom 5
		}
	input = getch();
	//w -> atas
	//a -> kiri	
	//s -> bawah
	//d -> kanan
	switch(input){
		case 'w' :
			if(playerY > 0) {
			playerY-=1; }
		break;
		case 'a' :
			if(playerX > 0) {
			playerX-=1; }
		break;
		case 's' :
			if(playerY <4 ) {
			playerY+=1;}
		break;
		case 'd' :
			if(playerX < 4) {
			playerX+=1;}
		break;
	}
	system("cls");
 
 }
}
#include <stdio.h>
#include <conio.h>
   int main(){
     char password;
     clrscr();
     printf("Masukkan Password anda : ");
     password=getche();
     printf("Password anda adalah : %s", password);
     return 0;
   }
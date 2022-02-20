//I Nengah Ksatria Bhaskara Widyanayaka (40040319650030)
#include<stdio.h>
#include<math.h>

float x, mf1, mf2, mf3, mf4, r1, r2, r3, r4 , u;
int u1 = 0, u2 = 200, u3 = 500, u4 = 1000;
float nilaiAktual = 30;
float sisa;
float sp = 50;


int main() {
  x = sp - nilaiAktual;
 printf("Error = %f\n", x);
  //print nilai membership function
 printf("Nilai mf1: %f\n", mf1);
 printf("Nilai mf2: %f\n", mf2);
 printf("Nilai mf3: %f\n", mf3);
 printf("Nilai mf4: %f\n", mf4);

  //print nilai defuzzyfikasi
 printf("Nilai Deffuzy : %f\n", u);


  //membuat hasil defuzzyfikasi menjadi pwm untuk mengatur ssr 
 sisa = 1000 - u;
 printf("Nilai sisa : %f\n", sisa);

}

void hitung(){
//perhitungan membership function
int a = -100, b = -50, c = 0, d = 5;
  mf1 = max(min(min((x-a)/(b-a),(d-x)/(d-c)),1),0);

int a1 = 0, b1 = 5, c1 = 10;
  mf2 = max(min((x-a1)/(b1-a1),(c1-x)/(c1-b1)),0);
  
int a2 = 5, b2 = 15, c2 = 29;
  mf3 = max(min((x-a2)/(b2-a2),(c2-x)/(c2-b2)),0);

int a3 = 22, b3 = 30, c3 = 50, d3 = 55;
  mf4 = max(min(min((x-a3)/(b3-a3),(d3-x)/(d3-c3)),1),0);

}

void fuzzy_rule(){
//menerapkan hasil perhitungan membership function ke aturan
  hitung();
  r1 = mf1*u1; //jika error negatif, maka aktuator off
  r2 = mf2*u2; //jika error positif kecil, maka aktuator on sebentar
  r3 = mf3*u3; //jika error positif sedang, maka aktuator on sedang
  r4 = mf4*u4; //jika error positif besar, maka aktuator on lama
}

float defuzzyfikasi(){
  //defuzzyfikasi
  fuzzy_rule();
  u = (r1+r2+r3+r4)/(mf1+mf2+mf3+mf4);
  return u;
}

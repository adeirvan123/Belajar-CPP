#include<stdio.h>
#include<math.h>
float crips;

float inputf, outputf;

float s_negatif[3] = {-50, 0, 5};
float s_positif_kecil[3] = {0, 5, 10};
float s_positif_sedang[3] = {5, 15, 25};
float s_positif_besar[3] = {25, 30, 50};

float F_negatif(){
 if (inputf > s_negatif[1]){return 0;}
 else if (inputf >= s_negatif[1] && inputf <= s_negatif[2]){return (s_negatif[2] - inputf)/(s_negatif[2]-s_negatif[1]);}
 else if (inputf > s_negatif[2]){return 0;}
}

float F_positif_kecil(){
 if (inputf < s_positif_kecil[0] || inputf > s_positif_kecil[2]){return 0;}
 else if (inputf >= s_positif_kecil[0] && inputf <= s_positif_kecil[1]){return (inputf-s_positif_kecil[0])/(s_positif_kecil[1]-s_positif_kecil[0]);}
 else if (inputf >= s_positif_kecil[1] && inputf <= s_positif_kecil[2]){return (s_positif_kecil[2]-inputf)/(s_positif_kecil[2]-s_positif_kecil[1]);}
}

float F_positif_sedang(){
 if (inputf < s_positif_sedang[0] || inputf > s_positif_sedang[2]){return 0;}
 else if (inputf >= s_positif_sedang[0] && inputf <= s_positif_sedang[1]){return (inputf-s_positif_sedang[0])/(s_positif_sedang[1]-s_positif_sedang[0]);}
 else if (inputf >= s_positif_sedang[1] && inputf <= s_positif_sedang[2]){return (s_positif_sedang[2]-inputf)/(s_positif_sedang[2]-s_positif_sedang[1]);}
}

float F_positif_besar(){
 if (inputf < s_positif_besar[0]){return 0;}
 else if (inputf >= s_positif_besar[0] && inputf <= s_positif_besar[1]){return (inputf-s_positif_besar[0])/(s_positif_besar[1]-s_positif_besar[0]);}
 else if (inputf >= s_positif_besar[1] && inputf <= s_positif_besar[2]){return 1;}
}

//RULE
//if inputf = negatif => 0
float a = 0;
//if inputf = positif kecil => 200
float b = 200;
//if inputf = positif sedang => 500 
float c = 500; 
//if inputf = positif besar => 1000 
float d = 1000;

float Defuzzyfikasi() {
	crips = ( (a*F_negatif()) + (b*F_positif_kecil()) + (c*F_positif_sedang()) + (d*F_positif_besar()))/(F_negatif()+F_positif_kecil()+F_positif_sedang()+F_positif_besar());
	return crips;
}

int main(){
 printf ("Masukkan Set Point Suhu antara -50 sampai 50 : ");
 scanf ("%f", &inputf);

 printf ("Keanggotaan Negatif : %f\n", F_negatif());
 printf ("Keanggotaan Positif Kecil : %f\n", F_positif_kecil());
 printf ("Keanggotaan Positif Sedang : %f\n", F_positif_sedang());
 printf ("Keanggotaan Positif Besar : %f\n", F_positif_besar());

 float delay = 1000 - Defuzzyfikasi();
 printf("Waktu Pemanasan adalah : %f milisecond\n", Defuzzyfikasi());
 printf("Waktu delay/waktu ssr off adalah : %f milisecond", delay);
}


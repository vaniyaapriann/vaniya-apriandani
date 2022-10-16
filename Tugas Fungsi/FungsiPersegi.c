//Nama		: Ni Komang Vaniya Apriandani
//NIM		: 2205551019
//Kelas		: Algoritma Pemrograman B
//Program 	: Luas dan Keliling Bangun Persegi dengan Fungsi

#include <stdio.h>

//Notasi Fungsi
float luas (float a){
	float hasil;
	hasil = a*a;
	return hasil;
}
float keliling (float b){
    float hasil;
    hasil = 4*b;
	return hasil;
}
//Program Utama
int main (){
	printf("Program Luas dan Keliling Persegi dengan Fungsi\n\n");
	
	float sisi;
	
	printf("Masukkan sisi : ");
	scanf("%f", &sisi);
	printf("Luas persegi adalah : %.2f\n", luas (sisi));
	printf("Keliling persegi adalah : %.2f\n", keliling (sisi));
	return 0;	
}

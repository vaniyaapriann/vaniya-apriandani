//Nama		: Ni Komang Vaniya Apriandani
//NIM		: 2205551019
//Kelas		: Algoritma Pemrograman B
//Program	: Perhitungan Kecepatan dengan Fungsi

#include <stdio.h>

//Notasi Fungsi
float kecepatan (float a,float b){
	float hasil;
	hasil = a/b;
	return hasil;
}
//Fungsi Utama
int main (){
float jarak, waktu ;
char input;
do{

	printf("Program Perhitungan Kecepatan dengan Fungsi\n");
	printf("Masukkan jarak : "); scanf("%f", &jarak);
	printf("Masukkan waktu : "); scanf("%f", &waktu);
	
	printf("Kecepatannya adalah : %.2f\n", kecepatan (jarak,waktu));
	
	printf ("Mau hitung lagi ga? (y/t)\n");
	scanf ("%s", &input);
	
}while (input !='t'); 
	printf ("Terimakasih");
	return 0;
}

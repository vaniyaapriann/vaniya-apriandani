//Nama		: Ni Komang Vaniya Apriandani
//NIM		: 2205551019
//Kelas		: Algoritma Pemrograman B
//Program 	: Luas dan Keliling Bangun Persegi dengan Fungsi

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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
float kecepatan (float a,float b){
	float hasil;
	hasil = a/b;
	return hasil;
}

void cover (){
	printf ("\t\t\t======================================\n");
	printf ("\t\t\t|           Vaniya Apriandani        |\n");
	printf ("\t\t\t|         << NIM 2205551019 >>       |\n");
	printf ("\t\t\t======================================\n");
}

//Fungsi Validasi
float inputcek (){
	float pilih;
	char cek;

if (cek = scanf ("%f%c", &pilih, &cek)!=2){
	
	fflush (stdin);
	printf ("input salah : ");
	return inputcek ();
	}
	
	else{
		if (pilih >= 0) {
			return pilih;
		}
		else {
			fflush (stdin);
			printf ("Bilangan positif dong : ");
			return inputcek ();
	}
}
	return pilih;
}


//Program Utama
int main (){
	
	cover ();
	system ("pause");
	system ("cls");
	
	//Deklarasi Variabel Char
    char input;
    //Deklarasi Variabel Integer
    int pilih1, pilih2 ;
    //Deklaraso Variabel Float
    float sisi;
do {

    //Menu Pilihan
    printf ("\t\t\t========================================\n");
	printf ("\t\t\t|    PROGRAM DENGAN KONSEP FUNGSI      |\n");
	printf ("\t\t\t========================================\n");
	printf ("\t\t\t           PILIHAN PROGRAM              \n");
	printf ("\t\t\t 1. Menghitung Luas dan Keliling Persegi\n");
	printf ("\t\t\t 2. Menghitung Kecepatan                \n");
	printf ("\t\t\t========================================\n");
	printf (">>");
    printf("Kamu memilih = "); 
    scanf("%d", &pilih1);
    
   system ("cls");
    
    
    switch(pilih1){
	
    	
	    case 1:
	    		//Menu Pilihan Menghitung Luas dan Keliling Persegi
		        printf ("\t\t\t=================================================================\n");
		        printf ("\t\t\t|             Menghitung Luas dan Keliling Persegi              |\n");
		        printf ("\t\t\t=================================================================\n\n");
		        printf ("Mau menghitung apa?\n\n");
		        printf ("Menu Pilihan\n");
		        printf ("1.Luas Persegi\n");
		        printf ("2.Keliling\n");
		        printf ("Kamu memiilih = "); fflush (stdin);
		        scanf ("%d", &pilih2);
		        
		    system ("cls");
		    
		         if (pilih2 == 1){ 
		                printf ("\nProgram Perhitungan Luas Persegi\n");
		                float sisi;
		                printf ("Masukkan Sisi : "); sisi = inputcek ();
						printf("Luas persegi adalah : %.2f\n", luas (sisi));
						
				  }else if (pilih2 ==2){
		                printf ("\nProgram Perhitungan Keliling Persegi\n");
		                float sisi;
		                printf ("Masukkan jari_jari : "); sisi = inputcek ();
		                printf ("Luas Permukaan Bola adalah %.2f cm^2\n", keliling (sisi));
		                
				 }else {
             			//Deklarasi Inputan
            			printf("Input salah\n");
					}		
						
				break;
				
		case 2:
			    printf ("\t\t\t================================================================\n");
			    printf ("\t\t\t|                  Menghitung Kecepatan                         |\n");
			    printf ("\t\t\t================================================================\n\n");				
						
				printf ("Program Perhitungan Kecepatan\n");
				float jarak,waktu;
				printf("Masukkan jarak : "); jarak = inputcek ();
				printf("Masukkan waktu : "); waktu = inputcek ();
				printf("Kecepatannya adalah %.2f m/s\n", kecepatan (jarak, waktu));
		break;
		
			default: 
				printf("Wah nampaknya yang kamu input tidak ada di pilihan\n\n");fflush (stdin);
		}
				printf ("\nJadi gimana? mau hitung lagi kah? (y/t)"); fflush (stdin);
				scanf ("%s", &input);

				system ("cls");
				//Lanjutan perulangan do
			}	while(input != 't');
				system("cls");
					printf ("TERIMAKASIH!!!");
			    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Nama	: Marcel Kurniawan
//NIM	: 2501977090
//Program Kalkulator

int main(){
	//Deklarasi variabel
	int angka2, hasil;
	int tambah, kurang, kali;
	double bagi, hasilbagi;
	char angka1;
	char op;
	int temp;
	
	//Perulangan
	while(1){
		//Input User
		printf("Masukan angka dengan format [ID1] [OP] [ID2]\n");
		printf("Input 'x' untuk keluar\n");
		scanf("%c", &angka1);getchar();	//Input ID 1
		if(angka1=='x') break; //Kondisi untuk keluar dari perulangan
		scanf("%c %d",&op, &angka2);getchar(); // Input OP dan ID2
		
		//Cek Syarat
		if(angka1=='n'){
			if(op=='+'){
				temp=hasil-angka2;
				printf("Hasil dari %c + %d = %d\n\n", angka1, angka2, temp);
			}else if(op=='-'){
				temp=hasil+angka2;
				printf("Hasil dari %c - %d = %d\n\n", angka1, angka2, temp);
			}else if(op=='*'){
				temp=hasil/angka2;
				printf("Hasil dari %c * %d = %d\n\n", angka1, angka2, temp);
			}else if(op=='/'){
				double temp2 = angka2;
				double temp=hasilbagi*temp2;
				printf("Hasil dari %c / %d = %.0lf\n\n", angka1, angka2, temp);
			}
		}else{
			int temp = angka1-'0'; //merubah tipe data char angka1 menjadi sebuah integer
			if(op=='+'){
				tambah = temp+angka2;
				hasil = tambah;
				printf("Hasil dari %d + %d = %d\n\n",temp, angka2, hasil);
			}else if(op=='-'){
				kurang = temp-angka2;
				hasil = kurang;
				printf("Hasil dari %d - %d = %d\n\n",temp, angka2, hasil);
			}else if(op=='*'){
				kali = temp*angka2;
				hasil = kali;
				printf("Hasil dari %d * %d = %d\n\n",temp, angka2, hasil);
			}else if(op=='/'){
				double temp1 = temp;
				double temp2 = angka2;
				bagi = temp1/temp2;
				hasilbagi = bagi;
				printf("Hasil dari %d / %d = %.2lf\n\n",temp, angka2, hasilbagi);
			}
		}
		
	}
	return 0;	
	}
	

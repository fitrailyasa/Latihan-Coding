#include <stdio.h>
#include <stdlib.h>

int main(){
	float tinggi, berat, selisihBerat, bmi;
	
	printf("==================================\n");
    printf("|| PROGRAM TINGGI & BERAT BADAN ||\n");
    printf("==================================\n");
	
	printf("Tinggi (cm) : ");
	scanf("%f", &tinggi);
	printf("Berat (kg) : ");
	scanf("%f", &berat);
	
	tinggi = tinggi / 100;
	
	bmi = berat / (tinggi * tinggi);
	
	printf("Kategori: ");
	
	if (bmi < 18.5){
		printf("Kurus");
	} else if(bmi >= 18.5 && bmi <= 25){
		printf("Normal", selisihBerat);
	} else{
		printf("Obesitas", selisihBerat);
	};
	printf("\n\n");
    system("pause");
	return 0;
}

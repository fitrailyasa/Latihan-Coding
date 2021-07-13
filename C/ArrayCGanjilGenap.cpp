#include <stdio.h>
#include <stdlib.h>

#define n 100

int main(){
	int i, x, genap = 0, ganjil = 0;
	int data[n];
	
	printf("==========================\n");
    printf("|| PROGRAM GANJIL GENAP ||\n");
    printf("==========================\n");
	
    printf("Masukkan Nilai N: ");
    scanf("%d", &x);
        
    for(i=0; i < x; i++){
        printf("Masukkan Data Ke - %d : ", i+1);
		scanf("%d", &data[i]);
    }
    
    for(i=0; i<x; i++){
        if(data[i]%2 == 0){
        	genap++;
        }
		else{
			ganjil++;
        }
    }

    printf("\nJumlah bilangan Genap = %d", genap);
    printf("\nJumlah bilangan Ganjil = %d\n", ganjil);
	printf("\n");
	system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int x, balikAngka = 0, i; 
	
	printf("=========================\n");
    printf("|| PROGRAM BALIK ANGKA ||\n");
    printf("=========================\n");
    
    printf("Masukkan angka: ");
	scanf("%d", &x);    
	  while(x != 0){    
	     i = x%10;    
	     balikAngka = balikAngka * 10 + i;    
	     x /= 10;    
	  }   
	   
	  printf("Angka yang dibalik: %d",balikAngka);
	  printf("\n\n");
    system("pause");  
	return 0;  
}

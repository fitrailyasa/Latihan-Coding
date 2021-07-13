#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){
    char x[50];
    int i, tambah;
    
    printf("=========================\n");
    printf("|| PROGRAM NILAI ASCII ||\n");
    printf("=========================\n");
    
    printf("Masukan karakter/simbol: ");
    scanf("%s", x);
    tambah = 0;
    for(i = 0; i < strlen(x); i++)
        tambah += (int)x[i];
        
    printf("Nilai ASCII: %d\n", tambah);
    printf("\n\n");
    system("pause");
    return 0;
}

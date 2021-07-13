#include <stdio.h>
#include <stdlib.h>

int main(){
    float a,b,c,t,i,j;
    printf("======================\n");
    printf("|| PROGRAM KALKULUS ||\n");
    printf("======================\n");
    printf("\n");
    printf("Bentuk Umum (ax^2) + (bx) + (c)\n");
    printf("Masukkan nilai a : ");
    scanf("%f",&a);
    printf("Masukkan nilai b : ");
    scanf("%f",&b);
    printf("Masukkan nilai c : ");
    scanf("%f",&c);
    printf("\n");
    printf("Fungsinya Adalah : (%.2fx^2) + (%.2fx) + (%.2f)",a,b,c);
    printf("\n");
    t=a*2;
    printf("Turunanya adalah   : (%.2fx) + (%.2f)\n",t,b);
    i=a/3;
    j=b/2;
    printf("Integralnya ialah : (%.2fx^3)+(%.2fx^2) + (%.2fx)",i,j,c);
    printf("\n\n");
    system("pause");
    return 0;
}

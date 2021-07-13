#include<stdio.h>
#include<string.h>

int main(){
    char nama1[50], nama2[50], bantu[50], perintah[100];
    int uang;
    printf("Nama-1 : ");
    scanf("%s",&nama1);
    printf("Nama-2 : ");
    scanf("%s",&nama2);
    printf("Perintah : ");
    scanf("%s ",&bantu);
    scanf(" %s ",&perintah);
    scanf(" %d",&uang);

    if(strcmp(bantu,nama1)==0){
        if(strcmp(perintah,"bayar")==0)
            printf("Hasil : %s membayar kepada %s sebanyak %d",nama1,nama2,uang);
        else{
            printf("Hasil : %s berutang kepada %s sebanyak %d",nama1,nama2,uang);
        }
    }
    else if(strcmp(bantu,nama2)==0){
        if(strcmp(perintah,"bayar")==0)
            printf("%s membayar kepada %s sebanyak Rp %d",nama2,nama1,uang);
        else{
            printf("%s berutang kepada %s sebanyak Rp %d",nama2,nama1,uang);
        }
    }
    return 0;
}

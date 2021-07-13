#include <stdio.h>
#include <string.h>

int main(){

    char str1[] = "Gagal";
    char str2[] = "Gagal";
    int hasil;

    // membandingkan string
    hasil = strcmp(str1, str2);

    if(hasil == 0){
        printf("str1 dan str2 sama");
    } else {
        printf("str1 dan str2 berbeda");
    }
}

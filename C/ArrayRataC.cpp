#include<stdio.h>

int main(){
    int n;
    float nilai[n], rata;
    printf("Jumlah Mata Kuliah : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Nilai Mata Kuliah-%d : ",i+1);
        scanf("%f", &nilai[i]);
    }
    for(int i = 0; i < n; i++){
        rata+=nilai[i];
    }
    rata/=n;


    if(rata >= 3.0){
        printf("IPK : %0.2f \n",rata);
        printf("Anda berhak mengambil tugas akhir jalur skripsi !");
    }
    else{
        printf("IPK : %0.2f \n",rata);
        printf("Anda disarankan mengambil tugas akhir jalur proyek !");
    }
    return 0;
}

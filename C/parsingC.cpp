#include <stdio.h>
#include <string.h>

int main(){
	
	char kata[100];
	char simpan[100];
	int j = 0;
	printf("masukkan kalimat : ");
	fflush(stdin);gets(kata);
	
	char pemisah = ',';
	for(int i = 0; i < strlen(kata); i++){
		
		if(kata[i] == pemisah){
			j++;
		} else {
			simpan[j] += kata[i];
		}
	}
	
	for(int i = 0; i <= j; i++){
		printf("%s\n", simpan[i]);
	}
}

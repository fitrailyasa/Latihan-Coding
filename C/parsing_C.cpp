#include <stdio.h>
#include <string.h>

int main(){
	char str[100],hasil[10][50];
	int i, k = 0;
	int j = 0;
	scanf("%s",hasil[j][k]);
	char dasar = ',';
	for(i=0;i<strlen(str);i++){
		if(str[i] == dasar){
			k = 0;
			j++;
		}
		else{
			hasil[j][k] = str[i];
			k++;
		}
	}
	for(int i=0;i<=j;i++){
		printf("%s\n",hasil[i]);
	}
}

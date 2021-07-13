#include<stdio.h>
#include <stdlib.h>

int main(){
	int total, i=1;
	while(i<=10){
		total = total + i*2; 
		printf("%i ", total);
		i++;
	}
	printf("\n\n");
    system("pause");
	return 0;
}

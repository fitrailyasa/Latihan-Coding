#include <stdio.h>
#include <stdlib.h>

int main(){
	char tipeData;

	printf("Ketik 'a'\n");
	scanf("%s", &tipeData);
 
	if(tipeData == 'a') {
    	printf ("%zu\n", sizeof(int));
    	printf ("%zu\n", sizeof(float));
    	printf ("%zu\n", sizeof(double));
    	printf ("%zu\n", sizeof(char));
	}
	printf("\n\n");
    system("pause");
	return 0;
}

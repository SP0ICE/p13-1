#include <stdio.h>
int main() {
    printf("Test v13.01: OK.\n");
	FILE *fIn; // file input
	int a  = 0;
	int b  = 0;
	
	fIn =fopen("input.txt","r"); // r - read
	if (NULL == fIn) {
	    printf("File not found!\n");
		return 1;
		
	}
	else {
	printf("File opened succesful!\n");
	fscanf(fIn, "%d", &a);
	printf("\na: %d", a);
	fscanf(fIn, "%d",&b);
	printf("\nb: %d", b);
	
	}
	fclose(fIn);
	return 0;
}

#include<stdio.h>

void encrypt(){

	char dna[50];
	int i=0, count=1;

	printf("\nDNA sequence : ");
	fgets(dna, 50, stdin);

	printf("The result of the encoding: ");

	while( dna[i+1] != '\0' ){

		if( dna[i] == dna[i+1] ){

			count++;

		}else{

			printf("%c%d", dna[i], count);

			count = 1;

		}

		i++;

	}

	printf("\n\n");

}

void main(){

	encrypt();

}
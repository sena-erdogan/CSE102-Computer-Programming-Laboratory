#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{

	int val;

	struct node *next;

}node;

void main(){

	node *head, *temp;

	srand(time(0));

	int num = rand() % 41 + 10;

	int n;

	head = (node*)malloc(sizeof(node));

	n = rand() % 101;

	head->val = n;

	for(int i=1; i<num; i++){

		node temp;

		n = rand() % 101;

		if(n <= head->val){

			temp

		}

	}

}
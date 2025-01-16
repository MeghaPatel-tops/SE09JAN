#include<stdio.h>
#include <stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}Node;
main(){
	
	Node *n1 = (Node *)malloc(sizeof(Node));
	Node *n2 = (Node *)malloc(sizeof(Node));
	Node *n3 = (Node *)malloc(sizeof(Node));
	
	n1->data=121;
	n1->next=n2;
	
	n2->data=123;
	n2->next=n3;
	
	n3->data=124;
	n3->next=NULL;
	
	Node* temp=n1;
	while(temp){
		printf("\n%d %p",temp->data,temp->next);
		temp=temp->next;
	}	
	
}

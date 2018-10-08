#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
	int marks;
	node *next;
};
void push(node **top,int value);
void pop(node **top);
void Display(node **top);
main(){
	node *top=NULL;
	int choice,marks;
	do{
	printf("\nEnter your choice:\n");
	printf("1-Insert Node\n2-Display Node\n3-Delete Node\n4-Exit\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:{
			printf("Enter marks:\t");
			scanf("%d",&marks);
			push(&top,marks);
			break;
		}
		case 2:{
			Display(&top);
			break;
		}
		case 3:{
			pop(&top);
			Display(&top);
			break;
		}
		case 4:{
			
			break;
		}
		default:
		printf("Wrong Input\n");
	}
}
while(choice!=4);
}
void push(node **top,int value){
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	if (*top == NULL)
	{
	    newNode->marks = value;
	    newNode->next = NULL;
	    *top=newNode;
	}
	
	else{
		newNode->marks = value;
		newNode->next = *top;
	}
	*top = newNode;
}
void pop(node **top){
	node *Temp=*top;
	if (*top==NULL)
	printf("Stack is Empty\n");
	else{
			*top=Temp->next;
			*top--;
		}
		Temp=*top;
}
void Display(node **top){
	struct node *temp=*top;
	if(*top==NULL)
	printf("Stack is empty\n");
	else{
		printf("\n\n********Stack*********\n");
		while(temp != NULL){
			printf("\nmarks:  %d",temp->marks);
			temp=temp->next;
		}
		printf("\n");
	}
}


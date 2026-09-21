//Implmentation  of add new node as first node in linked list.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * next;
};
node * start=NULL;
node * ptr;
node * newnode;
main(){
	int ch=0,item;
	while(ch!=3){
		printf("1-> Insert \n");
		printf("2-> Traverse \n");
		printf("3-> Exit \n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				newnode=(node*)malloc(sizeof(node));
				printf("Enter Element to insert : ");
				scanf("%d",&item);
				newnode->data=item;
				newnode->next=start;
				start=newnode;
				break;
			case 2:
				printf("Element of linked list\n");
				ptr=start;
				while(ptr!=NULL){
					printf("%d\n",ptr->data);
					ptr=ptr->next;
				}
				break;
			case 3:
				printf("Exit...\n");
		}
	}
}

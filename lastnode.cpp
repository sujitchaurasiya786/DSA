//Implementation of add and delete node in linked list as last node.
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * next;
};
node* start=NULL;
node * newnode;
node* ptr;
main(){
	int item,ch=0;
	while(ch!=4){
		printf("1-> Insert as last node \n ");
		printf("2-> Delete as last node \n ");
		printf("3-> Traverse\n ");
		printf("4-> Exit \n ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				newnode=(node *)malloc(sizeof(node));
				printf("Enter element :");
				scanf("%d",&item);
				newnode->data=item;
				newnode->next=NULL;
				ptr=start;
				if(ptr==NULL){
					start=newnode;
				}else{
					while(ptr->next!=NULL){
						ptr=ptr->next;
					}
					ptr->next=newnode;
				}
				break;
			case 2:
				if(start==NULL){
					printf("Linked List is empty . \n");
				}
				else{
					if(start->next==NULL){
						printf("Deleted Element: %d\n",start->data);
						free(start);
						start=NULL;
					}else{
						ptr=start;
						while(ptr->next->next!=NULL){
							ptr=ptr->next;
						}
						printf("Deleted element=%d\n",ptr->next->data);
						free(ptr->next);
						ptr->next=NULL;
					}
				}
				break;
			case 3:
				if(start==NULL){
					printf("Linked List is empty.\n");
				}
				else{
					ptr=start;
					printf("Elements of Linked List \n");
					while(ptr!=NULL){
						printf("%d\n",ptr->data);
						ptr=ptr->next;
					}
				}
				break;
			case 4:
				printf("Exit..\n ");
		}
	}
}

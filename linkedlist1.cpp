//Implmentation  of add & delete new node as first node in linked list.
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
	while(ch!=4){
		printf("1-> Insert \n");
		printf("2-> Delete \n");
		printf("3-> Traverse  \n");
		printf("4-> Exit..\n");
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
				ptr=start;
				if(ptr==NULL){
					printf("Linked list is empty \n");	
				}else{
					item=ptr->data;
					printf("Deleted item=%d \n",item);
					start=ptr->next;
					free(ptr);
				}
				break;
			case 3:
				ptr=start;
				if(ptr==NULL){
					print("Linked list is empty \n");
				}else{
					printf("Element of linked list\n");
					while(ptr!=NULL){
					printf("%d\n",ptr->data);
					ptr=ptr->next;
					}
				}
				
				break;
			case 4:
				printf("Exit...\n");
		}
	}
}

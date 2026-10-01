//Insert as first node,delete after given node & traverse
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	node * next;
};
node * start=NULL;
node * ptr;
node * newnode;
node * delnode;
main(){
	int item,ch=0,key;
	while(ch!=4){
		printf("1-> Insert as First node \n");
		printf("2-> Delete after given node \n");
		printf("3-> Traverse Linked List \n");
		printf("4-> Exit.. \n");
		scanf("%d",&ch);
	switch(ch){
		case 1:
			newnode=(node*)malloc(sizeof(node));
			printf("Enter Element : ");
			scanf("%d",&item);
			newnode->data=item;
			newnode->next=start;
			start=newnode;
		break;
		case 2:
			if(start==NULL){
				printf("Linked List is empty.\n");
			}
			else{
				ptr=start;
				printf("Enter key value: ");
				scanf("%d",&key);
				while(ptr!=NULL){
					if(ptr!=NULL){
					
					if(ptr->data==key){
						printf("No node exists after the given node.\n");
					}
					else {
						delnode=ptr->next;
						ptr->next=delnode->next;
						printf("Deleted value=%d\n",delnode->data);
						free(delnode);
					}
					break;
				}
				else{
					ptr=ptr->next;
				}
			}
			if(ptr==NULL){
				printf("Given node is not found.\n");
			}
		break;
		case 3:
			if(start==NULL){
				printf("Linked List is empty.\n");
			}
			else{
				ptr=start;
				printf("Element of linked list.\n");
				while(ptr!=NULL){
					printf("%d\n",ptr->data);
					ptr=ptr->next;
				}
			}
		break;
		case 4:
			printf("Exit...\n");
			break;
	}
	}
}
}

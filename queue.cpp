//WAP to perform Queue operations.(array implementation)
#include<stdio.h>
#define N 5
main(){
	int queue[N],rear=-1,front=-1,ch=0,item,i;
	while(ch!=4){
		printf("1-> PUSH\n");
		printf("2-> POP\n");
		printf("3-> Traverse\n");
		printf("4-> EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if((front==0&&rear==N-1)||(front==rear+1)){
					printf("OverFlow\n");
				}
				else{
					if(front==-1&&rear==-1){
						front=0;
						rear=0;
					}else if(rear==N-1){
						rear=0;
					}else{
						rear=rear+1;
					}
					printf("Enter Element : ");
					scanf("%d",&item);
					queue[rear]=item;
				}
			break;
			case 2:
				if(front==-1){
					printf("UnderFlow\n");
				}else{
					item=queue[front];
					printf("Deleted Item = %d\n",item);
					if(front==N-1){
						front=0;
					}else if(front==rear){
						front=-1;
						rear=-1;
					}else{
						front=front+1;
					}
				}
			break;
			case 3:
				if(front==-1){
					printf("Queue is Empty\n");
				}else{
					printf("Elements of Queue...\n");
					if(front<rear){
						for(i=front;i<=rear;i++){
						printf("%d\n",queue[i]);
					}
					}
					else{
						for(i=front;i<=N-1;i++){
							printf("%d\n",queue[i]);
						}
						for(i=0;i<=rear;i++){
							printf("%d\n",queue[i]);
						}
					}
				}
				break;
			case 4:
				printf("EXit....");
				break;
			default:
				printf("Invalid choise.....\n");
		}
	}
}

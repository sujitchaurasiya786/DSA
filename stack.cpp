//WAP to perform stack operations.(array implementation)
#include<stdio.h>
#define N 5
main(){
	struct stk{
		int Stack[N];
		int top;
	};
	struct stk s;
	int ch=0,item,i;
	s.top=-1;
	while(ch!=4){
		printf("1-> PUSH\n");
		printf("2-> POP\n");
		printf("3-> Traverse\n");
		printf("4-> EXIT\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				if(s.top==N-1){
					printf("OverFlow\n");
				}else{
					s.top++;
					printf("Enter Element to insert : ");
					scanf("%d",&item);
					s.Stack[s.top]=item;
				}
			break;
			case 2:
				if(s.top==-1){
					printf("UnderFlow\n");
					
					item=s.Stack[s.top];
					printf("Deleted Item = %d",item);
					s.top--;
				}
			break;
			case 3:
				if(s.top==-1){
					printf("Stack is Empty\n");
				}else{
					for(i=s.top;i>=0;i--){
						printf("%d\n",s.Stack[i]);
					}
				}
				break;
			case 4:
				printf("EXit....");
				break;
		}
	}
}

//WAP to create a function with name xstrlen() to fing length of string.(use concept of call by reference)
#include<stdio.h>
void xstrlen(char * str){
	int i,c=0;
	for(i=0; str[i]!='\0';i++){
		c++;
	}
	printf("Length of string : %d",c);
}
main(){
	char str[50];
	printf("Enter string : ");
	gets(str);
	xstrlen(str);
}

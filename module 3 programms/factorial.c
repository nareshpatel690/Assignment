#include<stdio.h>
int main()
{
	int num, fact=1,i;
	printf("enter a number\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		fact = i*fact;				
	}
	printf("%d",fact);
}
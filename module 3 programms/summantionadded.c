#include<stdio.h>
int main(){
	int num,r,sum=0;
	printf("enter a number\n");
	scanf("%d",&num);
//	12345
	
	while(num>0){
		r=num%10;
		sum=sum+r;
		num=num/10;
		
	}
	printf("%d",sum);
}
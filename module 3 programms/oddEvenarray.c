#include<stdio.h>
int main(){
	int num[10],i,en=0,on=0;
	printf("enter a number of value\n");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
		
		
		
	for(i=0;i<10;i++){
		if(num[i]%2==0){
			printf("%d is even num\n",num[i]);
			en=en+num[i];	
		}
	}
			printf("sum of all even num are %d\n",en);
	
	
	for(i=0;i<10;i++){
		if(num[i]%2!=0){
			printf("%d is odd num\n",num[i]);	
			on=on+num[i];	
		}
	}
			printf("sum of all odd num are %d\n",on);

	
	
	
}
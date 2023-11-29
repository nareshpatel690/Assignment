#include<stdio.h>
int main(){
	int max,arr[] = {25, 119, 7, 75, 56,10,12,130};          
    int length = sizeof(arr)/sizeof(arr[0]);  
	printf("%d\n",length);  
	  for (int i = 0; i < length; i++) {     
            
       if(arr[i] > max)    
           max = arr[i];
       }
        
		   printf("max number %d",max); 
}
//Program 2

#include<stdio.h>

void main(){

	int num,i=0;
	printf("Enter the number :");
	scanf("%d",&num);
	int count=0,num2 = num;
	
	while(num != 0){
		
		count++;
		num = num /10;
		
	}
	int arr[count];
	while(num2 != 0 ){
		int rem = num2 % 10;
		arr[i] = rem;
		num2 = num2 / 10;
		i++;
	}
	
	for(int i=0;i<count;i++){
	
		for(int j=i+1;j<count;j++){
		
			if(arr[i]>arr[j]){

				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
		
		
	for(int i=0;i<count;i++){
	
		printf("%d",arr[i]);
	}
			
}

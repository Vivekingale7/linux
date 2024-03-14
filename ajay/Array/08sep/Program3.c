//Program 3

#include<stdio.h>

void main(){
	int num ,i = 0,count = 0;
	printf("Enter the Number : ");
	scanf("%d",&num);
	int temp = num;
	while(num != 0){
		count++;
		num = num /10;
	}
	int arr[count];
	while(temp != 0){
		int rem = temp % 10;
		arr[i] = rem;
		i++;
		temp = temp / 10;
	}
	for(int i = 0;i < count;i++){
		for(int j = i;j < count;j++){
			if(arr[i] < arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}
	for(int k = 0;k < count;k++){
		if(arr[k]==arr[k+1]){
		
			continue;
		}else{
			printf("%d\n",arr[k]);
		}
	}
}

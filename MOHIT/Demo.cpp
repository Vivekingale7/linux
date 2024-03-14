using namespace std;
#include<iostream>
int search(int arr[],int N,int x)
{
	for(int i = 0;i<N;i++)
		if(arr[i]==x)
			return i;
	return -1;
}

int main(void)
{
	int arr[]={2,4,6,10,30};
	int x = 10;
	int N = 4;
	int result = search(arr,N,x);
	cout<<"Searchkey is Present at (index) : "<<result<<endl;
	cout<<"searchkey is not Present in List."<<endl;
	
	return 0;
}



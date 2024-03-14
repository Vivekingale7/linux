class Viv {
	
	static int[] fun(int[] arr){

	int count = 0 , count1 = 0;

	for(int i = 0 ; i < arr.length ; i++){

	count = 0 ;

	for(int j = i+1 ; j < arr.length ; j++ ){

		if(arr[i] == arr[j] ){

			 count++ ;
			 count1++;
		}
	}
	if(count == 0 ){

		System.out.print(arr[i]);

	}
	}
	System.out.println(count1);
	return arr;
	}
	public static void main(String[] args){


		int arr[] = {0,0,1,1,1,2,2,3,4};

		fun(arr);



	}
}

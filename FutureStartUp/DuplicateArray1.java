class Viv {

	static int[] fun(int[] arr){

	int count = 0 ;

	for(int i = 0 ; i < arr.length ; i++){

	count = 1 ;

	for(int j = i+1 ; j < arr.length ; j++ ){

		if(arr[i] == arr[j] && arr[i] != -1 ){

			count++ ;
			arr[j] = -1 ;
		}
	}
	if(count > 1 ){

		System.out.print(arr[i]);

	}
	}

	return arr;
	}
	public static void main(String[] args){


		int arr[] = {0,0,1,1,1,2,2,3,4};

		fun(arr);

	}
}

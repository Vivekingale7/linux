class Viv {

	public static void main(String[] args){

		int arr[] = {9};
		
		
		int ele = arr.length - 1 ;

//		for(int i = 0 ; i < arr.length ; i++){

		if(arr.length == 1 && arr[ele] == 9 ){

			 arr[0] = 1;
			 arr[1]= 0 ;
		for(int i = 0 ; i < arr.length+1 ; i++){

			System.out.println(arr[i]);
		}
		}else{
		       
		
			if(arr[ele] == 9 ){

				arr[ele] = 0 ;
				arr[ele - 1] = arr[ele - 1] + 1 ;

			}else if(arr[ele] < 9 ){

				arr[ele] = arr[ele] + 1 ;

			}

			for(int i = 0 ; i < arr.length ; i++){

				System.out.print(arr[i] + " ");
			}
			}
	}
}

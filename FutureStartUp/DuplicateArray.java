class Viv{

	public static void main(String[] args){


		int arr[] = {0,0,1,1,1,2,2,3,3,4};
	

		fun(arr);


	}	

	static int[] fun(int[] arr){

		int count = 0 ;
		int flag = 0 ;
		for(int i = 0 ; i < arr.length-1 ; i++ ){
			
			flag  = 0 ;
			for(int j = i+1 ; j < arr.length ; j++){
	
				if(arr[i] == arr[j]){
					flag = 1 ;
					count++ ;
				
				}
			}	
			if(flag == 1){	
			System.out.print(arr[i]);
			}
			}

		return  arr;
	}

}

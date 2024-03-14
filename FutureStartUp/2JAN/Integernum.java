class Viv{

	public static void main(String args[]){

		int arr[] = {4,2,1,2,1};

		
//		int count = 0 ;
		int temp = Integer.MIN_VALUE ;

		int flag = 0 ;
		for (int i = 0 ; i < arr.length-1 ; i++){
			
		int count = 0 ; 

			for(int j = i + 1 ; j < arr.length ; j++){
			

			if( arr[i] == arr[j]){

				count++ ;
	
			
			
			}
			}	
			if(count == 0){
				System.out.print(arr[i]);
				break ;
				
			}
		}
	}
}




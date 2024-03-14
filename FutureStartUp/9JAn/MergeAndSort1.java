class Viv {

	public static void main(String[] args){

		int arr1[] = {1,2,4};
		int arr2[] = {1,3,4};

		int arr3[] = new int[arr1.length + arr2.length];
		
		int j = 0 ;
		for(int i = 0 ; i < arr1.length ; i++){

			arr3[i] = arr1[i];
			j++ ;	
			
		}
		for(int i = 0; i < arr2.length ; i++){

			arr3[j] = arr2[i];
			j++ ;
		}
	
		int temp = Integer.MAX_VALUE ;

		for(int i = 0 ; i < arr3.length ; i++){
			
			if(temp > arr3[i]){
				temp = arr3[i];
				arr3[i] = temp ;
		  
			}
				
			
					
			System.out.println(arr3[i]);
		}
	}
}

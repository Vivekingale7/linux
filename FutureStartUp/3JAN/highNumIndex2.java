class Viv {

	public static void main(String[] args){

		int arr[] = {1,2,3,1};

		int start = 0 ;

		int end = arr.length - 1 ;

//		for(int i = start ; i < arr.length ; )
		
		while(start < end ){

			int mid = (start + end)/ 2 ;
			

			if(arr[mid] < arr[mid + 1]){

				start = mid +1  ;

			}else {

				end = mid ;

			}
		}
		System.out.println(start);
	}
}

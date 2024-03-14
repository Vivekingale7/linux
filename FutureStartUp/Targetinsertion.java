class Viv {

	public static void main(String[] args){

		int arr[] = {1,3,5,6};
		
		int target = 5 ;

		int start = 0 ;

		int end = arr.length -1 ;
		
		int index = 
       while (start <= end) {

   	       int mid = start + (end - start) / 2;


          
	       if (arr[mid] == target) {
                index = mid ; 
           
	       } else if (target < arr[mid]) {
                end = mid - 1;
           
	       } else {
                start = mid + 1;
           
	       }
          }
	}
}

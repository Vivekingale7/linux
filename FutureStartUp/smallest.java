class Smallest {

	public static void main(String[] args){

		int arr[] = {2,13,5,8,9,1,1,1,13};

		int s = Integer.MAX_VALUE ;

		int s2 = Integer.MAX_VALUE ;

		for(int i = 0 ; i < arr.length ;i++){

			if(arr[i] < s){
					
				s2 = s ;
				s = arr[i];
	
			}
		}

		System.out.println("Smallest no is " + s);
		System.out.println("Second Smallest no is " + s2);

	}
}

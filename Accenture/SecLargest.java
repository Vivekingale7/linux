class Viv {

	public static void main(String[] args){

		int arr[] = {10,2,3,45,43,1,3};

		int Large = Integer.MIN_VALUE ;

		int SecLarge = Integer.MIN_VALUE ;

		for(int i = 0 ; i < arr.length ; i++){

			if(Large < arr[i]){

				SecLarge = Large ;
				Large = arr[i];

			}
			
		}
			System.out.println(SecLarge);
	}
}

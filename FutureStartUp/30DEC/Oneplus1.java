class Viv {

	public static void main(String[] args){

		int arr[] ={1,2,3,9};

		int i = arr.length - 1;

		while( i >= 0 && arr[i] == 9){

			i-- ;

		}
		if(i == -1 ){

			int arr2[] = new int[arr.length+1];

			arr2[0] = 1 ;
			
			for(int v = 0 ; v < arr2.length ; v++){

				System.out.print(arr2[v]);

			}

		}
		
	}
}	

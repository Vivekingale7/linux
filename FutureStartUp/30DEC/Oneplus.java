
import java.util.* ;

class Viv {

	public static void main(String[] args){

		int arr[] = {9};

		int i = arr.length-1 ;
	//for(int i = arr.length-1 ; i >= 0  ; i--){

			while(i >= 0 ){

			if(arr[i] == 9 ){
				
			
				arr[i] = 0 ;
				arr[i-1] = i + 1 ;

			}else {

				arr[i] = arr[i+1];
			}
			
			i = i - 1 ;
		}
		for(int v = 0 ; v < arr.length ; v++){
			System.out.println(arr[v]);
		}
	}
}


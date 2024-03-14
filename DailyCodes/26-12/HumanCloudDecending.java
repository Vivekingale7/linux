import java.util.*;

class Human {

	public static void main(String[] args){

	int arr[] = {3 , 2 , 5, 6 , 1 , 9};
	
	Scanner sc = new Scanner(System.in);

	int k = Integer.MIN_VALUE ;
	
	int arr2[6]= {};
	
	for(int i = 0 ; i < arr.length  ; i++){
	
		if(k < arr[i]){

			 arr2[i]= k ;	
		}
	}

	}
	
}

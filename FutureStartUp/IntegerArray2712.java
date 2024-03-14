import java.util.Scanner ;

class Viv{

	public static void main(String[] args){

	System.out.print("Enter the Size of Array :");
	
	Scanner sc = new Scanner(System.in);
	
	int size = sc.nextInt();

	System.out.println();
	int arr[]=new int[size];	

	System.out.println("Enter the Array :");

	for(int i = 0 ; i < size ; i++){
	
		arr[i] =sc.nextInt(); 

	}
	for(int i = 0 ; i < size ; i++){
	
		System.out.print ("   " + arr[i]);

	}
	System.out.println();
	System.out.print("Enter the Target :");

	int target = sc.nextInt();

	System.out.println();

	int index1 = 0;
	int index2 = 0;
	
	for(int i = 0 ; i < arr.length -1 ; i++ ){
			for(int j = i+1 ; j < arr.length ; j++){
				
		if( arr[i] + arr[j] == target){
				index1 = i ;
				index2 = j ;	
				System.out.print("target get");
			}
	        }
	    }	
		System.out.println();
		int arr2[] ={index1 , index2};
		for(int i = 0 ; i < arr2.length ; i++){
	       	System.out.print(arr2[i]);	
		}
	}
}

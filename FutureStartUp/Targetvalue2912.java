import java.util.Scanner ;

class Viv{

	public static void main(String[] args){

	Scanner sc = new Scanner(System.in);

	int arr[] = {1,3,5,6};
	
	System.out.println("The Array is ...");

	for(int i = 0 ; i < arr.length ; i++){

		System.out.print(arr[i] + "   ");

	}
	System.out.println();
	System.out.println("Enter the Target :.....");

	int Target = sc.nextInt();
	
	int index = 0 ;
	for(int i = 0 ; i < arr.length ; i++ ){
		
		if(Target == arr[i] ){
			
			index = i ;
	
/*		}else if( Target < arr[i] && arr[i] > Target){

				index = i ;
*/
		}else if(Target < arr[i]){

				index = i-1 ;

		}else if(Target > arr[i]){

				index = i + 1 ;

			}
		}	
		
	
	
	System.out.println("Index is .... ");
	System.out.println(index);
	}
			
}				


		

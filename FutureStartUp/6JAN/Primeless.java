import java.util.* ;

class Viv {
	
	public static void main(String[] args){

	Scanner sc = new Scanner(System.in);
	
	System.out.print("Enter the Number ...");
	
	int num =sc.nextInt();

	int count = 0 ;
       	
	for(int i = num ; i > 0 ; i--){

		if(num % i == 0){

			count++;
		}
		 if(count == 2 ){

				System.out.println(num);
			
		}
		num-- ;
        	}
	}
}


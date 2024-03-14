import java.util.Scanner ;

class PerfectNo {

	public static void main(String[] args){


		System.out.println("Enter the number");

		Scanner sc = new Scanner(System.in);

		int num = sc.nextInt();
		
		int temp = 0 ;
		for(int i = 1 ; i < num ; i++ ){
		if(num % i == 0 ){
			temp = temp + i ;
			}
		}
		if(temp == num ){

			System.out.println("The Above number is Perfect number ");
		}
	}
}

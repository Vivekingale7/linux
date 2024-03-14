import java.util.*;

static int ArmStrong(int num){
	int rem = 0 ;
	int val = 0;

	while ( num != 0 ){
		
		rem = num % 10;
		val = val + rem*rem*rem ;
		num = num / 10 ;

		num--;

		
	}

}
class ArmStrong {


	public static void main(String[] args){

	System.out.println("Enter the Number :");

	Scanner sc = new Scanner(System.in);

	int num = sc.nextInt();
	
	ArmStrong(int num);

	}
}

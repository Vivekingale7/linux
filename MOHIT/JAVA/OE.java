import java.util.Scanner;

class age {
        public static void main(String[] args){
		System.out.print("Enter A Num = ");
		Scanner sc = new Scanner(System.in);
		long num = sc.nextLong();
		long a = num % 2;
		if(a == 0){
			System.out.println("Number is Even.");
		}else{
			System.out.println("Number is Odd.");
		}
	}
}




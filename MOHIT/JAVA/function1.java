import java.util.*;

public class function1 {
        public static int calculateSum(int a , int b) {
		int sum = a + b ;
                return sum ;
        }
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
		System.out.print("Enter a : ");
                int a = sc.nextInt() ;
		System.out.print("Enter b : ");
		int b = sc.nextInt() ;

                int sum = calculateSum(a , b);              //Creating Variable for main function.
		System.out.println("Sum of a & b is : "+sum);

        }
}


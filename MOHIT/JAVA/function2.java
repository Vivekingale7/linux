import java.util.*;

public class function2 {
        public static int calculateMul(int a , int b) {
                return a * b;
        }
        public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
		System.out.print("Enter a : ");
                int a = sc.nextInt() ;
		System.out.print("Enter b : ");
		int b = sc.nextInt();
                                                                         
		System.out.println("Multiplication of a & b is : "+ calculateMul(a,b)); //Calling Function.

        }
}


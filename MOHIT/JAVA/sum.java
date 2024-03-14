//Take 2 variables 'a' & 'b' print their sum.

import java.util.Scanner;
class sum {
	public static void main (String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter 'a' = ");
		int a = sc.nextInt();
		System.out.print("Enter 'b' = ");
		int b = sc.nextInt();
		int c = a + b;
		System.out.println("Sum of 'a' + 'b' = "+ c);
	}
}
		

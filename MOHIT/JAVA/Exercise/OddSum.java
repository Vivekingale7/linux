// Write a function to print the sum of all odd numbersfrom 1 to n.

import java.util.*;

class OddSum {
	public static int OddAdd(int n) {
		int sum = 0;
		for(int i = 1 ; i <= n ; i+=2) {
			sum = sum + i ; 
		}
		int Odd = sum ;
		return Odd;
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Upto Which Number You want to Add Odd Number : ");
		int n = sc.nextInt();
		System.out.println("Sum of Odd Number is : "+ OddAdd(n));
	}
}

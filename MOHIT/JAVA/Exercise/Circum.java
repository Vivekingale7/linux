// Write a function that takes in the Radius as input and returns the Circumference of a circle.

import java.util.*;

class Circum {
	public static double Radius(int r ) {
		double pi = 3.14 ;
		double Circumference = pi * r * r ;

		return Circumference;
	}
	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Radius of Circle : ");
		int r = sc.nextInt();
		double c = Radius(r);
		System.out.println("Circumference of Given Radius Circle is : "+ c);
	}
}

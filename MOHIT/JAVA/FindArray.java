// Take an Array as Input from the user. 
// Search for a given number x and print the index at which it occurs.

import java.util.*;
public class FindArray {
	public static void main(String args[]) {
		Scanner obj = new Scanner(System.in);
		System.out.print("Enter Array Size : ");
		int size = obj.nextInt();		// Size
		int elements[] = new int[size];
		// Input
		for(int i = 0 ; i < size ; i++) {
			System.out.print("Array Elements : ");
			elements[i] = obj.nextInt();
		}
                System.out.print("Number whose Searching Index : ");
		int x = obj.nextInt();
		// Output
		for(int i = 0 ; i < elements.length ; i++) {
			if(x == elements[i])
                        System.out.println("Index of "+x+" : "+i);
                }
	}
}


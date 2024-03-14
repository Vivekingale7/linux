// Write a function takes in 2 Numbers and returns the greater of those two.

import java .util.*;

class Bahubali {
	public static int GreatNumber(int a, int b) {
		if( a == b ) {
			System.out.println("Both Numbers are Equal.");
		}else if(a > b) {
			System.out.println(a + " is greater than "+ b);
		}else {
			System.out.println(b + " is greater than " + a);
		}
		return 1;
	}

        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter a : ");
                int a = sc.nextInt();
                System.out.print("Enter b : ");
                int b = sc.nextInt();
                int comp = GreatNumber(a,b);
        }
}

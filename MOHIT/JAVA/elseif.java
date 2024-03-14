// Take a & b. Check a = b , a < b & a > b.


import java.util.Scanner;

class elseif {
       public static void main(String[] args){
	       Scanner sc = new Scanner(System.in);
	       System.out.print("Enter a = ");
	       long a = sc.nextLong();
	     //  Scanner sc = new Scanner(System.in);
	       System.out.print("Enter b = ");
	       long b = sc.nextLong();
	    //   Scanner sc = new Scanner(System.in);
		if( a == b ){
		    System.out.println("a is Equal to b.");
		}else if( a > b ){
		       System.out.println("a is Greater than b.");
		}else{
			System.out.println("a is less than b.");
		}
       }
}       



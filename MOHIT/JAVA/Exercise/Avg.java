// Enter 3 numbers from the user & make a function to print their average.

import java.util.*;

class Avg {
        public static int Average(int a, int b, int c) {
                int avg = (a + b + c)/3;
                return avg;
        }
        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter 3 Numbers : ");
                int a = sc.nextInt();
                int b = sc.nextInt();
                int c = sc.nextInt();
                System.out.println("Average of Given Numbers is : "+Average(a , b , c));
        }
}


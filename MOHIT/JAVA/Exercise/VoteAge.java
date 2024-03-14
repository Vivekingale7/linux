/* Write a function that takes in Age as Input and returns if that person is eligilble to vote or not.
   A Person of age > 18 is eligible to Vote.
*/

import java .util.*;

class VoteAge {
        public static int Age(int age) {
                if( age > 18 ) {
                        System.out.println("You are Eligible to Vote.");
                }else {
                        System.out.println("You are Not Eligible to Vote.");
                }
                return 1;
        }

        public static void main(String args[]) {
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter Your Age : ");
                int age = sc.nextInt();
                int g = Age(age);
        }
}

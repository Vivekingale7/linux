// Take Age as Input and Check Person is Adult or Not Adult.


import java.util.Scanner;

class age {
	public static void main(String[] args){
		System.out.print("Enter Age: ");
		Scanner sc = new Scanner(System.in);
		int age = sc.nextInt();
		if(age >= 18){
			System.out.println("Person is Adult.");
			}else{
				System.out.println("Person is Not Adult.");
			}
	}
}

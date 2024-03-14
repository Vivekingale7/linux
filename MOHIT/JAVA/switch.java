import java.util.Scanner;

class Switch {
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Please Enter Colour of Button = ");
		String button = sc.nextLine();
		switch(button){
			case "RED": System.out.println("RED Button");
				  break;
			case "YELLOW": System.out.println("YELLOW Button");
				     break;
			case "BLUE": System.out.println("BLUE Button");
				   break;
			default: System.out.println("Invalid");
				 break;
		}
	}
}






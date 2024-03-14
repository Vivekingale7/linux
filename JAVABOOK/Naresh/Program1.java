// call A class main method from B class main method 


class A {

	public static void main (String[] args){

		System.out.println("A main");

	}
}

class B {

	public static void main(String[] args){

		System.out.println("B main");
		A.main(new String[0]);
	}
}

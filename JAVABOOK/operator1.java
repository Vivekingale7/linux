class Arope {

	public static void main(String[] args){

		int a,b,sum,sub,mul,div,mod ;

		a = Integer.parseInt(args[0]);
		b = Integer.parseInt(args[1]);
		
		sum = a+b;
		sub = a-b ;
		mul = a*b ;
		div = a/b ;
		mod = a%b ;

		System.out.println("Addition = " + sum);
		System.out.println("substraction = " + sub);
		System.out.println("multiplication = " + mul);
		System.out.println("divion = " + div);
		System.out.println("mod = " + mod);

	}
}
/*
 Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: 0
	at Arope.main(operator1.java:7)
*/

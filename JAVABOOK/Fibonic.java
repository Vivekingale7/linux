class Lab2 {

	public static void main (String[] args){

		int f0 = 1,f1 = 1, i = 3, f2, n ;

		n = Integer.parseInt(args[0]);
                
	//	n = 5 ;
		while(i<n){

			f2 = f0 + f1 ;
			System.out.println(f2);

			f0 = f1 ;
			f1 = f2 ;

			i++ ;

		}
	}
}

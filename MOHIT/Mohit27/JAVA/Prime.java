class Prime 
{
	public static void main(String args[])
{
	int num = 5 , count = 0 ;
	for(int i = 2 ; i <= num/2 ; i++) {
		if(num % i == 0) {
		count++ ;
	}
     }
	if(count == 0 && num != 1) {
	System.out.println(num + " is prime Number.");
	}else{
		System.out.println(num + " is not Prime Number.");
    }
 }
}

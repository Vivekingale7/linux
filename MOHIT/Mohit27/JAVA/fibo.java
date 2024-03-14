class fibo
{
	public static void main(String args[])
{
	int sum = 0 , n = 15 ;
	for(int i = 0 ; i <= n ; i++) {
	       int num = sum + i;
		   i = sum ;
		   sum = num ;
		System.out.println("Fibbonacci series till " + n + " is : " + sum);
     }
 }
}

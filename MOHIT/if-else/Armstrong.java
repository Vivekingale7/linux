/*
 Problem - Take N as input.
	 - print whether N is Armstrong Number or Not.
 Armstrong Number : It is a number whose sum of each numbers raised to its total number of number which is given is equal to number is called Armstrong Number.
 Example - 23 = 2^2 + */
class armstrong{
	public static void main(String[] args){

	int N = 43;
	int temp1 = N;
	int temp2 =  N;
        int sum = 0;
	int count = 0;
	while(temp1!=0){
		count++;
		temp2 = temp1/10;
	}      						//temp1=0
	while(N!=0){
		int rem = N%10;
		int mult = 1;
		for(int i = 1 ; i<=count ; i++){
			mult = mult * rem;
		}
		sum = sum + mult;
		  N = N/10;
	}						//N = 0
	if(temp2==sum){
		System.out.println("Armstrong");
	}else{
		System.out.println("Not Armstrong");
	}
	}
}



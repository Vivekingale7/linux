import java.util.*;
class sum {
        public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Number : ");
                int n = sc.nextInt();
		int sum = 0;
	//	for(int i = 0 ; i <= n ; i++) {
		int i = 0;
		while(i <= n){
			sum = sum + i;
			i++;
                } System.out.println("Sum of First " + n + " Numbers is : "+sum);
        }
}


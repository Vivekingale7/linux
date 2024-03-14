class Viv {

	public static void main(String[] args){


		int num[] = {5,4,2,3};

		for(int i = 0 ; i < num.length; i++){

			int temp = num[i];

			num[i] = num[i+1];

			num[i+1] = temp ;
		
			System.out.print(temp);

		}
	}
}
		

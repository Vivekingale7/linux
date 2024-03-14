class Viv {

	public static void main(String[] args){

		String str = "abcabc";

	//	int count = 0 ;
//		int arr[] = new int{};
		for(int i = 1 ; i < str.length()-1 ; i++ ){

//		arr[i] = str.charAt(i);
		
		int temp = str.charAt(i);
		int count = 0 ;
			for(int j = i+1 ; j < str.length()-1 ; j++){

				if(str.charAt(i) == temp ){

					count++ ;

				}
			}
			if(count == 1){

				System.out.println(str.charAt(i));

			}
		}
	}
}
		

class Viv {

	public static void main(String[] args){

		String str = "fly with the moon");
		

//		char arr[] = str.charAt(str);

		int count = 0 ;

		for(int i = str.length()-1 ; i > 0 ; i--){

			if(str.charAt(i) == ' '){

				break ;

			}else{

				count++ ;

			}
		}
		System.out.println(count);
	}
}



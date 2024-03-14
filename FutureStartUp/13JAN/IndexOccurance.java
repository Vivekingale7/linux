class Viv {

	public static void main(String[] args){


		String str = "leetcode" ;

		String needle = "leet";

		int flag = -1 ;
		int temp = 0 ;
		
		int flag3 = 000;

		for(int i = 0 ; i < str.length() ; i++){

			if(str.charAt(i) == needle.charAt(0)){

				flag = 0 ;
				temp = i ;
			}
			
			if(flag == 0){
				
				temp = i ;

				if(str.charAt(i) == needle.charAt(temp)){

				flag = 111 ;

				}

			}
		}

			System.out.println(flag);
	}
}
		
		

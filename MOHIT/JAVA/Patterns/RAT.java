class RAT {
        public static void main(String[] args){
		int n = 4;
                for(int i = 1 ; i <= n ; i++){
                        for(int j = 1 ; j <= 4 ; j++){
				int a = n-i;
				if(j <= a){
				System.out.print(" ");
			}else{
				System.out.print("*");
			}
			} System.out.println();
		}
        }
}


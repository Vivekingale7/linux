class Example {

	static void m1(int arr1[]){

	System.out.println("Array size " + arr1.length );

	for(int i = 0 ; i < arr1.length ; i++){
			
		System.out.println("a" +arr1[i]);
	}
     }
}

class Test {

	public static void main(String[] args){

		int arr1[] = {1,2,3};
		Example.m1(arr1);

	}
}


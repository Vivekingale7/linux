public class Array1 {

	static int arr[] = new int[10];

	public static void main(String[] args){

		System.out.println(arr);

		for(int i = 0 ; i < arr.length ; i++){

			arr[i] = i*i ;
		
		System.out.println(arr[i]);
		}
		System.out.println("=========================length===============================");
		System.out.println(arr.length);
	}
}

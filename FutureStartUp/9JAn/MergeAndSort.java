class Viv {

	public static void main(String[] args){

	
	int list1[] = {1,2,4};
	int list2[] = {1,3,4};

	int arr[] = list1.concat(list2);

	int ele = Integer.MAX_VALUE ;
	
	for(int i = 0 ; i < arr.length ; i++ ){

		if(ele > arr[i]){

			arr[i] = ele;

		}
		System.out.println(arr[i]);

	}
	
	}

}

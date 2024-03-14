class Viv {

	public static void main(String[] args){
		
	int arr[] = {1,3,5,6};
	int target = 2;
  
	int indexatValue = 0;
    	int i = 0 ; 
	     while (i < arr.length) {
       
	     if (arr[i] == target){
                indexatValue = i; 
		
	    }else if (i == 0 && target < arr[i]){ 
                indexatValue = i; 

	    }else if (i > 0 && target > arr[i-1] && target < arr[i]){

                indexatValue = i; 
	    }else if(target > arr [i]){
	
		indexatValue = arr.length ;
	}
	
            i++;
	    }
        System.out.println(indexatValue);
    }
}

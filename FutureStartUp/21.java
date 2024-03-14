
class Viv {

	public static void main(String[] args){

		int n = 4 ;
		
		Solution obj = new Solution();

//		obj.isBadVersion(n);
		obj.firstBadVersion(n);

	}
}
class VersionControl {

	boolean isBadVersion(int n ){

		int num = 5 ;

		if( num == n ){
			
			return true ;

		else{
		       
			return false;

		}
	}
}

class Solution extends VersionControl {
    
	int firstBadVersion(int n) {
        int low = 1, high = n;
        
        while (low != high){
            int mid = low + (high - low) / 2;
            
            if (isBadVersion(mid)){
		   
		    high = mid;

	    }else{
		    low = mid + 1;
        }
        
        return high;
    }
}
}

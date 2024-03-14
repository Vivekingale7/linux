import java.util.* ;

class Solution {
    
    static int sum = 0 ;
    public static void main(String[] args){
    
    Scanner sc = new Scanner(System.in);
    
    System.out.println("Enter the Element ....");
    
         int n = sc.nextInt() ;
        
      Solution obj = new Solution();


     System.out.println(obj.seriesSum(n));
    
    
  //      System.out.println(n);
    }
    // function to return sum of  1, 2, ... n
    
    
    
    
    int seriesSum(int n) {
        
        
        while(n != 0){
            sum = sum + n ;
            
            n-- ;
            
        }
        return sum;
               
    }
}  


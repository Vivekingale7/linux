class DIncap {
      private int a ;
      public void balancecheck(int b) 
      {
             a = b ;
      System.out.println("Value of a : "+a);
      }
}
public class SBI {
      public static void main(String[] args) 
    {
             DIncap x = new DIncap();
             x.balancecheck(500000);
    }
}        

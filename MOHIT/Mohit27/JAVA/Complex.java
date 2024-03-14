class complexadd 
{
 int a,b,c,d,e,f;
 void complex_add(int a,int b, int c, int d)
 {
 e = a + b;
 f = c + d;
 System.out.println("Addition of Complex Numbers : "+e+"+i"+f);
 }
}
class Complex
{
 public static void main(String s[])
  {
  complexadd obj = new complexadd();
  obj.complex_add(2,3,4,5);
  }
}

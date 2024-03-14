class Overload
{
 int add(int a, int b)
 {
  return a+b;
 }
 int add(int a, int b, int c)
 {
  return a+b+c;
 }
 public static void main(String args[])
 {
  Overload obj = new Overload();
  System.out.println("Sum of a & b : "+obj.add(10,20));
  System.out.println("Sum of a & b & c : "+obj.add(10,20,30));
 }
}

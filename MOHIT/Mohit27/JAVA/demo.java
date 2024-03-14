import java.util.*;
class demo
{
 float real, img;
 public void demo(float a,float b)
 {
   real = a;
   img = b;
 }
 public void ComplexAdd(demo c1,demo c2)
 {
   float real, img;
   real = (c1.real) + (c2.real);
   img = (c1.img) + (c2.img);
   System.out.println("Addition is : ("+real+")i + ("+img+")j ");
 }
 public static void main(String s[])
 { 
  float num1, num2;
  	demo cal = new demo();
  	Scanner Sc = new Scanner(System.in);
  System.out.print("Enter Real part of First Number : ");
  num1 = Sc.nextFloat();
  System.out.print("Enter Imaginary part of First Number : ");
  num2 = Sc.nextFloat();
  	demo com1 = new demo(num1,num2);
  System.out.print("Enter Real part of Second Number : ");
  num1 = Sc.nextFloat();
  System.out.print("Enter Imaginary part of Second Number : ");
  num2 = Sc.nextFloat();
  	demo com2 = new demo(num1,num2);
  Sc.close();
  	cal.ComplexAdd(com1,com2);
 }
}
  

import java.util.*;
  class Test
{
  float real,img;
	public Test()
{
	real=0;
	img=0;
}
public Test(float a, float b)
{
	real=a;
	img=b;
}
public void Display(Test c1,Test c2)
{
		System.out.println("First complex numbers = ("+c1.real+")+("+c1.img+")i");
		System.out.println("second complex numbers = ("+c2.real+")+("+c2.img+")i");
}
public void Addnumbers(Test c1, Test c2)
{
	float real,img;
		real=(c1.real+c2.real);
		img=(c1.img+c2.img);
		System.out.println("Addition of complex numbers = ("+real+")+("+img+")i");
}
public void Subnumbers(Test c1, Test c2)
{
	float real,img;
		real=(c1.real - c2.real);
		img=(c1.img - c2.img);
		System.out.println("Subtraction of complex numbers = ("+real+")+("+img+")i");
}
public void Multinumbers(Test c1,Test c2)
{
	float real,img;
		real=(c1.real*c2.real-c1.img*c2.img);
		img=(c1.real*c2.img+c1.img*c2.real);
		System.out.println("Multiplication of complex number = ("+real+")+("+img+")i");
}
public void Divnumbers(Test c1,Test c2)
{
	float real,img;
		real=(c1.real*c2.real+c1.img*c2.img)/(c2.real*c2.real+c2.img*c2.img);
		img=(c1.img*c2.real-c1.real*c2.img)/(c2.real*c2.real+c2.img*c2.img);
		System.out.println("Division of complex numbers = ("+real+")+("+img+")i");
}
}
public class complex
{
	public static void main(String args[])
{
		float num1,num2;
			Test cal=new Test();
			Scanner Sc=new Scanner(System.in);
			System.out.println("Enter the complex number in a+bi format");
			System.out.print("Enter real part of first number (a) : ");
		num1=Sc.nextFloat();
		System.out.print("Enter img part of first number (b) : ");
		num2=Sc.nextFloat();
			Test com1=new Test(num1,num2);
		System.out.print("Enter the real part of second number (a) : ");
 		num1=Sc.nextFloat();
		System.out.print("Enter the img part of second number (b) : ");
		num2=Sc.nextFloat();
			Test com2=new Test(num1,num2);
	Sc.close();
		System.out.print("\n");
		cal.Display(com1,com2);
		System.out.print("\n");
		cal.Addnumbers(com1,com2);
		cal.Subnumbers(com1,com2);
		cal.Multinumbers(com1,com2);
		cal.Divnumbers(com1,com2);
}
}


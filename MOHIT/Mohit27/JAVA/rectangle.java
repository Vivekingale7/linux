class rectangle
{
double length,breadth;//instance variable//
void area()
{
	double a;
	a=length*breadth;
	System.out.println(a);
}
public static void main(String args[])
{
	rectangle m = new rectangle();
	m.length=7;
	m.breadth=4;
	m.area();//calling the variables
	}
}

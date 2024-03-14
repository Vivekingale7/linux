class thisKey
{ int i;
  public void setvalue(int i)
  {
   this.i = i;
  }
  public void show()
  {
   System.out.println("Value of i : "+i);
  }
  public static void main(String s[])
  {
   thisKeyword obj = new thisKeyword();
   obj.setvalue(10);
   obj.show();
  }
}

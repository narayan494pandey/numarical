class Add
{
int data=50;
	System.out.println("before:"+a.data);
void change(int data);
{
  data=data+50;
  System.out.println("after:"+a.data);
  }
}
   class Test
   {
    public static void main(String[] args)
  {
    Add a=new Add();

	a.change(2);
	
	}
	}
	
/* wap to take usere input using scanner class and print them*/
import java.util.*;
class Demonstration
{
	 public static void main(String[] args)
	 {
		 int n;
		 float f;
		 double d;
		 Scanner sc=new Scanner(System.in);
		 System.out.println("enter the integer number:");
		 n=sc.nextInt();
		  System.out.println("enter the float number:");
		 f=sc.nextFloat();
		  System.out.println("enter the double number:");
		    d=sc.nextDouble();
		  System.out.println("enter the String:");
		  String s=sc.next();
		 System.out.println("integer = "+n);
		 System.out.println("float = "+f);
		 System.out.println("double= "+d);
		 System.out.println("string s="+s);
	 }
}
		
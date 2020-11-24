class Animal
{
public void sound()
{
System.out.println("animal roar");
}
}
class Mammal extends Animal{
public void roar()
{
 System.out.println("mammal roar");
 }
 }
 
 
 class Test
 {
	 public static void main(String[] args)
	 {
  
  Mammal m=new Mammal();
  m.roar();
  m.sound();
  
	 }
 }
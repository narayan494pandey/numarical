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
 class Dog extends Mammal
 {
public void bark()
 {
 System.out.println("dog bark");
 }
 }
 class Test
 {
	 public static void main(String[] args)
	 {
  
  Dog d=new Dog();
   d.bark();
   d.roar();
   d.sound();
	 }
	 }
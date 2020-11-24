class Animal
{
void sound()
{
System.out.println("animal sound");
}
}
class Mammal extends Animal{
void roar()
{
 System.out.println("mammal roar");
 }
 }
 class Dog extends Mammal
 {
 void bark()
 {
 System.out.println("dog bark");
 }
 }
 class Test
 {
	 public static void main(String[] args)
	 {
  Animal a=new Animal();
  Mammal m=new Mammal();
  Dog d=new Dog();
  System.out.println(d instanceof Dog);
   System.out.println(d instanceof Mammal);
    System.out.println(d instanceof Animal);
	 System.out.println(m instanceof Animal);
	 }
	 }
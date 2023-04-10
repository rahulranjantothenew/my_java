import java.util.*;
class A1{
String name;
int age;
  public void getinfo(String name,int age){
    this.name=name;
    this.age=age;
    System.out.println("your name is="+name);
    System.out.println("your name is="+age);

  }
}
public class class_object1 {
    public static void main(String args[]){
       Scanner sc=new Scanner(System.in);
        String name=sc.nextLine();
        int age=sc.nextInt();
        A1 a=new A1();
        
        a.getinfo(name,age);
    }
}

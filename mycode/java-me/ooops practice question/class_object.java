//import java.util.*;
class Student{
    String name;
    int age;
    public void getinfo(){
        System.out.println("your name is =",+this.name);
        System.out.println("your name is =",+this.age);
        
    }
}
public class class_object{
    public static void main(String args[]){
        Student obj=new Student();
        obj.name="rahlu";
        obj.age=11;
        obj.getinfo();
    }
}
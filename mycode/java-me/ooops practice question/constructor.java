class Student{
    String name;
    int age;
    Student(){
        name="ranjan";
        age=22;

    }
    Student(String n){
        name=n;
    }
    Student(String n,int a){
       name=n;
       age=a;
    }
    Student(Student s2){
        this.name=s2.name;
        this.age=s2.age;

    }
    public void info(){
        System.out.println("your name="+name);
        System.out.println("your age="+age);
    }
}
public class constructor {
    public static void main(String args[]){
        Student obj=new Student();
        Student obj1=new Student("raj",44);
        Student obj2=new Student("raj",44);
        obj.info();
        obj1.info();
        obj2.info();

    }
    
}

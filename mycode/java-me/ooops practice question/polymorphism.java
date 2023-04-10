class Student{
    String name;
    int age;
    public void displayinfo(String name){
        System.out.println(name);
    }
    public void displayinfo(int age){
        System.out.println(age);
    }
    /*Student(){
        name="ranjna";
        age=14;
    }*/
}
public class polymorphism {
    public static void main(String args[]){
        Student obj=new Student();
        obj.displayinfo("rahk");
        obj.displayinfo(22);
    }
    
}

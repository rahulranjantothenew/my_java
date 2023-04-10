import java.util.*;
class student {
    int roll;
    String name;
    String course;
    String code;
    public int rollno(){
        return roll;
    }
    public String getname() {
        return name;
    }
    public String getcourse(){
        return course;
    }
    public String getcode(){
       return code;

    }
}
public class oop4{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        student rr=new student();
        rr.rollno();
        System.out.print("enter ur roll no=");
        int roll=sc.nextInt();
        rr.getname();
        System.out.println("enter ur name=");
        String name=sc.nextLine();
        rr.getcourse();
        System.out.print("enter ur course=");
        String course=sc.nextLine();
        rr.getcode();
        System.out.print("enter ur class code=");
        String code=sc.nextLine();
       
       
       
       
        System.out.println("roll no="+roll);
        System.out.println("ur name is="+name);
        System.out.println("ur course is="+course);
        System.out.println("ur code is="+code);




    }
}

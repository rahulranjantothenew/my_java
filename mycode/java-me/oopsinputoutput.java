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
public class oopsinputoutput{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        student rr=new student();
        System.out.print("enter ur roll no=");
        int roll=sc.nextInt();
        System.out.println("enter ur name=");
        String name=sc.nextLine();
        System.out.println("enter ur course=");
        String course=sc.nextLine();
        System.out.println("enter ur class code=");
        String code=sc.nextLine();
        rr.rollno();
        rr.getname();
        rr.getcourse();
        rr.getcode();
        System.out.println("roll no="+roll);
        System.out.println("ur name is="+name);
        System.out.println("ur course is="+course);
        System.out.println("ur code is="+code);




    }
}

import java.lang.*;
import java.util.Scanner;

public class Student {

int student_num;
String name, course;

public Student(String n, String c, int sn) {
    name = n;
    student_num = sn;
    course = c;
}




    public static void main (String[]args) {

    Student pupil = new Student(name, course, student_num);  

        Scanner input = new Scanner(System.in);
            System.out.println("Enter Name:");
            String name = input.nextLine();

            System.out.println("Enter Course:");
            String course = input.nextLine();

            System.out.println("Enter Student Number:");
            int student_num = input.nextInt();


            System.out.println();
            System.out.println("Name:" +name);
            System.out.println("Course:" +course);
            System.out.println("Student Number:" +student_num);



//System.exit(0);   

}

}
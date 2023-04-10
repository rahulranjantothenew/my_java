import java.util.*;
public class handlingexception2{
    public static void main(String args[]){

        int marks[]=new int[3];     //array input lene ke liye javame
        marks[0]=7;
        marks[1]=56;
        marks[2]=6;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the array index");
        int ind=sc.nextInt();


        System.out.println("Enter the number you want to divide the value with");
        int number=sc.nextInt();

        try{
            System.out.println("the value at array index entered is:" + marks[ind]);
            System.out.println("the value of array-value/number is:" + marks[ind]/number);
        }
        catch(Exception e){
            System.out.println("some exception occured");
        }
        
    }
}
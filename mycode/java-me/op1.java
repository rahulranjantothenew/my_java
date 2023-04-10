import java.util.*;
 class inner{
    int id;
    String name;
    int salary;
    public void printd(){
      System.out.println("ur id is ="+id);
        System.out.println("ur name is="+name);
    }
    public int getsl(){
        return salary;
    }
}
public class op1{
public static void main(String args[]){
     inner r=new inner();
    inner r1=new inner();
    inner r2=new inner();
    r.id=12;
    r.name="rakesh";
    r.salary=200; 
    int salary=r.getsl();
    r1.id=10;
    r1.name="navin";
    r1.salary=500;
    int salary1=r1.getsl();
    r2.name="punam";    
    r.printd();
    System.out.println("rakes salary is="+salary);
    r2.id=20;
    r2.salary=900;
    int salary2=r2.getsl();
    r1.printd();
    System.out.println("navin salary is="+salary1);
    r2.printd();
    System.out.println("punam salary is="+salary2);
    
}

}
class St{
    String n;
    int sal;
    public void info(){
        System.out.println("your name is="+n);
        System.out.println("your saluary  is="+sal);
    }
    St(){
        n="rahulranjan";
        sal=998;
    }
}
public class constructor1 {
    public static void main(String args[]){
       St r=new St();
       r.info();
    }
}
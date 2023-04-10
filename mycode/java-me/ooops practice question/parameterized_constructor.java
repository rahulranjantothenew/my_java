class A9{
    String name;
    int amount;
    public void student(){
        System.out.println("your name is="+name);
        System.out.println("your amout is="+amount);
    }
    A9(String name,int amount){
        this.name="nnepi";
        this.amount=9999;

    }
}
public class parameterized_constructor {
    public static void main(String args[]){
        A9 r=new A9();
        r.student();
    }
    
}

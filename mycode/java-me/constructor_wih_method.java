class Constructermethod{
    int id;
    String name;
    int age;
    Constructermethod(){
        id=111;
        name="vanova vabe";
    }
    Constructermethod(int age){
        this.age=age;
    }
    public void info(){
        System.out.println(name);
        System.out.println(this.id);  //this ka mtlb alg hai yenga use kr v skte ho or nhi v;
        System.out.println(age);
    }
}
public class constructor_wih_method{
    public static void main(String args[]){
       Constructermethod r=new Constructermethod();
       Constructermethod r1=new Constructermethod(12);
       r.info();
       r1.info();
    }
    
}

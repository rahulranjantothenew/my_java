class f{
    public void pr3(){

        System.out.println("arun ki bhabhi00000000");
    }
    
    public void pr(){

        System.out.println("arun ki bhabhi");
    }
}
class f1 extends f{
    public void pr1(){
        super.pr();

        System.out.println("this is a boy");
    }
}
public class frequency{
    public static void main(String args[]){
        f1 r=new f1();
        r.pr1();
        r.pr();
       r.pr3();
    }
}

import java.util.*;
interface sampleinterface{
    void meth1();
    void meth2();
}
interface childsampleinterface extends sampleinterface{ //interfac sirf interface ko inheritance kr skte h
    void meth3();
    void meth4();
}
class mysampleclass implements childsampleinterface{  //class inherit nhi kr skta interface ko
    public void meth1(){
        System.out.println("meth1");
    }
    public void meth2(){
        System.out.println("meth2");
    }
    public void meth3(){
        System.out.println("meth3");
    }
    public void meth4(){
        System.out.println("meth4");
    }
}
public class inheritaceininterface{
    public static void main(String args[]){
        mysampleclass o=new mysampleclass();
        o.meth1();
        o.meth2();
        o.meth3();
        o.meth4();
    }
}
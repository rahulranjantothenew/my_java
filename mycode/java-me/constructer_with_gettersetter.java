class constructer1 {
private int id; 
private String name;
constructer1(){   //constructor
    id=12;
    name="rahulranjan";
 }
 public int getid(){
    return id;
}
 public void setid(int i){   //geter or seter ka use hi hota hai jav variable mera private ho too
    this.id=i;
 }
 public String getname(){
    return name;
 }
 public void setname(String n){
    this.name=n;
 }
    
}
public class constructer_with_gettersetter{
public static void main(String args[]){
    constructer1 r=new constructer1();
    System.out.println(r.getid());
    System.out.println(r.getname());
}
    
}
class mythread1 extends Thread{
    public void run(){
        int i=0;
        while(i<400){
            System.out.println("wel come");
           
            try{
                Thread.sleep(80); // 40 second rukk jayega t1 
            }
            catch(InterruptedException e){   //using intrupt method
                e.printStackTrace();
            }
            i++;
        }
    }
}
class mythread2 extends Thread{
    public void run(){
        int i=0;
        while(i<400){
            System.out.println(" mostwel come");
            i++;
        }
    }
}
public class threadmethodinterrupt{
    public static void main(String args[]){
        mythread1 t1=new mythread1();
        mythread2 t2=new mythread2();
        t1.start();
        /*try{
            t1.join();  // join method se phle t1 print hoga fir t2 hoga
        }
        catch(Exception e){
            System.out.println(e);
        }*/
        t2.start();
    }
}
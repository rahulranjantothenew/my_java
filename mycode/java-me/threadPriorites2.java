public class threadPriorites2 extends Thread {
    public threadPriorites2(String name){  //constructer
        super(name);
    }
    public void run(){
        int i=34;
        System.out.println("thank you"+this.getName());
    System.out.println("i am thread:" +Thread.currentThread().getName());
    System.out.println("i am thread:" +Thread.currentThread().getPriority());
    }
    public static void main(String args[]){
        threadPriorites2 t1=new threadPriorites2("-rahul");
        threadPriorites2 t2=new threadPriorites2("-rahul2");
        threadPriorites2 t3=new threadPriorites2("-rahul3 (most important)");  //ye prity liya
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MAX_PRIORITY);
        t2.setPriority(Thread.NOR_PRIORITY);
        t1.start();
        t2.start();
        t3.start();
    }
    
}


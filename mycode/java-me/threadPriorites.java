public class threadPriorites extends Thread {
    public void run(){
    System.out.println("i am thread:" +Thread.currentThread().getName());
    System.out.println("i am thread:" +Thread.currentThread().getPriority());
    }
    public static void main(String args[]){
        threadPriorites t1=new threadPriorites();
        threadPriorites t2=new threadPriorites();
        threadPriorites t3=new threadPriorites();
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.MAX_PRIORITY);
        t1.start();
        t2.start();
        t3.start();
    }
    
}

import java.util.*;

class game{
    public int number;
    public int inputnumber;
    public int noofguesses=0;

    public int getnoofguesses(){
        return noofguesses;
    }
    public void setnoofguesses(int noofguesses){
        this.noofguesses=noofguesses;
    }
    game(){
        Random rand=new Random();
        this.number=rand.nextInt(100);
    }
    void takeuserinput(){
        System.out.print("bhaiya guess kro no ko=");
        Scanner sc=new Scanner(System.in);
        inputnumber=sc.nextInt();
    }
    boolean iscorrectnumber(){
        noofguesses++;
        if(inputnumber==number){
            System.out.format("yes aapne sahi guess kiya hai bro, your point is---- %d ",100-noofguesses);
            return true;
        }
        else if(inputnumber<number){
            System.out.println("Too low....");
        }
        else if(inputnumber>number){
            System.out.println("too high....");
        }
        return false;
    }
}
public class gameof{
    public static void main(String args[]){
        game g=new game();
        boolean b=false;
        while(!b){
            g.takeuserinput();
            b=g.iscorrectnumber();
        }
    }
}
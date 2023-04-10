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
        System.out.print("Rahul number koi choose kijiye =");
        Scanner sc=new Scanner(System.in);
        inputnumber=sc.nextInt();

    }
    boolean iscorrectnumber(){
        noofguesses++;
        int mar=0;
        mar=100-noofguesses;
        if(inputnumber==number){
            System.out.format("yes Rahul aapne sahi guess kiya , aapka score----- %d",mar);
            return true;

        }
        else if(inputnumber<number){
            System.out.println("low....");
        }
        else if(inputnumber>number){
            System.out.println("high....");
        }
        return false;
    }
}
public class nochoosegameofrahul{
    public static void main(String args[]){
        game g=new game();
        boolean b=false;
        while(!b){
            g.takeuserinput();
            b=g.iscorrectnumber();
        }
    }
}
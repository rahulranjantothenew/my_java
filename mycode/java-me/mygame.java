import java.util.*;
import java.util.Random;
import java.util.Scanner;
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
        this.number = rand.nextInt(100);
    }
    void takeuserinput(){
        System.out.print("bhaiya guess kro no ko=");
        Scanner sc=new Scanner(System.in);
        inputnumber=sc.nextInt();
    }
    boolean iscorrectnumber(){
        noofguesses++;
        if(inputnumber==number){
            System.out.format("yes aapne sahi guess kiya hai bro, or %d\n aapne %d time me guess kiya",number,noofguesses);
            return true;
        }
        else if(inputnumber<number){
            System.out.println("Too high....");
        }
        return false;
    }
}
public class mygame{
    public static void main(String args[]){
        game g=new game();
        boolean b=false;
        while(!b){
            g.takeuserinput();
            b=g.iscorrectnumber();
        }
    }
}
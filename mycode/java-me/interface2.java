import java.util.*;
interface bicycle{
    void applybrake(int decrement);
    void speedup(int increment);
}
class avoncycle implements bicycle{
    int speed=7;
   public void applybrake(int decrement){   //interface ka method ko imliment krnahi hoga //, public krna hi hoga
        speed=speed-decrement;
    }
   public void speedup(int increment){     //interface ka method ko imliment krnahi hoga , public krna hi hoga
        speed=speed + increment;
    }
}
public class interface2{
    public static void main(String args[]){
       avoncycle ob5=new avoncycle();
       ob5.applybrake(12);
       ob5.speedup(10);
      System.out.println(ob5.speed);
    }
}
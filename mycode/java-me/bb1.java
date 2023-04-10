import java.util.*;
public class bb1{
    public static void printarry(int arg[]){
        for(int i=0; i<arg.length; i++){
            System.out.print(temp);
        }
        System.out.print();
           

    }
    public static void main(String args[]){
        int arg[]={9,8,7,6,5,4,3,2,1};
        for(int i=0; i<arg.length-1; i++){
            for(int j=0; j<arg.length-i-1; i++){
                if(arg[j]>arg[j+1]){
                    int temp;
                    temp=arg[j];
                    arg[j]=arg[j+1];
                    arg[j+1]=temp;
                }

            }
        }
        printarry(arg);
    }
}
import java.util.*;
public class bb2{
    public static void main(String args[]){
        int ar1[]={9,3,4,5,6,5};
        for(int i=0; i<ar1.length-1; i++){
            for(int j=0; j<ar1.length-i-1; i++){
                if(ar1[i]>ar1[i+1]){
                int temp;
                temp=ar1[j];
                ar1[j]=ar1[j+1];
                ar1[j+1]=temp;
                }
            }
        }
        for(int i=0;i<ar1.length; i++){
            System.out.print(temp+" ");
        }
    }
}
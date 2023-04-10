import java.util.*;
public class sel{
    public static void selprint(int ar2[]){
        for(int i=0; i<ar2.length; i++){
            System.out.print(ar2[i]+" ");
        }


    }
    public static void main(String args[]){
        int ar2[]={4,5,6,7,3};
        for(int i=0; i<ar2.length; i++){
            if(ar2[i]>ar2[i+1]){
                int temp;
                temp=ar2[i];
                ar2[i]=ar2[i+1];
                ar2[i+1]=temp;
            }
        }
        selprint(ar2);


    }
}
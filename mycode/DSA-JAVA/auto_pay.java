import java.util.*;
public class auto_pay{
    public static int oddsum(int n){
    int temp=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            temp+=i;
        }
    }
    return temp;
}
    
public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    
    int n=sc.nextInt();

System.out.println(oddsum(n));
}
    
}

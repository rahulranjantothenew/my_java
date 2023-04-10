public class r1{
    public static int r2(int x,int n){
        if(n==0){
            return 1;
        }
        if(x==0){
            return 0;
        }
        if(n % 2==0){
            return r2(x,x/2)*r2(x,n/2);
        }else{
            return r2(x,n/2)*r2(x,n/2)*x;
        }
       
        
    }
public static void main(String args[]){
    int x=2,n=2;
    System.out.println(r2(x,n));
}
}
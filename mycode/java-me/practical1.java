import java.util.*;
public class practical1
{
    public static void main(String args[])
    {
        System.out.println("Enter a five integer value");
        Scanner s=new Scanner(System.in);
        int a[]=new int[5];
        for(int i=0;i<a.length;i++)
        {
            a[i]=s.nextInt();
        }
        int sum=0;
        for(int j=0;j<a.length;j++)
        {
            sum=sum + a[j];
            System.out.println("sum="+sum);
        }
    }

import java.util.Scanner;
public class Factor
{
   public static void main(String args[])
   {
     int n;
     int i=2;
     Scanner sc=new Scanner(System.in);
     System.out.print("number:");
     n=sc.nextInt();
    while(n>1)
    {  
     if(n%i==0)
     {
      System.out.print(i+",");
        n=n/i;
     }
    else
     {
        i++;
     }
    } 
}
}
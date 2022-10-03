import java.util.*;

class Product
{
  public static void main(String arg[])
   {
      Scanner sc = new Scanner(System.in);
     
      int [][] a = new int[3][3];
      System.out.println("enter the integers:"); 
      for(int i=0;i<3;i++)	
       { 
          for(int j=0;j<3;j++)
          {
            a[i][j] = sc.nextInt();
          }
       }
       
      for(int i=0;i<3;i++)	
       { 
          for(int j=0;j<3;j++)
          {
            System.out.print(""+a[i][j]);
          }
         
            System.out.print("\n");
       }
      System.out.println("transpose is:");
      for(int j=0;j<3;j++)	
       { 
          for(int i=0;i<3;i++)
          {
            System.out.print(""+a[i][j]);
            
          } 
          System.out.print("\n");         
      }
   }
}
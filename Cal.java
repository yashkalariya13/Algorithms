import java.util.Scanner;
public class Cal
{
  public static void main(String args[])
   {
    int i,a,b;
    Scanner input=new Scanner(System.in);
    System.out.println("1.addition   2.substraction   3.multiplextion   4.division   ");
    System.out.print("enter your choice:");
    i=input.nextInt();
    System.out.print("enter number a:");
     a=input.nextInt();
     System.out.print("enter number b:");
     b=input.nextInt();
     
   
     switch(i)
      {
         
        
        case 1:float add;
            add=a+b;
            System.out.println("addition of two number is: " +add);
            break;
        case 2:float sub;
            sub=a-b;
            System.out.println("substraction of two number is: " +sub);
            break;
       case 3:float mul;
            mul=a*b;
            System.out.println("multiplextion of two number is: " +mul);
            break;
       case 4:float div;
            div=a/b;
            System.out.println("division of two number is: " +div);
            break;
       default:System.out.println("please enter a valied choice!..");
       }
    
   }
}
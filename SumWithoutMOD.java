import java.util.*;
public class SumWithoutMOD{
    int summation(String s)
    {
        int sum=0;
        for(int i=0;i<s.length();sum=sum+s.charAt(i)-48,i++);
        return sum;
    }
    
    public static void main(String args[]){
        System.out.println("Enter a number:");
        System.out.println(new SumWithoutMOD().summation(new Scanner(System.in).next()));
    }
}
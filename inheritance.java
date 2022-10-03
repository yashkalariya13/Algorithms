import java.util.*;
class inheritance {
    int a;
    int b;
    inheritance(int x,int y){
        a=x;
        b=y;
    }
    void add(inheritance A){
        int c= A.a+A.b;
        System.out.println("Sum of the a and b is : "+c);
    }
    void sub(inheritance A){
        int c=A.a-A.b;
        System.out.println("Subraction of a and b is: "+c);
    }
    void mul(inheritance A){
        int c =A.a*A.b;
        System.out.println("Multiplication of a and b is :"+c);
    }
    void div(inheritance A){
        int c=A.a/A.b;
        System.out.println("Division of a and b is :"+c);
    }
public class chodu{
    public static void main(String[] args) {
        inheritance f =new inheritance(5,3);
        f.add(f);
        f.sub(f);
        f.mul(f);
        f.div(f);

    }
  }
}

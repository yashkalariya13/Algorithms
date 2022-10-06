import java.util.*;
public class Complex {
		int re,im;
		void setData() {
			System.out.println("Enter real & imaginary no. ");
			Scanner sc=new Scanner(System.in);
			re=sc.nextInt();
			im=sc.nextInt();
		}
		Complex add(Complex c1,Complex c2) {
			Complex obj=new Complex();
			obj.re=c1.re+c2.re;
			obj.im=c1.im+c2.im;
			return obj;
		}
		void display() {
			System.out.println(re+" "+im);
		}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Complex c1=new Complex();
		Complex c2=new Complex();
		c1.setData();c2.setData();
		Complex obj=c1.add(c1,c2);
		obj.display();
		
		
		
		
	}

}

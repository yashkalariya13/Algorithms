import java.util.Scanner;
public class temperatureConversion {
    public static void main(String[] args){
        float celsius,fahrenheit;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter temperature in Fahrenheit :");
        fahrenheit=input.nextInt();
        celsius=(fahrenheit - 32)*5/9;
        System.out.println("Celsius = "+celsius);
        input.close();
    }
}

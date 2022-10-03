import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[] a = new int[5];
        System.out.println("Enter the elements of the array: ");
        for (int i = 0; i < a.length; i++) {
            a[i] = sc.nextInt();
        }
        System.out.println("Enter the value to be searched: ");
        int x = sc.nextInt();
        sc.close();
        long start = System.nanoTime();
        int i = linear(a, x);
        long end = System.nanoTime();
        long execution = end - start;
        double seconds = (double) execution/ 1000000000.0;
        if (i == -1){
            System.out.println("Not Found");
        }
        else {
            System.out.println("Found at index: " + i);
        }
        System.out.println("Execution time: " + seconds + " seconds");
    }
    public static int linear(int[] a, int x){
        int index = 0;
        while (index< a.length){
            if (a[index] == x){
                return index;
            }
            index++;
        }
        return -1;
    }
}
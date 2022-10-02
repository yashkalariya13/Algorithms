import java.util.ArrayList;
public class Recursion {
    public static void main(String[] args) {
        int[] arr={1,2,3,4,5,6,6};   //7 i=7-1 6
        int target=123456;
        System.out.println((findallindex(arr,6,0)));
//        int digits=(int)(Math.log10(target))+1;
//        System.out.println(digits);
    }

    public static int fibo(int n) {
        if (n<2) {
            return n;
        }
        return fibo(n-1)+fibo(n-2);
    }

    public static int bs(int[] arr,int target) {
        int s=0;
        int e=arr.length - 1;
        while(s<e)
        {
            int mid=s+(e-s)/2;
            if(arr[mid]>target) {
                    e=mid-1;
            }
            if (arr[mid]<target) {
                s=mid+1;
        }
            if(arr[mid]==target) {
                return mid;
        }

        }
        return -1;
    }

    public static int BSusingRecusrsion(int[] arr, int target ,int s,int e) {
        int mid=s+(e-s)/2;

            if (s>e) {
                return -1;
            }

            if (target<arr[mid])
            {
                return BSusingRecusrsion(arr,target,s,e=mid-1);
            }

            if (target>arr[mid]) {
                return BSusingRecusrsion(arr, target, s = mid + 1, e);
            }
            return mid;
    }

    public static int sumofn(int n) {
        if (n<=1) {
            return 1;
        }

        return n+sumofn(n-1);
    }

    public static int fact(int n) {
        if (n<=1) {
            return 1;
        }
        return n*fact(n-1);

    }

    public static int max(int[] nums,int i,int max) {
        if (i==nums.length) {
            return max;
        }

        if (nums[i]>max) {
            max=nums[i];
        }
        return max(nums,++i,max);
    }

    public static int sumofDigits(int n) {
        if(n%10==n) {
            return n;
        }
        return sumofDigits(n/10) + n%10;
    }

    public static int reverseDigit(int n) {
        int rev=0;
        while(n!=0) {
            rev=(rev*10)+(n%10);
            n/=10;
        }
        return rev;
    }
    static int rev=0;
    static int i=0;
    public static int revusingRecursion(int n) {
        if (n==0)
        {
            return rev;
        }
        rev=(rev*10)+(n%10);
        n/=10;
        return revusingRecursion(n);
    }

    public static Boolean sortedarr(int[] nums)
    {
        if (i>=nums.length-1) {
            return true;
        }

        if (nums[i]<=nums[i+1]) {
            i++;
            return sortedarr(nums);
        }
        return false;

    }

    public static Boolean sorted(int[] nums,int j) {
        if (i>=nums.length-1) {
            return true;
        }
        return (nums[j]<=nums[j+1] && sorted(nums,++i));


    }

    public static int linearSearchUsingRecursion(int[] nums,int target) {
        if (nums[i]==target ) {
                return i;
        }
        i+=1;
        return linearSearchUsingRecursion(nums,target);

    }


       static ArrayList<Integer> indexNos = new ArrayList<Integer>();
    public static ArrayList findallindex(int[] nums,int target,int i ) {
        if (i==nums.length-1) {
            return indexNos;
        }
        if (nums[i]==target) {
            indexNos.add(i);
        }
        return findallindex(nums,target,i+=1);

    }



}


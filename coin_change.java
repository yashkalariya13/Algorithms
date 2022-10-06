//given coin denominations calculate the number of ways it can be summed up to the given amount
// HERE ORDER IS NOT IMPORTANT 
import java.util.*;
public class coin_change {
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int deno[]=new int[n];
        for(int i=0;i<n;i++)
        deno[i]=in.nextInt();
        int sum=in.nextInt();
        int t[][]=new int[n+1][sum+1];
        for(int i=0;i<n+1;i++)
        {
            for(int j=0;j<sum+1;j++)
            {
                if(i==0)
                t[i][j]=0;
                if(j==0)
                t[i][j]=1;
            }
        }
        for(int i=1;i<n+1;i++)
        {
            for(int j=1;j<sum+1;j++)
            {
                if(deno[i-1]<=j)
                t[i][j]=t[i][j-deno[i-1]]+t[i-1][j];
                else
                t[i][j]=t[i-1][j];
            }
        }
        System.out.println(t[n][sum]);
        /*int dp[]=new int[sum+1];
        dp[0]=1;
        for(int i=0;i<n;i++)
        {
            for(int j=deno[i];j<sum+1;j++)
            {
                dp[j]+=dp[j-deno[i]];
            }
        }
        System.out.println(dp[sum]);*/
        in.close();
    }
    
}

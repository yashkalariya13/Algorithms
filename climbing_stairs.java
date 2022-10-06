// given a stair number n we have to go to to zeroth stair. At most we can jump down 3 stairs i.e., possible moves are from n to n-1 , n to n-2 and n to n-3
import java.util.*;
public class climbing_stairs {
    public static void main(String args[])
    {
        Scanner in=new Scanner(System.in);
        int n=in.nextInt();
        int dp[]=new int[n+1];
        dp[0]=1;
        for(int i=1;i<=n;i++)
        {
            if(i==1)
            dp[i]=dp[i-1];
            else if(i==2)
            dp[i]=dp[i-1]+dp[i-2];
            else
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        System.out.println(dp[n]);
        in.close();
    }
    
}
//made using tabulation 
//time complexity : O(N)
/**this above questions can be tweaked into a question with variable jumps
 * Suppose in every level jump is given and we have to reach n from zeroth level
 * int jumps[]=new int[n];
 * int dp[]=new int[n+1];
 * dp[n]=1; // because to go from n to n we only have one operation stay there
 * for(int i=n-1;i>=0;i--)
 * {
 *  for(int j=1;j<=jumps[i] && i+j<dp.length;j++)
 * dp[i]+=dp[i+j];
 * }
 * System.out.println(dp[0]);
 * time complexity will be O(n*n);
 */
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int max = prices[0] ;
        int min = prices[0] ;
        int c = 0;
        int total_profit;
        if(prices.size() > 1)
        // {
        // for (int i = 0 ; i < prices.size()-1; i++)
        // {
            
        //     if (prices[i] < min)
        //     {
        //         min = prices[i];
        //         c++;
        //     }
            
        // }
            // cout << c <<" "<< min ;
        int max = prices[0] ;
        for (int j = 0 ; j < prices.size() ; j++)
        {
            if (prices[j] > max)
            {
                max = prices[j];
            }
        }
        int lastOcc(int prices[],int n,int max){
            if (n==0){
                return -1
            }
            int subindex = lastOcc(prices + 1,n-1,max)
            if(subindex==-1){
                if(arr[0]==key){
                    return 0;
                }
                else{
                    return -1;
                }
            }
            else{
                return subIndex + 1;
            }
        }
        m=lastocc()
         {
         for (int i = 0 ; i < m; i++)
         {
            
             if (prices[i] < min)
             {
                 min = prices[i];
                 c++;
             }
            
        }
             cout << c <<" "<< min ;

        if ( max >  min)
        total_profit = max - min;
        
        return total_profit;
        }
        else
        {
            return 0 ;
        }
        
        
    }
};
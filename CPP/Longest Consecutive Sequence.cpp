class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        //  unordered_set<int>s;
        // for(int i=0;i<n;i++)
        // {
        //     s.insert(nums[i]);
        // }
        // int ans=0;
        // for(int i=0;i<n;i++)
        // {
        //     if(s.find(nums[i]-1)==s.end())
        //     {
        //         int j=nums[i]+1;
        //         while(s.find(j)!=s.end())
        //             j++;
        //         ans=max(ans,(j-nums[i]));
        //     }
        // }
        // return ans;
        int ans=0,c=1;
        sort(nums.begin(),nums.end());
        if(n==1)return 1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]+1==nums[i+1]){
                c++;
                ans=max(ans,c);
            }
           else if(nums[i]==nums[i+1])
           {
                ans=max(ans,c);
                continue;
           }
            else
            {
                 ans=max(ans,c);
                  c=1;
              
            }
        }
        return ans;
    }
};
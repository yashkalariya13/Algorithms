//  15. 3Sum Leetcode
// problem:https://leetcode.com/problems/3sum/
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        if(n<3) return v;
        // we use set because we do not need duplicate pairs
        set<vector<int> >s;
        // consider it as 2sum in a loop
        for(int i=0;i<n-2;++i)
        {
            int t=-nums[i];
            int l=i+1,r=n-1;
            if(i==0||(i>0&&nums[i]!=nums[i-1]))
            {
                while(l<r)
                {
                    if(l==i) ++l;
                    if(r==i) --r;
                    if(nums[l]+nums[r]==t){
                        int a[3];a[0]=nums[i];a[1]=nums[l];a[2]=nums[r];
                        s.insert({a[0],a[1],a[2]});
                        ++l;--r;
                    }
                    else if(nums[l]+nums[r]<t) ++l;
                    else if(nums[l]+nums[r]>t) --r;
                }
            }
        }
        for(auto it=s.begin();it!=s.end();++it){
            v.push_back(*it);
        }
        return v;
    }
};

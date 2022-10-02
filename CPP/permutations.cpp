class Solution {
public:
     void rec(int pos, vector<int> &nums, vector<vector<int>> &ans){
        if(pos == nums.size()){
            ans.push_back(nums);
        }
    else{
        for(int i=pos; i<nums.size(); i++){
            swap(nums[i], nums[pos]);
            rec(pos+1, nums, ans);
            swap(nums[i], nums[pos]);
        }
      }
     }
    vector<vector<int>> permute(vector<int>& nums) {
          vector<vector<int>>ans;
          rec(0,nums,ans);
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
         if(!root)
            return 0;
         int ans = 0;
         queue<pair<TreeNode*,int>> q;
         q.push({root,0});
         while(!q.empty()){
         int size=q.size();
         int mini=q.front().second;
         int first,last;
         for(int itr = 0; itr<size;itr++)
         {
               long long int cur_id = q.front().second-mini;
               TreeNode* temp = q.front().first;
                q.pop();
                if(itr==0) 
                    first = cur_id;
                if(itr==size-1) 
                    last = cur_id;
                if(temp->left)
                    q.push({temp->left,cur_id*2+1});
                if(temp->right)
                    q.push({temp->right,cur_id*2+2});
            }
            ans = max(ans, (last-first+1));
        }
        return ans;
    }
};
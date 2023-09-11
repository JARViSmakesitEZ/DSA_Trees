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
    void traverse(TreeNode* root,vector<int> nums,int sum,vector<vector<int>>& ans,int targetSum){
        if(!root){
            return;
        }
        
        nums.push_back(root->val);
        if(sum+root->val==targetSum && !root->left && !root->right){
            ans.push_back(nums);
            return;
        }

        else{
            traverse(root->left,nums,sum+root->val,ans,targetSum);
            traverse(root->right,nums,sum+root->val,ans,targetSum);
        }
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        traverse(root,{},0,ans,targetSum);
        return ans;
    }
};
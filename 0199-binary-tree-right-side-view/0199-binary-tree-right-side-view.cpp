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
    void traverse(TreeNode* root,vector<int>& ans,int depth,int& maxDepth){
        if(!root){
            return;
        }
        if(depth>maxDepth){
            maxDepth = depth;
            // EVERY TIME WE COME TO A NEW LEVEL , WE PUSH IT
            ans.push_back(root->val);
        }
        traverse(root->right,ans,depth+1,maxDepth);
        traverse(root->left,ans,depth+1,maxDepth);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        int depth = 0;
        int maxDepth = -1;
        traverse(root,ans,depth,maxDepth);
        return ans;
    }
};
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*
  * Using preorder and record the node's level in every stage,then push them into the vector.
  */
 
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        tLevel = -1;
        if(root == nullptr){
            return {};
        }  
        traverse(root,0);
        vector<vector<int>> Ans(ans.rbegin(),ans.rend());
        return Ans;
    }
    void traverse(TreeNode * head,int level){
        if(level > tLevel){
            vector<int> li;
            li.push_back(head->val);
            tLevel += 1;
            ans.push_back(li);
        }
        else{
            ans[level].push_back(head->val);
        }
        if(head->left != nullptr){
            traverse(head->left,level+1);
        }
        if(head->right != nullptr){
            traverse(head->right,level+1);
        }
    }
    vector<vector<int>> ans;
    int tLevel;
};

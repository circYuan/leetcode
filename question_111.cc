/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /* Minimum Depth of Binary Tree. This question is asked to find the min length from root to leaves. I use recursive method,finding every
    leave and comparing whose length is shortest.The fastest method is recoding the current shortest length, if any non leaf node has the
    longest length than the current leaf length, it can stop to find the leaf on this path. When I created this file, I got this idea.
 
class Solution {
public:
    int min = INT_MAX;
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        depth(root,0);
        return min;
    }
    void depth(TreeNode * root,int d){
        d += 1;
        if(root != nullptr){
            if(root->left == nullptr && root->right == nullptr){
                if(min > d){
                    min = d;
                }
            }else{
                depth(root->right,d);
                depth(root->left,d);
            }
        }
    }
};

#include<bits.stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    
    bool f(TreeNode* root,long mini,long  maxi){
        
        if(!root)return true;
        if(root->val>=maxi || root->val<=mini)return false;
    
        bool left=f(root->left,mini,root->val);
        bool right=f(root->right,root->val,maxi);    
        
        return  left&&right;
        
    }
    
    bool isValidBST(TreeNode* root) {
       
        return f(root,LONG_MIN,LONG_MAX);
        
    }
};

543. Diameter of Binary Tree

class Solution {
public:
    int ans = -1;
    int height(TreeNode* root){
        if(root == nullptr)return 0;
        int left = height(root->left);
        int right = height(root->right);
        ans = max(ans,left+right);
        return 1 + max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};

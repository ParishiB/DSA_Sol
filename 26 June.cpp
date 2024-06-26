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
    vector<int> vals;

    TreeNode* balanceBST(TreeNode* root) {
        trav(root);
        return buildBST(0,vals.size()-1);
    }

    void trav(TreeNode* root){
        if(root == nullptr)return;
        trav(root->left);
        vals.push_back(root->val);
        trav(root->right);
    }
    
    TreeNode* buildBST(int l, int r){
        if(l>r)return nullptr;
        int mid = (l+r)/2;
        TreeNode *root = new TreeNode(vals[mid]);
        root->left = buildBST(l,mid-1);
        root->right = buildBST(mid+1,r);
        return root;
    }
};

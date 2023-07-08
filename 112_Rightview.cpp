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
 */void func(Node* root, vector<int>&ans,int level){
    if(!root)return ;
    if(ans.size()==level)ans.push_back(root->data);
    func(root->right,ans,level+1);
    func(root->left,ans,level+1);
}
vector<int> leftView(Node *root)
{
   vector<int>ans;
   func(root,ans,0);
   return ans;
}

 #define ll long long
class Solution {
public:
    void dfs(TreeNode* root,ll & ans,ll temp){
        if(root->left==NULL && root->right==NULL){
            temp=temp*10+root->val;
            ans+=temp;
            return ;
        }
        temp=temp*10+root->val;
        if(root->left)dfs(root->left,ans,temp);
        if(root->right)dfs(root->right,ans,temp);
    }
    int sumNumbers(TreeNode* root) {
        ll ans=0;
        dfs(root,ans,0);
        return ans;
    }
};

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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>result;
        if(root==NULL)return result;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int poppedvalue;
        while(q.size()){
            TreeNode* curr=q.front();
            if(curr!=NULL)poppedvalue=curr->val;
            q.pop();
            if(curr==NULL){
                result.push_back(poppedvalue);
                q.push(NULL);
                if(q.front()==NULL)break;
            }
            else{
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        return result;
    }
};

void func(Node* root, vector<int>&ans,int level){
    if(!root)return ;
    if(ans.size()==level)ans.push_back(root->data);
    func(root->left,ans,level+1);
    func(root->right,ans,level+1);
}
vector<int> leftView(Node *root)
{
   vector<int>ans;
   func(root,ans,0);
   return ans;
}

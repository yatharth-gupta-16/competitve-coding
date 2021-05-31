vector<int>ans;
 
void inorder(TreeNode* A)
 {
     if(A==NULL)
     {
         return;
     }
     inorder(A->left);
     ans.push_back(A->val);
     inorder(A->right);
 }
vector<int> Solution::inorderTraversal(TreeNode* A) {
    
    ans.clear();
    inorder(A);
    return ans;
}

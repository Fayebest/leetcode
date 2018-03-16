/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
		if(root == NULL)
			return true;
		int L,R;
		TreeNode *temp = root;
		while(temp->left != NULL)   temp = temp->left;
		L = temp->val;
        temp = root;
		while(temp->right != NULL)  temp = temp->right;
		R = temp->val;
		return judge(root,L,R);
    }
    
    bool judge(TreeNode* root,int L,int R)
    {
        if(root)
		{
            bool temp;
			if(root->left && root->val > root->left->val && root->left->val > L)
				temp = judge(root->left,L,root->val);
			if(temp == false)	return false;
			if(root->right && root->val < root->right->val && root->right->val <R)
				return temp = judge(root->right,L,root->val);
		}
		return true;
    }
};
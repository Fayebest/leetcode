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
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root->left)
		root->left = trimBST(root->left,L,R);
        if(root->right)
		root->right = trimBST(root->right,L,R);
		if(root){
        if(root->val < L || root->val > R )
		{
			if(root->left ==  NULL )
				root = root->right;
			else if(root->right== NULL)
				root = root->left;
			else{
				TreeNode *temp = root->right;
				while(temp->left != NULL) temp = temp->left;
				root->val = temp->val;
				if( temp->right != NULL )
				{
					temp->val = temp->right->val;
					temp->left = temp->right->left;temp->right = temp->right->right;
				}
				else temp = NULL;
			}
		}
		}
		return root;
    }
};



//prefect edition
class Solution {
public:
    TreeNode* trimBST(TreeNode* root, int L, int R) {
        if(root == NULL) return NULL;
        if(root->val < L){
            return trimBST(root->right, L, R);
        }else if(root->val > R){
            return trimBST(root->left, L, R);
        }else{
            root->left = trimBST(root->left, L, R);
            root->right = trimBST(root->right, L, R);
            return root;
        }
    }
};
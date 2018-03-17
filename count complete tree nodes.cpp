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
    int countNodes(TreeNode* root) {
		if(root == NULL)	return 0;
        int high = getHigh(root);
		int hh=1;
		int minindex =0,maxindex = pow(2,high-1);
		while(minindex <= maxindex)
		{
			int htemp = 0;
			TreeNode *temp = root;
			temp = temp->left;
			while(temp->right)
			{
				htemp++;
				temp = temp->right;
			}
			if( htemp == high - hh )
			{	
				root =root->right;
				
			}
			else root = root->left;
				
			
		}
    }
	
	int getHigh(TreeNode* root){
		int high =0;
		while(root!=NULL)
		{
			root = root->left;
			high++;
		}
		return high;
	}
	
};
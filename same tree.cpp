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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if( p && q )
        {
            if(p->val != q->val)
                return false;
            else
            {
                bool temp =  isSameTree(p->left,q->left);
                if(temp == false)
                    return temp;
                temp =  isSameTree(p->right,q->right);
                return temp;
            }
        }
        else if( (p== NULL && q!= NULL) || (p!= NULL && q==NULL ) )
            return false;
        else return true;
    }
};
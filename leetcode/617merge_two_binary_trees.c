/* Given two binary trees and imagine that when you put one of them to cover the other, some nodes of the two trees are overlapped while the others are not.
You need to merge them into a new binary tree. The merge rule is that if two nodes overlap, then sum node values up as the new value of the merged node. Otherwise, the NOT null node will be used as the node of new tree. 
给定两个二叉树，并想象当你把其中一个覆盖另一个时，两个树的一些节点是重叠的，而另一个没有。
您需要将它们合并到一个新的二叉树中。 合并规则是如果两个节点重叠，则sum节点值作为合并节点的新值。 否则，NOT空节点将被用作新树的节点。
*/



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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        TreeNode *res=NULL;
        helper(t1,t2,res);
        return res;
    }
    void helper(TreeNode *t1,TreeNode *t2,TreeNode *&res)
    {
        if(!t1&&!t2)
            return ;
        else if(t1&&!t2)
        {
            res=new TreeNode(t1->val);//开辟的新节点就是t1
            helper(t1->left,NULL,res->left);
            helper(t1->right,NULL,res->right);
        }
        else if(!t1&&t2)
        {
            res = new TreeNode(t2->val);//开辟的新节点就是t2
            helper(NULL,t2->left,res->left);
            helper(NULL,t2->right,res->right);
        }
        else if(t1&&t2)
        {
            res = new TreeNode(t1->val+t2->val);//开辟的新节点就是t1和t2的和
            helper(t1->left,t2->left,res->left);
            helper(t1->right,t2->right,res->right);
        }
    }
};

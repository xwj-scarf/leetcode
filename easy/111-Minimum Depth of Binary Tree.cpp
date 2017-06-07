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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL)return 0;
        q.push(root);
        int ans=0;
        while(!q.empty())
        {
            ans++;
            int siz = q.size();
            for(int i = 0;i<siz;i++)
            {
                TreeNode*u= q.front();
                q.pop();
                if(u->left==NULL&&u->right==NULL)return ans;
                if(u->left!=NULL)q.push(u->left);
                if(u->right!=NULL)q.push(u->right);
            }
        }
        return ans;
    }
};

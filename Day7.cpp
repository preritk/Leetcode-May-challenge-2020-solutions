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
    void Inorder(TreeNode* root, int &level1,int k, int num,int &parent1, int ovParent){
        if(root==NULL){
            return;
        }
        k++;
        if(root->val==num){
            parent1= ovParent;
            level1 = k;
            return;
        }
        if(root->left)
        Inorder(root->left,level1,k,num,parent1,root->val);
        if(root->right)
        Inorder(root->right,level1,k,num,parent1, root->val);
    }
    void Inorder1(TreeNode* root, int &level2,int k, int num, int &parent2, int ovParent){
        if(root==NULL){
            return;
        }
        k++;
        if(root->val==num){
            parent2=ovParent;
            level2 = k;
            return;
        }
        if(root->left)
        Inorder1(root->left,level2,k,num, parent2,root->val);
        if(root->right)
        Inorder1(root->right,level2,k,num,parent2,root->val);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(x==y)
            return false;
        int level1=-1,level2=-1,parent1=-1,parent2=-1;
        int k=0;
        Inorder(root,level1,k,x,parent1,-1);
        k=0;
        Inorder1(root,level2,k,y,parent2,-1);
        if(level1!=-1 && level2!=-1 && parent1!=parent2){
            return level1==level2;
        }
        return false;
    }
};

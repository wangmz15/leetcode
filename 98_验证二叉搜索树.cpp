//
// Created by 王苜子 on 2018/5/13.
//

#include <iostream>
using namespace std;

#include "stack"

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void goAlongLeftBrach(stack<TreeNode*> *s, TreeNode*root){
        while (root){
            s->push(root);
            root = root->left;
        }
    }
    bool isValid(TreeNode*root, long *max){
        if(!root) return true;
        stack<TreeNode*> *s = new stack<TreeNode*>;
        TreeNode *root1 = root;
        goAlongLeftBrach(s,root1);
        while(!s->empty()){
            TreeNode* now = s->top();
            if(now->val <= *max ) return false;
            *max = now->val;
            s->pop();
            if(now->right){
//                s.push(now->right);//如果有右子树不是简单的入栈，这样就不是中序遍历了

//                if(now->right->val <= *max) return false;//如果这种递归调用的思想，会有很多细节需要处理
//                *max = now->right->val;
//                return isValid(now->right,max);

                goAlongLeftBrach(s,now->right);//还是按照课间的思想靠谱，如果有右子树，仅仅把右子树的左链也入栈，
            }
        }
        return true;
    }
    bool isValidBST(TreeNode* root) {//中序遍历的结果是有序的嘛？
        long *max = new long(LONG_MIN);
        return isValid(root,max);
    }
};
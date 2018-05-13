//
// Created by 王苜子 on 2018/5/13.
//
#include <iostream>
#include "queue"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
//        if(!root)return 0;
//        if(!root->left && !root->right) return 1;
//
//        return max(maxDepth(root->left),maxDepth(root->right))+1; //递归 太简单了

        //层次遍历 相当于宽搜 最后计算层数
        if(!root) return 0;
        queue<TreeNode*>q;
        q.push(root);
        int res = 0;
        while(!q.empty()){
            res++;
            int size = q.size();//很重要，如果放在循环里面的话，size是随时在变的
            for (int i = 0; i < size; ++i) {
                TreeNode* now = q.front();
                q.pop();
                if(now->left)q.push(now->left);
                if(now->right)q.push(now->right);
            }
        }
        return res;

    }
};

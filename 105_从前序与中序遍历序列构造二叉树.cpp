//
// Created by 王苜子 on 2018/5/13.
//
#include <iostream>
#include "vector"
#include "map"
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };



class Solution {

public:

    TreeNode* buildTreeHelper(int pleft,int pright, int ileft, int iright,vector<int>& preorder,vector<int>& inorder) {
        TreeNode *root = new TreeNode(preorder[pleft]); // *root 不能直接等于TreeNode，而是要用new
        int i_root_pos = -1;
        for (int i = 0; i < inorder.size(); ++i) {//最后还是用了线性查找的方法
            if(preorder[pleft] == inorder[i]){
                i_root_pos = i;
                break;
            }
        }
        int left_size = i_root_pos-ileft;
        int right_size = iright - i_root_pos;

        if(left_size > 0)root ->left = buildTreeHelper(pleft+1, pleft+left_size, ileft, i_root_pos-1,preorder,inorder);
        if(right_size > 0)root->right = buildTreeHelper(pright-right_size+1, pright, i_root_pos+1, iright,preorder,inorder);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        map<int,int> pos; //不知道为什么map作为参数传进去会超内存
//        for (int i = 0; i < inorder.size(); ++i) {
//            pos[inorder[i]] = i;
//        }
        if(preorder.empty() || inorder.empty()) return NULL;
        return buildTreeHelper(0,preorder.size()-1,0,inorder.size()-1,preorder,inorder);
    }

};

//
// Created by 王苜子 on 2018/5/12.
//

#include <iostream>
#include "vector"
#include "queue"
#include <tuple>

using namespace std;

//
// Created by 王苜子 on 2018/5/12.
//

class Solution {
public:

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int row = image.size();
        int col = image[0].size();
        queue<int> left;
        queue<int> right;
        int color = image[sr][sc]; //审题，题目是说的和该域相同的颜色的都要染色
        if(color == newColor) return image; //要有这一句，因为如果联通域已经等于newColor了，就不用再染色了
        left.push(sr);
        right.push(sc);
        while(!left .empty()){
            int i = left.front();
            int j = right.front();
            image[i][j] = newColor;
            if(i > 0 && image[i-1][j] == color){
                left.push(i-1);
                right.push(j);
            }
            if(i < row-1 && image[i+1][j] == color){
                left.push(i+1);
                right.push(j);
            }
            if(j > 0 && image[i][j-1] == color){
                left.push(i);
                right.push(j-1);
            }
            if(j < col-1 && image[i][j+1] == color){
                left.push(i);
                right.push(j+1);
            }
            left.pop();
            right.pop();
        }
        return image;
    }
};
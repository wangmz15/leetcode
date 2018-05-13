//
// Created by 王苜子 on 2018/5/10.
//
#include <iostream>
#include "vector"
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v ;
        int row = matrix.size();
        int col = matrix[0].size();
        int i,j = 0;
        int start = 0;
        while (row > 0 && col > 0){
            if (matrix.empty() || matrix[0].empty()) return v; //啊啊啊啊这句很重要啊
            cout << "row" << row << " col" << col << endl;

            i = start;
            j = start;
            if(row == 1){
                for(; j < start+col;j++) {
                    v.push_back(matrix[i][j]);
//                    cout << i<<" "<<j <<" " << endl;
                }
                debug(v);
                return v;
            }
            if(col == 1){
                for(; i < start+row;i++) v.push_back(matrix[i][j]);
                return v;
            }
            for (; j < start+col-1; j++) {

                v.push_back(matrix[i][j]);
                // cout << j << endl;
            }
//            cout << "i " << i << " j " << j << endl;

            for (; i < start+row-1; i++) {
                v.push_back(matrix[i][j]);
            }
            start++;
//            cout << "i " << i << " j " << j<< endl;

            for (; j >= start ;j--){
                // cout << j<<endl;
                v.push_back(matrix[i][j]);
            }
            // j--;
//            cout << "i " << i << " j " << j<< endl;

            for (; i >= start ; i--) {
                v.push_back(matrix[i][j]);
            }
//            cout << "i " << i << " j " << j<< endl;

            row-=2;
            col-=2;
            if(row < 0 || col < 0) v.push_back(matrix[i][j]);
            debug(v);
        }

        return v;
    }
    void debug(vector<int> v){
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};
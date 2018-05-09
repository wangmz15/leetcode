//
// Created by 王苜子 on 2018/5/9.
//
#include <iostream>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) { //暴力,弄numRows个string来存每一行
        int size = s.length();
        string ans[numRows];
        int col = 1, up_to_down = 1;
        for (int i = 0; i < size; ++i) {
            if(col % 2 == 1){ //单数行，从上到下，且一列个数为numRows
                for (int j = 0; j < numRows; ++j) {
                    if(i < size){
                        ans[j] += s[i];
                        i++;
                    }else break;
                }
            }else{ //双数行，从下到上，且一列个数为numRows-2
                for (int j = numRows-2; j >= 1; --j) {
                    if(i < size){
                        ans[j] += s[i];
                        i++;
                    }else break;
                }
            }
            col++;
            i--;
        }
        string ansString = "";
        for (int k = 0; k < numRows; ++k) {
            cout << ans[k] << endl;
            ansString.append(ans[k]);
        }
        return ansString;
    }
};
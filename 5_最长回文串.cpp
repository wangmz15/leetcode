//
// Created by 王苜子 on 2018/5/9.
//
#include <iostream>



using namespace std;


class Solution {
public:
    string longestPalindrome(string s) { //暴力枚举
        int final_l = -1, final_r = -1, maxlen = 0;
        int size = s.length();
        if(size < 2) return s;
        for (int i = 0; i < size; ++i) {
            cout << "i = " << i << endl;
            int left1 = -1, right1 = -1, left2 = -1, right2 = -1;
            if(s[i+1] == s[i]){
                left1 = i;
                right1 = i+1;
                while(0 <= left1 && right1 < size){
                    if(s[left1] == s[right1]) {
                        left1--;
                        right1++;
                    }
                    else break;
                }
                left1++;
                right1--;
            }
            if(0 < i && s[i-1] == s[i+1] && i < size-1){
                left2 = i-1;
                right2 = i+1;
                while(0 <= left2 && right2 < size){
                    if(s[left2] == s[right2]){
                        left2--;
                        right2++;
                    }
                    else break;
                }
                left2++;
                right2--;
            }
//
            cout << "left1 = " << left1 << " right1 = " << right1 << endl;
            cout << "left2 = " << left2 << " right2 = " << right2 << endl;

            int len1 = right1-left1+1;
            int len2 = right2-left2+1;
            if(len1 > maxlen && left1 != -1){
                final_l = left1;
                maxlen = len1;
            }
            if(len2 > maxlen && left2 != -1){
                final_l = left2;
                maxlen = len2;
            }


            cout << "final_l:" <<final_l << " maxlen:" <<maxlen<< endl;
        }

//
        if(final_l == -1){
            return s.substr(0,1);
        }
        return s.substr(final_l,maxlen);
    }
};
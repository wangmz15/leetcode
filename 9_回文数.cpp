//
// Created by 王苜子 on 2018/5/10.
//
#include <iostream>
using namespace std;
#include <stack>
#include <queue>
class Solution {
public:
//    bool isPalindrome(int x) {//转字符串
//        string s = to_string(x);
//        int size = s.length();
//        for (int i = 0, j = size-1; i < size, i <= j; ++i, --j) {
//            if(s[i] != s[j]) return false;
//        }
//        return true;
//    }
//    bool isPalindrome(int x){ //用stack来存
//        if(x < 0) return false;
//        if(x == 0) return true;
//        int x1 = x;
//        stack <int>s;
//        while(x1){
//            s.push(x1 % 10);
//            x1 /= 10;
//        }
//        while(!s.empty()){
////            cout << s.top() << " " << x%10 << endl;
//            if(s.top()!= x%10){
//                return false;
//            }
//            s.pop();
//            x /= 10;
//        }
//        return true;
//    }
     bool isPalindrome(int x) { //直接计算
        if(x < 0) return false;
        int div = 1;
        while(x / div >= 10) div *= 10;
        int left ,right;
        while(x && div)
        {
            left = (x/div)%10;
            right = x%10;
            if(left != right){
                return false;
            }
            x /= 10;
            div /= 100;
//            cout << "x "<<  x<< " left"<< left<<" right "<<right <<" div "<<div<< endl;
        }
        return true;
    }
};
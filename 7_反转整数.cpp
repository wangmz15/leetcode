//
// Created by 王苜子 on 2018/5/9.
//
#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) { //用long
//        int sign = (x >= 0?1:-1);
//        x = abs(x);
        long ans = 0;
        while(x){
            ans *= 10;
            ans += x%10;
            x /= 10;
        }
        if(INT_MIN < ans && ans < INT_MAX ) return (int)ans;
        else return 0;
    }
};
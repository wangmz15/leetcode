//
// Created by 王苜子 on 2018/5/9.
//
#include <iostream>
using namespace std;
class Solution {
public:
    int myAtoi(string str) {
        if(str == "") return 0;
        int i = 0, size = str.length();
        while (i < size && str[i] == ' ') i++;
        if(i == size) return 0;
        int sign = 0;
        long  ans = 0;
        if(str[i] == '+') {
            sign = 1;
            i++;
        }
        else if(str[i] == '-'){
            sign = -1;
            i++;
        }
        else if(0 <= str[i] - '0'&& str[i] - '0' <= 9 && i < size){
            sign = 1;
        }
        if(sign == 0)return 0;
        cout << sign << endl;
        while(0 <= str[i] - '0'&& str[i] - '0' <= 9 && i < size){
            ans *= 10;
            ans += str[i]-'0';
            if(ans > INT_MAX){
                if(sign == 1)return INT_MAX;
                return INT_MIN;
            }
            i++;
        }
        ans *= sign;
        return ans;
    }
};
#include <iostream>
//#include "5_最长回文串.cpp"
//#include "6_z字形变换.cpp"
//#include "7_反转整数.cpp"
#include "8_字符串转整数 (atoi).cpp"
using namespace std;

int main() {
    Solution *s = new Solution;
//    cout << s->longestPalindrome("abcda") << endl; //5
//    cout << s->convert("PAYPALISHIRING",4) << endl;//6

    cout << s->myAtoi("  -9") << endl; //8
    return 0;

}
#include <iostream>
//#include "5_最长回文串.cpp"
//#include "6_z字形变换.cpp"
//#include "7_反转整数.cpp"
//#include "8_字符串转整数 (atoi).cpp"
//#include "9_回文数.cpp"
//#include "10_正则表达式匹配.cpp"
//#include "54_螺旋矩阵.cpp"
//#include "733_图像渲染.cpp"
#include "105_从前序与中序遍历序列构造二叉树.cpp"
#include "vector"


using namespace std;

int main() {
    Solution *s = new Solution;
    int a[5] = {3,9,20,15,7};
    vector<int> v1(a,a+5);
    vector<int> v2{9,3,15,20,7};
    s->buildTree(v1,v2);

//    cout << s->longestPalindrome("abcda") << endl; //5
//    cout << s->convert("PAYPALISHIRING",4) << endl;//6

//    cout << s->myAtoi("  -9") << endl; //8

//    cout << s->isPalindrome(-132231) ;//9
//    cout << s->isMatch("caaaabbbbbababa","c*abb*bb*a.*b*.a*") << endl; //10

//    vector < vector<int> > a; // a是向量类型的向量
//    vector <int> v1; // v1是int类型的向量
//    int i,j,m;
//    for(i=0;i<=2;i++) // a有4个元素
//    {
//        a.push_back(v1);// 每个元素是v1
//    }
//    int k = 1;
//    for(j=0;j<=2;j++)
//    {
//        for(i=0;i<=3;i++)
//        {
//            a[j].push_back(k++); // a的第i个元素插入一个量
//            // 就是每个v1插入一个量
//            // a[0]插入，a[1]插入，a[2]插入，a[3]插入
//            // 如此循环四次，相当于按列的顺序插入
//
//        }
//    }
//    vector<int> v = s->spiralOrder(a);
//    for (int k = 0; k < v.size(); ++k) {
//        cout << v[k] << " ";
//    }




    return 0;

}
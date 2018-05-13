//
// Created by 王苜子 on 2018/5/10.
//
#include <iostream>
using namespace std;
class Solution {
public:
    void debug(bool **a, int col, int row){
        cout << endl << endl;
        for (int k = 0; k < col; ++k) {
            cout << k << " " ;
        }
        cout << endl;
        for (int i = 1; i <= row; ++i) {
            cout << i << " ";
            for (int j = 1; j <= col; ++j) {
                cout << a[i][j]<<" ";
            }
            cout << endl;
        }
    }
    bool isMatch(string s, string p) { //动态规划的解决方案
        int s_size = s.length(), p_size = p.length();

//        int dp[s_size+1][p_size+1];
        bool **dp = new bool*[s_size+1];
        for (int k = 0; k <= s_size; ++k) {
            dp[k] = new bool[p_size+1];
        }

        //初始化第0列：p = ""，只能匹配空串
        dp[0][0] = true;
        for(int i = 1; i <= s_size; i++){
            dp[i][0] = false;

        }

        //初始化第0行：s = "",除了能匹配空串外，还能a*,
        for(int j = 1; j <= p_size;j++){
            dp[0][j] = j > 1 && p[j-1] == '*' && dp[0][j-2];
        }

        for (int i = 1; i <= s_size; ++i) {
            for (int j = 1; j <= p_size; ++j) {
                if (p[j-1] == '.'){
                    dp[i][j] = dp[i-1][j-1];
                }
                else if (p[j-1] == '*'){
                    if(s[i-1] == p[j-2] || p[j-2] == '.'){
                        dp[i][j] = dp[i-1][j];
                    }
                    else if(((s[i-1] == p[j-3]) && j >= 3 )|| i == 1 ){ //a* == '' //并且不能用 else if
                            dp[i][j] = dp[i][j-2];
                    }

                    if(dp[i][j-2] && j > 1){ //！！最后一个条件很重要！这也是对应a* == ''但能匹配上的
                        dp[i][j] = 1;
                    }
                }
                else{
                    if(s[i-1] == p[j-1] || p[j-1] == '.'){
                        dp[i][j] = dp[i-1][j-1];
                    }else{
                        dp[i][j] = 0;
                    }
                }
//                cout << dp[i][j]<<" ";
//                cout << i << " " << j << endl;
            }
//            cout << endl;
        }
//        debug(dp, p_size+1 , s_size+1 );
        return dp[s_size][p_size];
    }
};
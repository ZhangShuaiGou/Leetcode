/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start

#include <string>
#include <algorithm>

class Solution {
public:
    int helper(string str, int left, int right){
        int L=left, R=right;
        while(L>=0 && R<str.size() && str[L]==str[R]){
            L--;
            R++;
        }
        return R-L-1; //Because L and R has been added by 1. 
    }
    
    string longestPalindrome(string s) {
        int _max = 0;
        int start = 0;
        for(int i=0;i<s.size();i++){
            int len = helper(s,i,i);
            int len1 = helper(s,i,i+1);
            len = std::max(len,len1);
            if(len > _max){
                start = i - (len-1)/2;
                _max = len;
            }
        }
        return s.substr(start, _max);
    }
};
// @lc code=end


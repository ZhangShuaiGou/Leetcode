/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_map<char, bool> visited;
       int counter = 0;
       int left = 0;
       int right = 0;
       while(right<s.size()){
           if(visited[s[right]]==false){
               visited[s[right]] = true;
               counter = max(counter, right-left+1);
               right++;
           }
           else{
               while(visited[s[right]]){
                   visited[s[left++]] = false;                    
               }
           }
       }

       return counter; 
    }
};
// @lc code=end


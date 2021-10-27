/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        
    }

    void GetAll(string current, int size, int pos, vector<string> &result){
        if(pos==size){
            if(valid(current)){
                result.push_back(current);
            }

        }
        else {
            current[pos] = '(';
            GetAll(current, size, pos+1, result);
            current[pos] = ')';
            GetAll(current, size, pos+1, result);
        }
    }

    bool valid(string s){
        int balance = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                balance++;
            else
                balance--;
            
            if(balance<0)
                return false;
        }
        return true;
    }
};
// @lc code=end


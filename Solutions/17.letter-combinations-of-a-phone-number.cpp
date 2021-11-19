/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
#include<string>
class Solution {
public: 
    vector<string> letterCombinations(string digits) {
        map<char, vector<char>> digit_map;
        digit_map['2'] = {'a','b','c'};
        digit_map['3'] = {'d','e','f'};
        digit_map['4'] = {'g','h','i'};
        digit_map['5'] = {'j','k','l'};
        digit_map['6'] = {'m','n','o'};
        digit_map['7'] = {'p','q','r','s'};
        digit_map['8'] = {'t','u','v'};
        digit_map['9'] = {'w','x','y','z'};

        vector<string> result;
        if(digits.size()==0){
            return result; 
        }
        string pos_str;
        helper(result, digit_map, digits, 0, pos_str);

        return result;
    }


    void helper(vector<string> &result, map<char, vector<char>> digit_map, string digits, int pos, string pos_str){
        if(pos==digits.size()){
            result.push_back(pos_str);
            return;
        }

        for(auto c : digit_map[digits[pos]]){
            helper(result, digit_map, digits, pos+1, pos_str+c);
        }
    }


};
// @lc code=end


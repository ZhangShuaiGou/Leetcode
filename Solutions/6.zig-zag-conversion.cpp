/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] ZigZag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        
        string Re = "";
        int idx = 0;
        int numChar = 2 * numRows - 2;

        for(int i=0; i<numRows; i++){
            idx = i;
            while(idx<s.size()){
                Re += s[idx];
                if(i!=0 && i!=numRows-1){
                    if(idx+numChar-2*i < s.size())
                        Re += s[idx+numChar-2*i];
                }

                idx += numChar;
            }
        }

        return Re;
    }
};
// @lc code=end


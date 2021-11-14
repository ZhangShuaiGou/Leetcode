/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        //if x==0 or x==1, return x;
        if(x<=1){
            return x;
        }
        int start = 1, end=x;
        while (start+1<end){
            int mid = start + (end-start)/2;
            if(mid==x/mid){
                return mid;
            }
            else if(mid>x/mid){
                end = mid;
            }
            else{
                start = mid;
            }
        }

        if(end>x/end){
            return start;
        }

        return end;
    }
};
// @lc code=end


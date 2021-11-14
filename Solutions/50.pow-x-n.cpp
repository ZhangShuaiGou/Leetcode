/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;

        if(n==0){
            return 1.0;
        }
        if(n==1){
            return x;
        }
        if(n==-1){
            return 1/x;
        }

        result = myPow(x,n/2);
        if(n%2==0){
            return result*result;
        }
        else{
            if(n>0){
                return result*result*x;
            }
            else{
                return result*result/x;
            }
        }
    }
};
// @lc code=end


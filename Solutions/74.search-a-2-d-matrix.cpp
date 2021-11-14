/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int start = 0, end = m*n-1;
        while(start+1<end){
            int mid  = start + (end-start)/2;
            if(matrix[mid/n][mid%n]==target){
                return true;
            }
            else if(matrix[mid/n][mid%n]<target){
                start = mid;
            }
            else{
                end = mid;
            }
        }

        if(matrix[start/n][start%n]==target || matrix[end/n][end%n]==target){
            return true;
        }
        else{
            return false;
        }


    }
};
// @lc code=end


/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 */

// @lc code=start
#include <algorithm>

class Solution {
public:
/*  This block tries to search all the possible pairs. 
    Failed by time limit.

    int maxArea(vector<int>& height) {
        int Re = 0;
        int temp;

        for(int i=0;i<height.size();i++){
            for(int j=i+1; j<height.size();j++){
                temp = (j-i) * min(height[i],height[j]);
                Re = temp>Re ? temp : Re;
            }
        }

        return Re;
    }
*/

    //This algorithm is to create two pointers, left and right
    //the pointer of shoter value will move
    int maxArea(vector<int>& height) {
        int re = 0;
        int temp;
        int left = 0, right = height.size()-1;

        while(left<right){
            temp = min(height[left],height[right])*(right-left);
            re = temp>re ? temp : re;

            if(height[left]>height[right]){
                right--;
            }
            else {
                left++;
            }
        }

        return re;
    }

};
// @lc code=end


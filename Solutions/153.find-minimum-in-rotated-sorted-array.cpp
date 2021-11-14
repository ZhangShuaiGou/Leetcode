/*
 * @lc app=leetcode id=153 lang=cpp
 *
 * [153] Find Minimum in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0, end = nums.size()-1;
        if(end==0){
            return nums[start];
        }
        if(nums[start]<nums[end]){
            return nums[start];
        }
        while(start+1<end){
            int mid = start+(end-start)/2;
            if(nums[mid]<nums[end]){
                end = mid;
            }
            else{
                start = mid;
            }
        }
        return min(nums[start],nums[end]);
    }
};
// @lc code=end


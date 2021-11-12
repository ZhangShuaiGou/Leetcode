/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;

        while(start+1<end){
            int mid = start + (end - start)/2;

            if(nums[mid]>nums[start]){
                if(nums[start]<=target && target<nums[mid]){
                    end = mid;
                }
                else{
                    start = mid;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[end]){
                    start = mid;
                }
                else{
                    end = mid;
                }
            }
        }

        if(nums[start]==target){
            return start;
        }

        if(nums[end]==target){
            return end;
        }

        return -1;
    }
};
// @lc code=end


/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result; 
        int fst=-1, sec=-1;
        if(nums.size()==0){
            result.push_back(fst);
            result.push_back(sec);
            return result;
        }

        int start = 0, end = nums.size()-1;
        while(start+1 < end){
            int mid = start + (end-start)/2;
            if(nums[mid]>=target){
                end = mid;
            }
            else{
                start = mid;
            }
        }

        if(fst==-1){
            if(nums[start]==target){
                fst = start;
            }
            else if(nums[end]==target){
                fst = end;
            }
            else{
                result.push_back(fst);
                result.push_back(sec);
                return result;
            }
        }

        int counter = 0;
        for(int i=fst+1; i<nums.size()&&nums[i]==target;i++){
            counter++;
        }
        sec = fst + counter;
        result.push_back(fst);
        result.push_back(sec);

        return result;       

    }
};
// @lc code=end


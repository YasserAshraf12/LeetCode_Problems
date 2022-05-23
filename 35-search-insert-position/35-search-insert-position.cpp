class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums[0] > target)
            return 0;
        else if(nums[nums.size() - 1] < target)
            return nums.size();
        else{
            for(int i = 0; i < nums.size(); i++)
            {
                if((target - nums[i]) <= 0)
                    return i;
            }
        }
        return -1;
    }
};
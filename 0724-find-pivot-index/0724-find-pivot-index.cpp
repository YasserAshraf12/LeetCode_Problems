class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int N = nums.size();
        
        vector<int> sums;
        sums.push_back(nums[0]);
        
        for (int i = 1; i < N; i++) {
            sums.push_back(sums[i-1] + nums[i]);
        }
        
        int left = 0;
        for(int i = 0; i < N; i++)
        {
            if(left == ((sums[N-1]) - left - nums[i]))
                return i;
            
            left += nums[i];
        }
        
        return -1;
    }
};
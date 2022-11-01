class Solution {
public:
    int singleNumber(vector<int>& nums) {
    
        int n = nums.size();
        int max_v = 30001;

        int sums[max_v];
        int negative_sums[max_v];

        for (int i = 1; i < max_v; i++) sums[i] = 0, negative_sums[i] = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] < 0) negative_sums[abs(nums[i])] += abs(nums[i]);
            else sums[nums[i]] += nums[i];
        }

        for (int i = 1; i < max_v; i++)
        {
            if(negative_sums[i] == i) return i*-1;
            else if (sums[i] == i) return i;
        }
        return 0;
    }
};
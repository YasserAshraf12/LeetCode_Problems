class Solution {
    public:
        vector<int> twoSum(vector<int> & nums, int target)
        {
            vector<int> answer;
            for(int i = 0; i < nums.size(); i++)
            {
                if(nums[i] < (pow(-10, 9)) || nums[i] > (pow(10, 9)) || nums.size() < 2 || nums.size() > (pow(10, 4)) || target < (pow(-10,9)) || target > (pow(10, 9)))
                {
                    return nums;
                }

                for (int j = i+1; j < nums.size(); j++)
                {
                    if(nums[i] + nums[j] == target){
                        answer.push_back(i);
                        answer.push_back(j);
                        break;
                    }
                }
            }
            return answer;
        };
};

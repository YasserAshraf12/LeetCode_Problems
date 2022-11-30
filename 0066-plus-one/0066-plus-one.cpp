class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        int pos = n-1;
        
        if(n == 1)
        {
            if(digits[0] < 9) return {digits[0]+1};
            else return {1,0};
        }
        
        while(pos >= 0 && digits[pos] == 9)
        {
            digits[pos] = 0;
            pos--;
        }
        
        if(pos < 0){
            digits.insert(digits.begin(), 1);
        }else{
            digits[pos]++;
        }
        
        return digits;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle == "")
            return 0;
        else{
            int ind = haystack.find(needle);
            if(ind >= 0)
                return ind;
        }
        return -1;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0 || strs.size() > 200)
            return "";

        char firstChar = strs[0][0];
        int minsz = strs[0].length();

        for (int i = 0; i < strs.size(); i++)
        {
            if(strs[i].length() < 0 || strs[i].length() > 200)
                return "";

            if(strs[i].length() < minsz)
                minsz = strs[i].length();
            
            if(strs[i][0] != firstChar)
                return "";
        }


        string resultCommonPrefix = "";
        for(int i = 0; i <= minsz; i++)
        {
            bool check = true;
            resultCommonPrefix = strs[0].substr(0, minsz - i);
            for(int j = 0; j < strs.size(); j++)
            {
                if(strs[j].substr(0, minsz - i) != resultCommonPrefix)
                {
                    check = false;
                    break;
                }
            }
            if(check)
                break;
        }
        return resultCommonPrefix;
    }
};
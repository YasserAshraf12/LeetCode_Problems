class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;

        if(s.length() == 0)
            return 0;
        if(s.length() == 1)
            return 1;
        
        int l_check = 0;

        for (int i = s.length() - 1; i >= 0; i--)
        {
            if(s[i] == ' ' && l_check ==0)
            {
                continue;
            }
            if(s[i] != ' '){
                l_check = 1;
                count++;
            }
            else{
                break;
            }
        }
        return count;
    }

};

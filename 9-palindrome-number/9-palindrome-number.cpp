class Solution {
public:
    bool isPalindrome(int x) {
        if(x < pow(-2, 31) || x > (pow(2, 31)-1))
            return false;
    
        string str = to_string(x);
        int size = str.length();

        if(size % 2 != 0)
        {
            for(int i = 0, j = (size - 1); i < ((size/2) - 1) || j > (size/2); i++, j--)
            {
                if(str[i] != str[j])
                {
                    return false;
                }
            }
        }
        else{
            for(int i = 0, j = (size - 1); i < (size/2) || j >= (size/2); i++, j--)
            {
                if(str[i] != str[j])
                {
                    return false;
                }
            }
        }
        return true;
    }
};
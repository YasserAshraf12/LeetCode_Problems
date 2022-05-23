class Solution {
public:
    enum Symbols{
        I=1,
        V=5,
        X=10,
        L=50,
        C=100,
        D=500,
        M=1000
    };
    
    int romanToInt(string str)
    {
        int sum = 0;
        int valuePast = 0;

        if(str.length() < 1 || str.length() > 15)
            return 0;
        for (int i = 0; i < str.length(); i++)
        {
            Symbols s;
            switch (str[i])
            {
                case 'I':
                    s = I;
                    break;
                case 'V':
                    s = V;
                    break;
                case 'X':
                    s = X;
                    break;
                case 'L':
                    s = L;
                    break;
                case 'C':
                    s = C;
                    break;
                case 'D':
                    s = D;
                    break;
                case 'M':
                    s = M;
                    break;
                default:
                    return 0;
            };
            sum += s;
            if(i != 0 && valuePast < s )
                sum -= (valuePast*2);
            valuePast = s;
        }
        if (sum > 3999 || sum < 1)
            return 0;
        return sum;
    }
};
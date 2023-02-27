#include <iostream>
#include <algorithm> 

using namespace std;

string addBinary(string, string);

int main(int argc, char const *argv[])
{
    cout << addBinary("1010", "1011") << endl;
    return 0;
}

string addBinary(string a, string b)
{
    string result;
    result.clear();
    bool carry = false;

    int i = 0,j = 0;
    for(i= a.size() - 1, j = b.size() - 1; (i >= 0 && j>= 0); --i, --j)
    {
        if(a[i] == '1' && b[j] == '1'){
            if(carry){
                result.append("1");
            }
            else{
                result.append("0");
            }
            carry = true;
        }
        else if((a[i] == '1' && b[j] == '0') || (b[j] == '1' && a[i] == '0'))
        {
            if(carry){
                result.append("0");
                carry = true;
            }
            else{
                result.append("1");
                carry = false;
            }
        }
        else if(a[i] == '0' && b[j] == '0'){
            if(carry)
                result.append("1");
            else
                result.append("0");
            
            carry = false;
        }
        else{
            result.append("0");
        }
    }

    if (i > j){
        while(i >= 0)
        {
            if(carry)
            {
                if(a[i] == '1'){
                    result.append("0");
                    carry = true;
                }
                else{
                    result.append("1");
                    carry = false;
                }
            }
            else{
                result += a[i];
            }
            i--;
        }
    }
    else if(j > i){
        while(j >= 0){
            if(carry)
            {
                if(b[j] == '1'){
                    result.append("0");
                    carry = true;
                }
                else{
                    result.append("1");
                    carry = false;
                }
            }
            else{
                result += b[j];
            }
            j--;
        }
    }

    if((i+1 == 0 && j+1 == 0) && carry)
    {
        result.append("1");
    }

    reverse(result.begin(), result.end());
    return result;
}

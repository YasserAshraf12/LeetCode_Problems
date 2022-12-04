#include <bits/stdc++.h>

class Solution {
public:
    
    bool check_occ(vector<char> tmp, char x)
    {
        for(char z: tmp)
        {
            if(z == x) return true;
        }
        return false;
    }
    
    bool isIsomorphic(string s, string t) {
        map<char, char> iso;
        vector<char> visited;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(iso.empty()){
                iso.insert({s[i], t[i]});
                visited.push_back(t[i]);
            }
            
            else{
                if(iso.find(s[i]) == iso.end())
                {
                    iso.insert({s[i], t[i]});
                    if(!check_occ(visited, t[i]))
                        visited.push_back(t[i]);
                    else return false;
                }
                
                else{
                    if(iso.at(s[i]) != t[i])
                        return false;
                }
            }
        }
        return true;
    }
};
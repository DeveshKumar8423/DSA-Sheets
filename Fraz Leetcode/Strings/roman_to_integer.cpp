/*
approach 1 unordered map
1 make unodered map and store value in it
2 declare ans
3 for loop for string
    if i is in string and s[i] < s[i+1] (big element first and small after)
    then simply add them with ans
    if first is small and second is big
    then subtract it with ans
4 return ans 
*/
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> m;
        
        m['I'] = 1;
        m['V'] = 5;
        m['X'] = 10;
        m['L'] = 50;
        m['C'] = 100;
        m['D'] = 500;
        m['M'] = 1000;
        
        int ans = 0;
        
        for(int i = 0; i < s.length(); i++){
            if(i + 1 < s.length() && m[s[i]] < m[s[i+1]]){
                ans -= m[s[i]];
            }
            else{
                ans += m[s[i]];
            }
        }
        return ans;
    }
};
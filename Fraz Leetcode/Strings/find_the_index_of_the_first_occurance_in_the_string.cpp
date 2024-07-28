/*
using find function you can findsubstring in the string 
string is haystack and needle is the substring
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        int pos=haystack.find(needle);
        return pos;
    }
};
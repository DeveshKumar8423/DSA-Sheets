class Solution {
public:
    bool isPalindrome(int x) {
        long long reverse = 0; //long long is used to handle overflow 
        int original = x;

        if(x<0){
            return false;
        }
        while(x>0){
            int last_digit = x%10;
            reverse = reverse * 10 + last_digit;
            x/=10;
        }
        return original == reverse;
    }
};
/*
approach 1 brute force

NOTE - if ans is a big value and we multiply it with 10 and value gets out 
of range then program gets out of range
so if range gets out of range return 0 ans * 10 > INT_MAX and vice versa

1 extracting last number by remainder
2 then using formula 
    ans = (ans* 10) + digit; to find reverse
3 thendividing number 
*/

class Solution {
public:
    int reverse(int x) {

        int ans = 0;
        while(x!=0){

            int digit = x % 10;

            if ((ans > INT_MAX/10) || (ans < INT_MIN/10)){
                return 0;
            }
            ans = (ans * 10) + digit;

            x = x /10; 
    
        }
        return ans;
    }
};
/*
approach 1 brute force 

1 convert string into integers
2 add them
3 return back to string

dis - not accepted 
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n1 = stoi(num1);
        int n2 = stoi(num2);

        int add = n1 + n2;
        string ans = to_string(add);
        return ans;
    }
};

/*
approach 2 real logic

1 find size of num1 and num2
2 take carry variable and ans
3 loop 
4 extract number from num1 and num2 and add with carry
5 update ans
6 find carry
7 check carry for last numbers
8 reverse the ans
*/

class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size()-1;
        int m=num2.size()-1;
        int carry=0;
        string ans="";
        while( n>=0 || m>=0)
        {
            int a=(n<0)?0:num1[n]-'0';
            int b=(m<0)?0:num2[m]-'0';
            int sum=a+b+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            m--;
            n--;
        }

        if(carry>0)
            ans+=to_string(carry);
         reverse(ans.begin(),ans.end());
         return ans;   
    }
};
/*

approach 1 O(1)

1 find length of string
2 run a loop from 0 to n/2 to check palindrome
3 check if first != last then return false else return true

*/

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    int n = S.length();
	    
	    for(int i=0 ; i<n/2 ; i++){
	        if(S[i] != S[n-1-i]) return 0;
	    }
	    return 1;
	}

};
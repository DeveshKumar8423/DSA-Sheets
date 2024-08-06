/*
approach 1 using set
*/

class Solution {
public:
    bool isHappy(int n) {
        set<int> sett; // used to check loop in some cases
        int val; // store new values
        int index; // store last 

        while(1) //run infinte loop
        {
            val = 0;
            while(n)
            {
                index = n%10;
                val+= index * index;
                n/=10;
            }
            if(val==1) //if number is 1 then true
                return true;
            else if(sett.find(val) != sett.end()) //if number in set means loop 
                return false;
            
            sett.insert(val); //if not insert number
            n = val;
        }
        return false;

    }
};
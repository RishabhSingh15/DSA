class Solution {
public:
bool check(int left,int right,string s)
{
    while(left<right)
    {
    if(s[left]!=s[right])
    {
        return false;
    }
    right--;
    left++;
    }
    return true;
}
    bool validPalindrome(string s) {
        int n=s.length();
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(s[left]!=s[right])
            {
               return check(left+1,right,s) || check(left,right-1,s);
            }
            left++;
                right--;
    }
   return true;
    }
};

// Logic:
//create a function to check palindrome and we can delete one element 
// so in main function we will look for that element and skip that element 
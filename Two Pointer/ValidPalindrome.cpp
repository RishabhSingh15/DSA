class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string w;
        for(int i=0;i<n;i++)
        {
            if(isalnum(s[i]))
            {
                w.push_back(tolower(s[i]));
            }
        }
        int m=w.length();
        int left=0;
        int right=m-1;
        while(left<right)
        {
            if(w[left]==w[right])
            {
                left++;
                right--;
            }
            else return false;

        }
        return true;
    }
};

// This was my approach 
// In this problem we used took an extra string in which we stored our all alphanumrics and then used the two pointer approach to check whether it is a palindrome or not .
// Functions used : isalnum()  #to check it is alphanumeric , tolower() #to convert characters into lowercase
// Here we pushed into the string as string is uninitialised.
// In this approach extra space is used 


//Optimal Way
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right && !isalnum(s[left])) {   // skipped non alphanum from left
                left++;
            }

            while (left < right && !isalnum(s[right])) {   // skipped non alphanum from right
                right--;
            }

            if (tolower(s[left]) != tolower(s[right])) {    // check whether it is equal
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
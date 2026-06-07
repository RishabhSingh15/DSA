class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<high)
        {
            int mid=(high-low)/2+low;
            if(mid%2!=0) mid--;

            if(nums[mid]==nums[mid+1])
            {
                low=mid+2;
            }
            else{
                high=mid;
            }
        }
        return nums[high];
    }
};

//In this problem we need to make the mid even as we have to compare the next number whether it is same or not;
// If the numbers are same move the low to+2 to check further numbers
//if not same then high=mid; 
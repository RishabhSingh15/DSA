class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int pos=n-1;
        vector<int>ans(n);
        while(left<=right)
        {
            int l=nums[left]*nums[left];
            int r=nums[right]*nums[right];

            if(l<r)
            {
                ans[pos]=r;
                right--;
            }
            else{
                ans[pos]=l;
                left++;
            }
            pos--;
        }
        return ans;
    }
};

// two pointers ka use krna hai squares nikaalna hai aur unhe compare krke naye vector mai push
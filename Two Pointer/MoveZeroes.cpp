class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int i=0;
        int j=0;
        int n=arr.size();
        while(i<=n-1)
        {
            if(arr[i]!=0)
            {
                swap(arr[j],arr[i]);
                j++;
                i++;
            }
            else{
                i++;
            }
        }
    }
};
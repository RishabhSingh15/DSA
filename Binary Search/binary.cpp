class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
    int low=0;
    int high=arr.size()-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
        {
            return true;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
        return false;
    }
};

//Use this when you are finding:
//low<high
// pivot
// first/last position
// minimum element
// boundary answer
// first index where condition becomes true
// last valid position
// lower bound
// upper bound
// boundary type problems
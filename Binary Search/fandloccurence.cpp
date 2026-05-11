class Solution {
  public:
  int first(vector<int>&arr,int x)
  {
     int low=0;
     int high=arr.size()-1;
     int ans=-1;
     while(low<=high)
     {
         int mid=low+(high-low)/2;
         if(arr[mid]==x)
         {
             ans=mid;
             high=mid-1;
         }
         else if(arr[mid]<x)
         {
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return ans;
  }
  
  int last(vector<int>&arr,int x)
  {
      int low=0;
      int high=arr.size()-1;
      int ans=-1;
      while(low<=high)
      {
          int mid=low+(high-low)/2;
          if(arr[mid]==x)
          {
              ans=mid;
              low=mid+1;
          }
          else if(arr[mid]<x)
          {
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
      return ans;
  }
    vector<int> find(vector<int>& arr, int x) {
        // code here
       int a=first(arr,x);
        int b=last(arr,x);
        return {a,b};
        
    }
};
// first find the element then check its left for first occurnece using high=mid-1;
// and for last occurence use low=mid+1;
class Solution {
  public:
  int pivot(vector<int>& arr)
  {
      int n=arr.size();
      int low=0;
      int high=n-1;
      while(low<high)
      {
          int mid=low+(high-low)/2;
          if(arr[mid]>arr[high])
          {
              low=mid+1;
          }
          else{
              high=mid;
          }
      }
      return low;
  }
  int bs(vector<int>& arr,int low,int high,int n,int key)
  {
      while(low<=high)
      {
          int mid=low+(high-low)/2;
          if(arr[mid]==key)
          {
              return mid;
          }
          else if(arr[mid]<key)
          {
              low=mid+1;
          }
          else{
              high=mid-1;
          }
      }
      return -1;
  }
    int search(vector<int>& arr, int key) {
        int p=pivot(arr);
        int b=bs(arr,0,p-1,arr.size(),key);
        int b1=bs(arr,p,arr.size()-1,arr.size(),key);
        if (b>b1) return b;
        else return b1;
        
    }
};
// find a pivot point and search both parts of array

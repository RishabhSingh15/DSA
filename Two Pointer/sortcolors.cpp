class Solution {
  public:
    void sort012(vector<int>& arr) {
        int n=arr.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high)
        {
            if(arr[mid]==0)
            {
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
            else if(arr[mid]==1)
            {
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};

// This problem is done using dutch flag algorithm(3 pointers) brute force is using temp arr or vector 
// int this we create 3 regions one for 0 , one for 1 , one for 2
// we move the mid pointer mainly 
//if(arr[mid]==0) then it means it belongs to the first region so we will swap the mid with low and move both pointers ahead
// if(arr[mid]==1) then it means it belongs to the right region so we will not swap anything and move mid++;
// else the region is for 2 so we will swap mid with high and decrease the high pointer
class Solution {
public:
bool possible(vector<int>& piles,int h,int speed)
{
    long long hours=0;
    for(int x:piles)
    {
        hours+=(x+speed-1)/speed;
    }
    return hours<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<r)
        {
            int mid=l+(r-l)/2;
            if(possible(piles,h,mid))
            {
                r=mid;
            }
            else
            {
                l=mid+1;
            }
        }
        return r;
    }
};
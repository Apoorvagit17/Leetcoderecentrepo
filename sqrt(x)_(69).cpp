class Solution {
public:
    int mySqrt(int x) {

        long long low=0;
        long long high=x;
        while(low<high)
        {
            int mid=low+((high-low+1)>>1);
            if(mid<=x/mid){
            low=mid;
            }
            else{
            high=mid-1;
            }

        }
        return static_cast<int>(low);
    }
};
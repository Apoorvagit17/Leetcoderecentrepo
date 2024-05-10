class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();

        while(low<high)
        {
            int mid=(low+high)/2;
            if(target==nums[mid])
            return mid;
            else if(target<nums[mid]){
                high=mid;
            }
            else
            low=mid+1;

        }
        return low;
    }
};
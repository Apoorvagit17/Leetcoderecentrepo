class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int n=numbers.size();
        int i=0,j=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if((numbers[i]+numbers[j])==target){
                    result.push_back(i+1);
                    result.push_back(j+1);
                }
            }
        }
        return result;
    }
};
//method 2
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;
        while((numbers[low]+numbers[high])!=target)
            if((numbers[low]+numbers[high])<target)
            ++low;
            else
            --high;
        
        return {low+1,high+1};
    }
};
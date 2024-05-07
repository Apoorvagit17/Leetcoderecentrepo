class Solution {
    private:
    vector<int> cummulative_sum;
    int total_sum;
public:
    Solution(vector<int>& w) {
        srand(time(nullptr));
        int cummu_sum=0;
        for(int weight :w){
            cummu_sum +=weight;
            cummulative_sum.push_back(cummu_sum);

        }
        total_sum=cummu_sum;
    }
    
    int pickIndex() {
        int rand_num=rand()%total_sum+1;
        int low=0;
        int high=cummulative_sum.size()-1;
        while(low<high){
            int mid=(low+high)/2;
             if (rand_num > cummulative_sum[mid])
                low = mid + 1;
            else
                high = mid;
        }
        return low;
        
    }
};

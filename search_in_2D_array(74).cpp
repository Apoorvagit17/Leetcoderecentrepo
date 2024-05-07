class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty())
        return false;

        const int row=matrix.size();
        const int col=matrix[0].size();
        int low=0;
        int high=row*col;

        while(low<high){

            const int mid=(low+high)/2;
            const int i=mid/col;
            const int j=mid%col;
            if(matrix[i][j]==target)
            return true;
            if(matrix[i][j]<target)
            low=mid+1;
            else
            high=mid;

        }
        return false;

        
    }
};
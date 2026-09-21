class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        // int size=n.size();
        // int m=n[0].size();
        int left=0;
        int right=n-1;
        int top=0,bottom=n-1;
        vector<vector<int>>matrix(n,vector<int>(n));
        int counter=1;
        while(left<=right&&top<=bottom){
            for(int i=left;i<=right;i++){
                matrix[top][i]=counter++;

            }
            top++;
            for(int i=top;i<=bottom;i++){
                matrix[i][right]=counter++;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    matrix[bottom][i]=counter++;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    matrix[i][left]=counter++;
                }
                left++;
            }
        }
        return matrix;
    }
    
};
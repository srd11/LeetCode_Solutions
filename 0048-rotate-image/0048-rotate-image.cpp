class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<i;j++)
                swap(matrix[i][j],matrix[j][i]);
        }
        
        
        for(int i=0;i<matrix.size();i++){
                int low=0;
                int high = matrix[0].size()-1;
                while(low<high){
                    int temp=matrix[i][low];
                    matrix[i][low]=matrix[i][high];
                    matrix[i][high]=temp;
                    low++;
                    high--;
                    
                }
        }  
    }
};
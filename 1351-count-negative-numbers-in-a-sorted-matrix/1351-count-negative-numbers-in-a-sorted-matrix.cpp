class Solution {
public:
    int count=0;

    int countNegatives(vector<vector<int>>& grid) {
       int n = grid.size();
        int col = grid[0].size();
        
        for(int row=0;row<n;row++){
            if(grid[row][0]<0)
            {
                count += col;
                continue;
            }
            
            if(grid[row][col-1] > 0)
                continue;
            
            int l=0,r=col-1;
            while(l<=r){
                int mid = (l+r)/2;
                if(grid[row][mid] < 0)
                {
                    r = mid-1;
                }
                else
                    l = mid+=1;
            }
            
            count+=(col-l);
        }
        
        
        
        return count;
    }
};


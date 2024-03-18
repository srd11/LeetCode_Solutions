class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin() , points.end());
        int ans = 1 ;
        pair<int,int> p = {points[0][0] , points[0][1]};
        for(int i = 1 ; i<points.size() ; i++){
            if(p.first<= points[i][0] && p.second >= points[i][0]){
                p.first = max(p.first , points[i][0]);
                p.second = min(p.second , points[i][1]);
            }
            else{
                ans++;
                p = {points[i][0] , points[i][1]};
            }
        }

        return ans ;
    }
};
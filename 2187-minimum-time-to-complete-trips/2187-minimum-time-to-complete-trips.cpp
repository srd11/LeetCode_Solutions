class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long left = 1;
        long min = *min_element(time.begin(),time.end());
        long right = totalTrips * min;
        
        while(left < right){
            long mid = (right - left)/2 + left;
            long total = totalTripInGivenTime(time,mid);
            
            if(total < totalTrips){
                left = mid + 1;
            }
            else{
                right = mid;
            }
        }
       return left;
    }
    
    
    long totalTripInGivenTime(vector<int> time,long givenTime){
        long tmpTrips = 0l;
        for(int i : time){
            tmpTrips += ((long)givenTime)/i;
        }
        return tmpTrips;
    }
};
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m=tasks.size();
        vector<int> freq(26,0);
        for(int i=0;i<m;i++){
            freq[tasks[i]-65]++;
        }
        sort(freq.begin(),freq.end());
        int largestAlpha=freq[25]-1;
        int size=largestAlpha*n;
        for(int i=24;i>=0;i--){
            size-=min(largestAlpha,freq[i]);
        }
        return size<0? tasks.size():tasks.size()+size;
    }
};
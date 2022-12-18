class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        
        int n = temperatures.length;
        int[] result = new int[n];

        for(int i = n - 1; i >= 0; i--) {
            int j = i + 1;
            while (j < n && temperatures[j] <= temperatures[i]) {
                j = result[j] > 0 ? result[j] + j : n ;                
            }        
            if (j < n) {
                result[i] = j - i;
            }                   
        }
        return result;     
    }
}
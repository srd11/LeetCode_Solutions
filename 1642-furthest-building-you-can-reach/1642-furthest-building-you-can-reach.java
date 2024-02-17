class Solution {
     public int furthestBuilding(int[] heights, int bricks, int ladders) {
        PriorityQueue<Integer> p = new PriorityQueue<>();
        int n = heights.length;
        int i = 1;
        for(;i<n;i++){
            int diff = heights[i] - heights[i-1];
            if(diff>0){
                p.add(diff);
                ladders--;
                if(ladders==-1){
                    ladders++;
                    bricks = bricks-p.poll();
                }
            }
            if(bricks<0){
                break;
            }
        }
        return i-1;
    }
}
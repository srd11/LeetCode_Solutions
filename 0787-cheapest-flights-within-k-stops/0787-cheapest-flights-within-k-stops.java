class Solution {
    public int findCheapestPrice(int n, int[][] flights, int src, int dst, int k) {
        int[] prices = new int[n];
        Arrays.fill(prices, Integer.MAX_VALUE);
        prices[src] = 0;
        for (int i = 0 ; i <= k ; i++) {
            int[] temp = prices.clone();
            for (int[] flight : flights) {
                int from = flight[0];
                int to = flight[1];
                int cost = flight[2];
                if (prices[from] == Integer.MAX_VALUE) continue;
                if (prices[from] + cost < temp[to]) {
                    temp[to] = prices[from] + cost;
                }
            }
            prices = temp;
        }
        return prices[dst] == Integer.MAX_VALUE ? -1 : prices[dst];
    }
}
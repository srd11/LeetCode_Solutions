class Solution {
    public int rangeBitwiseAnd(int left, int right) {
        // By n & n-1 Approach : start [Beats 100%] [3ms]
        // return byAndApproach(left,right);
        // By n & n-1 Approach : end

        // By Finding Common Bit Prefix : start [Beats 100%] [3ms]
        return byFindingCommonBitPrefix(left,right);
        // By Finding Common Bit Prefix : end
    }

    public int byFindingCommonBitPrefix(int left,int right){
        //In AND operation if at any point we find '0' then the whole answer would be 0.
        //So We are finding Common Bit Prefix of left and right.
        //Also We need to count the right shift we made while finding the Common Bit Prefix.
        //Every Shift will Eliminate the part where we would have encountered 0 bit in left to right range
        //At the end we again do left shift to replace all those shifted bit with 0. Because those all shifted bit would be end up as 0 anyways. Because of AND operation.
        int shiftCount = 0;
        while(left != right){
            left = left >> 1;
            right = right >> 1;
            shiftCount++;
        }

        return left << shiftCount;
    }

    public int byAndApproach(int left,int right){
        //n & n-1 will clear the last set bit (let's consider that bit as xth bit)
        //So Ans = n & n-1, here Ans is the ultimate AND of the range [Ans,n]
        //So we can directly jump from n to Ans.
        while(right > left){
            right = right & right - 1;
        }
        
        return right;
    }
}
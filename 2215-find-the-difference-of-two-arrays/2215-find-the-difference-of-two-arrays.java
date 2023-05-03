class Solution {
    public List<List<Integer>> findDifference(int[] nums1, int[] nums2) {
        List<List<Integer>> ans=new ArrayList<>(2);
        ans.add(0, new ArrayList<>());
        ans.add(1, new ArrayList<>());
        HashSet<Integer> set=new HashSet<>();
        for(int i=0;i<nums2.length;i++){
            set.add(nums2[i]);
        }
        for(int i=0;i<nums1.length;i++){
           if(!set.contains(nums1[i])){
               ans.get(0).add(nums1[i]);
               set.add(nums1[i]);
           }
        }
        
        set.clear();
         for(int i=0;i<nums1.length;i++){
            set.add(nums1[i]);
        }
        for(int i=0;i<nums2.length;i++){
           if(!set.contains(nums2[i])){
               ans.get(1).add(nums2[i]);
               set.add(nums2[i]);
           }
        }
        return ans;
        
    }
}
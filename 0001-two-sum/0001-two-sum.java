class Solution {
    public int[] twoSum(int[] nums, int target) {
        int []a= new int[]{-1,-1};
        for(int i=0;i<nums.length;i++){
            for (int j=i+1;j<nums.length;j++){
                if (nums[i]+nums[j]==target){
                    int arr[]= new int[]{i,j};
                    return arr;
                }
            }
        }
        return a;
    }
}
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int i = 0; 
        int j = nums.size()-1;
        while( nums[j] == val) {
            j--;
        }
        while(i<j){
            if(nums[i] == val){
                swap(nums[i],nums[j]);
                i++;
                j--;
            }
            else{
                i++;
            }
        }
        return i+1;
              
        
        
        
    }
};
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=min(2,(int)nums.size());
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;   
            }
        }
        return k;
    }
};
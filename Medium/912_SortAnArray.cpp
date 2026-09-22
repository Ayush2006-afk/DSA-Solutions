class Solution {
public:
   void quickSort(vector<int>& nums, int start, int end) {
    if (start >= end) return;
    int randIdx = start + rand() % (end - start + 1);
    swap(nums[randIdx], nums[end]);   // pick random pivot, move to end
    int pivot = nums[end];
    int i = start;
    for (int j = start; j < end; j++) {
        if (nums[j] < pivot) {
            swap(nums[i], nums[j]);
            i++;
        }
    }
    swap(nums[i], nums[end]);
    quickSort(nums, start, i - 1);
    quickSort(nums, i + 1, end);
}
    vector<int> sortArray(vector<int>& nums) {
        quickSort(nums,0,nums.size()-1);
        return nums;
    }
};
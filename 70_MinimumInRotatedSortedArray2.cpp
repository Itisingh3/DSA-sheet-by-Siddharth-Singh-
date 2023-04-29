class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size()-1,mid;
        while(i<j){
            mid=(i+j)/2;
            if(nums[mid]>nums[j]){
                i = mid+1;
            }else{
                j--;
            }
        }
        return nums[i];
    }
};

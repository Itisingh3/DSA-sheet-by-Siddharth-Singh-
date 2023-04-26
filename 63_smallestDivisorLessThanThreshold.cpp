class Solution {
public:
    
    int findDivisionSum(vector<int>& nums, int& divisor) {
        int result = 0;
        for (int& num : nums) {
            result += ceil((1.0 * num) / divisor);
        }
        return result;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ans = -1;
        
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        
        
        while (low <= high) {
            int mid = (low + high) / 2;
            int result = findDivisionSum(nums, mid);
            
            if (result <= threshold) {
                ans = mid;
                high = mid - 1;
            }
             else {
                low = mid + 1;
            }
        }
        
        return ans;
    }
};

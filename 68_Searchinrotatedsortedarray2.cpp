class Solution {
public:
    bool search(vector<int>& nums, int k) {
        int l=0,h=nums.size()-1;
        while(l<=h){
            int mid=(l+h)/2;
            if(nums[mid]==k)return true;
            if((nums[l]==nums[mid]) && (nums[h]==nums[mid])){
                l++;h--;
            }
            else if(nums[l]<=nums[mid]){
                if(k>=nums[l] && k<=nums[mid])h=mid-1;
                else l=mid+1;
            }
            else {
                if(k>=nums[mid] && nums[h]>=k)l=mid+1;
                else h=mid-1;
            }
        }
        return false;
    }
};

class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int l, int r) {
     int i=0,j=0,count=0,m=0;
     while(j<nums.size()){
         if(nums[j]>r){
             m=0;
             i=j+1;
         }
         else if(nums[j]>=l && nums[j]<=r)m=j-i+1;
         count+=m;
         j++;
     }   
     return count;
    }
};

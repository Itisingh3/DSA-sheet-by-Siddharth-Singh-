class Solution {
public:
    int dominantIndex(vector<int>& nums) {
       int maxi=INT_MIN,ind;
        for(int i=0;i<nums.size();i++){
         if(maxi<nums[i]){
             maxi=nums[i];
             ind=i;
         }
        }
        for(int i=0;i<nums.size();i++){
            if(i!=ind && nums[i]*2>nums[ind]){
               return -1;
            }
        }
        return ind;
    }
};

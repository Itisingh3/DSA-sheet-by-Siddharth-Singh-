class Solution {
        private:
        bool solve(int mid,vector<int>&nums,int k){
                int count=1,sum=0;
                for(int i=0;i<nums.size();i++){
                        if(mid<nums[i])return false;
                        sum+=nums[i];
                        if(sum>mid){
                                count++;
                                if(count>k)return false;
                                sum=nums[i];
                        }
                }
                return true;
        }
public:
    int splitArray(vector<int>& nums, int k) {
        int low=0;
        int high=1e9;
            int ans=INT_MAX;
            while(low<=high){
                    int mid=(low+high)/2;
                    if(solve(mid,nums,k)){
                            high=mid-1;
                            ans=min(ans,mid);
                    }
                    else low=mid+1;
            }
            return ans;
            
    }
};

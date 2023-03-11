//Solution --1 
//TIME COMPLEXITY--O(N)
//SPACE COMPLEXITY--O(N)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int>left_pro(n);
        vector<int> right_pro(n);
        left_pro[0]=nums[0];
        for(int i=1;i<n;i++){
            left_pro[i]=nums[i]*left_pro[i-1];
        }
        right_pro[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            right_pro[i]=right_pro[i+1]*nums[i];
        }
        ans[0]=right_pro[1];
        ans[n-1]=left_pro[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=left_pro[i-1]*right_pro[i+1];
        }
        return ans;
    }
};






//TIME COMPLEXITY--O(N)
//SPACE COMPLEXITY--O(1)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       int n=nums.size();
        vector<int> ans(n);
        int before =1,after=1;
        for(int i=0;i<n;i++){
            ans[i]=before;
            before*=nums[i];
        }
        for(int i=n-1;i>=0;i--){
            ans[i]*=after;
            after*=nums[i];
        }
        return ans;
    }
};

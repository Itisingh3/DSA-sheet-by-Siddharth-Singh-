class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int sz=nums.size();
        //The majority element will be at max 2 beacause it should have floor value >(n/3)times and if you do mod%3 with any num at max u can get 2 as remainder.
        int num1=-1,num2=-1,c1=0,c2=0,i;
        for (i=0;i<sz;i++){
            if(nums[i]==num1) c1++;
            else if(nums[i]==num2) c2++;
            else if(c1==0){
            
                c1=1;
                num1=nums[i];
            }
            else if(c2==0){
                
                c2=1;
                num2=nums[i];
            }
            else{
                c1--;
                c2--;
            }
        }
        vector<int> ans;
        c1=c2=0;
        for(i=0;i<sz;i++){
            if (nums[i]==num1)
                c1++;
            else if(nums[i]==num2)
                c2++;
            
        }
        if (c1>sz/3)
            ans.push_back(num1);
        if(c2>sz/3)
            ans.push_back(num2);
        return ans;
    }

};

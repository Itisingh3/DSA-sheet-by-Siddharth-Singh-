class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<int> ans;
        priority_queue<pair<float,pair<int,int>>>pq;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                float frac=double(arr[i])/arr[j];
                if(pq.size()<k){
                    pq.push({frac,{arr[i],arr[j]}});
                }
                else{
                    if(pq.top().first>frac){
                        pq.pop();
                        pq.push({frac,{arr[i],arr[j]}});
                    }
                }
            }
        }
        ans.push_back(pq.top().second.first);
        ans.push_back(pq.top().second.second);
        return ans;
    }
};

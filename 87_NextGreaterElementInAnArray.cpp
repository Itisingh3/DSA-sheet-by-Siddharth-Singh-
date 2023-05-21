pclass Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
       vector<long long>ans(n);
       stack<long long>st;
       for(int i=n-1;i>=0;i--){
           while(!st.empty() && st.top()<=arr[i]){
               st.pop();
           }
           if(st.empty()){
               ans[i]=-1;
           }
           else {
               ans[i]=st.top();
           }
           st.push(arr[i]);
       }
       return ans;
    }
};

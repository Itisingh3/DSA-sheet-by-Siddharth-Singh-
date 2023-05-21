class Solution{
    private:
    void leftsmaller(int arr[],int n,vector<int>&ans){
        stack<int>st;
        for(int i=0;i<n;i++){
            while(!st.empty()&&st.top()>=arr[i])st.pop();
            if (!st.empty()) ans.push_back(st.top());
            else ans.push_back(0);
            st.push(arr[i]);
        }
    }
    public:
    /*You are required to complete this method */
    int findMaxDiff(int arr[], int n)
    {
      //Your code here
      vector<int> ls;
      leftsmaller(arr,n,ls);
      vector<int>rs;
      reverse(arr,arr+n);
      leftsmaller(arr,n,rs);
       int result = -1;
    for (int i=0 ; i< n ; i++)
        result = max(result, abs(ls[i] - rs[n-1-i]));
    return result;
    }
};

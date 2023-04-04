class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
         if(n==1) return 0;
        sort(arr,arr+n);
        int diff=arr[n-1]-arr[0];
        int mini,maxi;
        for(int i=1;i<n;i++){
            if(arr[i]-k<0) continue;
            // arr[n-1]-k --last postioned element will be decremented by k in order to minimse the solution ans
            // arr[i-1]+k---- all the element just before the n-1 will be incremente by k in order to find the minimum diffrence.
            maxi=max(arr[i-1]+k,arr[n-1]-k);
            // arr[0]+k--- first positioned element will be incremented by k in order to minimse the solution.
            // arr[i]-k--- all the element from next postion to last positoned will be dedecremnted by k  in order to find the minimum diffrence.
            mini=min(arr[0]+k,arr[i]-k);
            diff=min(diff,maxi-mini);
        }
        return diff;
    }
};

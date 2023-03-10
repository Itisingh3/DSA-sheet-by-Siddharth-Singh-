class Solution {
public:
    int nextGreaterElement(int n) {
       string digits=to_string(n);
       next_permutation(begin(digits),end(digits));
       int res=stoll(digits);
       return (res<=n)?-1:res; 
    }
};

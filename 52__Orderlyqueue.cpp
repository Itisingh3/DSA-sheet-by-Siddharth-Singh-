//for(k==1)
//ans=cba
//i=1 -- cbacba ka substring bac and bac<cba ..so ans=bac
//i=2 -- cbacba ka substring acb and acb<bac ..so ans=acb.
//for(k>1) simply we will get sorted string in lexicographically
class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1){
            int n=s.size();
            string str=s+s; //cbacba
            string ans=s;   //ans=cba
            for(int i=1;i<n;i++){
                string st=str.substr(i,n);
                if(st<ans)ans=st;
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};

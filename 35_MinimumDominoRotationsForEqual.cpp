class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
    int n=tops.size();
    vector<int>counttops(7),countbottoms(7),countsame(7);
    for(int i=0;i<n;i++){
        counttops[tops[i]]+=1;
        countbottoms[bottoms[i]]+=1;
        if(tops[i]==bottoms[i])countsame[tops[i]]+=1;
    }
    int ans=n;
    for(int i=1;i<=6;i++){
        if(counttops[i]+countbottoms[i]-countsame[i]==n){
            int minswap=min(counttops[i],countbottoms[i])-countsame[i];
            ans=min(ans,minswap);
        }
    }
  return ans==n?-1:ans;
    }
};

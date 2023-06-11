class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int s1=0,s2=0;
        for(int i=0;i<gas.size();i++){
            s1+=gas[i];
        }
        for(int i=0;i<gas.size();i++){
          s2 += cost[i];
        }
        if(s1<s2)return -1;
        int curr=0,s=0;
        for(int i=0;i<gas.size();i++){
           curr+=(gas[i]-cost[i]);
           if(curr<0){
               s=i+1;
               curr=0;
           }
        }
        return s;
    }
};

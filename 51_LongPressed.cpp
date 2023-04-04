class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0,n=name.length(),m=typed.length();
        for(int j=0;j<m;j++){
            if(i<n && name[i]==typed[j])i++;
            else if(!j || typed[j]!=typed[j-1])return false;
        }
        return i==n;
    }
};

//n=15
//no. of element(k)----->sum==n;
//k=1--------->15==15
//k=2--------->7+8==15
//k=3--------->4+5+6==15
//k=4--------->no
//k=5--------->1+2+3+4+5==15
//k-upperlimit tak jayega==?
//How to fin upper limit=?
//Suppose sequence is start with x,consecutive
//x+x+1+x+2+x+3+x+4+x+5------+x+(k-1)=n
//x+x+x+x+--k times   +  (0+1+2+3.....k-1)=n;
//kx + k(k-1)/2=n
//x=(n-k(k-1)/2)/k
// is x is integer then x>0
//(n-k(k-1)/2)/k >0
//2n>k(k-1)
// k will have a loop till its upper limit i.e 2*n>k(k-1)
//for x should be integer numerator%k==0 then increament count




class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int count=0;
        for(int k=1;k*(k-1)<2*n;k++){
            int numerator=n-k*(k-1)/2;
            if(numerator%k==0) count++;
        }
        return count;
    }

};

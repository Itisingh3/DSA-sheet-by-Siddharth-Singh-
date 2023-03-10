class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
       //chaining method
      // Example--{30,10,20,40,60,50,75,70}
       //make variable leftmax ={30,30,30,40,60,60,75,75,75};
       //rightmin={10,10,20,40,50,50,70,70,infinity};
       //now at i=0 in leftmax[0]=30>rightmin[i+1]=10 ..it means 30 will can move forward
       //now leftmax[1]=30>rightmin[2]=20 ...30 move forward
       //leftmax[2]=30<rightmin[3]=40 ...countchunk++;
      // and so on..


      //now if you will take leftmax as an array then space complexity will increase so rather than taking the leftmax an array ...consider leftmax a variable and then compare each element of rightmin . 
     vector<int> rmin(arr.size()+1);
     rmin[arr.size()]=INT_MAX;
     for(int i=arr.size()-1;i>=0;i--){
         rmin[i]=min(rmin[i+1],arr[i]);
     }
    int lmax=INT_MIN;
    int count=0;
    for(int i=0;i<arr.size();i++){
        lmax=max(lmax,arr[i]);
        if(lmax<=rmin[i+1])count++;
    }
    return count;
    }
};

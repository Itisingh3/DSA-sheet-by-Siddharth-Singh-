class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //first of all we cant't make the whole array into one chunks beacause its not allowed 
        // also we can't make the array divide into individual chunks because it will be sorted in itself example -- {1},{0},{2},{3},{4} all are sorted in their ownself not the whole array is sorted.
        //Take one maxi variable to store the max value of any chunks 
        //count is for counting the chunks
       int  maxi=0;
       int count=0;
       for(int i=0;i<arr.size();i++){
           maxi=max(maxi,arr[i]);
           if(i==maxi)count++;
       }
       return count;
    }
};

class MedianFinder {
public:
priority_queue<int>maxheap;
priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.empty() && minheap.empty()){
            maxheap.push(num);
        }
        else{
            if(num>maxheap.top()){
                minheap.push(num);
            }
            else{
                maxheap.push(num);
            }
        }
        int n=maxheap.size();
        int m=minheap.size();
        if(m-n==2 || n-m==2){
            if(m>n){
                int k=minheap.top();
                minheap.pop();
                maxheap.push(k);
            }
            else{
                int k=maxheap.top();
                maxheap.pop();
                minheap.push(k);
            }
        }
    }
    
    double findMedian() {
        int n=maxheap.size();
        int m=minheap.size();
        if((m+n)%2==0)return ((double)maxheap.top()+(double)minheap.top())/2.0;
        if(m>n)return minheap.top();
        return maxheap.top();
    }
};

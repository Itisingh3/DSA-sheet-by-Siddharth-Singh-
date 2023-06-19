We will consider a frequency map that will count the occurences of each element.
We will also consider a map group_stack which will group the elements with the same frequecy. Example if two elements have same count then we will add them in stack with the recent element at the top.
When we will push the elements
We will increment its frequency
Update the maximum occurence element
group the element with its frequency
When we will pop the element from stack
We will take out the max_frequency element.
Remove it from group_stack
Decrement its freuency
Return it




class FreqStack {
    
public:
//count of each element
unordered_map<int,int>frequency;
//group the elements with the same frequency.
unordered_map<int,stack<int>>group_stack;
int max_frequency=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        frequency[val]++;
        max_frequency=max(max_frequency,frequency[val]);
        group_stack[frequency[val]].push(val);
    }
    
    int pop() {
        int top_max_frequency=group_stack[max_frequency].top();
        group_stack[max_frequency].pop();
        frequency[top_max_frequency]--;
        if(group_stack[max_frequency].size()==0)max_frequency--;
        return top_max_frequency;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */

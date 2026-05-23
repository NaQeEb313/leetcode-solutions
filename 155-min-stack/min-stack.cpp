class MinStack {
public:
    int topidx;
    vector<int> arr;
    vector<int>minarr;
    int size;
    MinStack() {
        
        topidx = -1;
    }
int min=INT_MAX;
    
    void push(int val) {
        
            topidx++;
            arr.push_back(val);

            if(arr[topidx]<=min)
            {
                min=arr[topidx];
            }
            minarr.push_back(min);
    
        
    }

    void pop() {
        if (topidx >= 0) {
            topidx--;
            arr.pop_back();
            minarr.pop_back();

            
            min=(topidx+1)?minarr[topidx]:INT_MAX;
        } else
            cout << "underflow" << endl;
    }

    int top() {
        if (topidx >= 0)
            return arr[topidx];

        else
            return -1;
    }

    int getMin() {
        
        return minarr[topidx];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
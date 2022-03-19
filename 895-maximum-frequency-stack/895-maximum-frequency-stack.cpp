class FreqStack {
public:
    unordered_map<int, int> freq;
    unordered_map<int, stack<int>> setMap;
    int maxfreq = 0;
    FreqStack() {

    }
    
    void push(int val) {
        freq[val]++;
        maxfreq = max(maxfreq, freq[val]);
        setMap[freq[val]].push(val);
    }
    
    int pop() {
        int topmaxgroup = setMap[maxfreq].top();
        setMap[maxfreq].pop();
        freq[topmaxgroup]--;
        if(setMap[maxfreq].size()==0)
            maxfreq--;
        
        return topmaxgroup;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
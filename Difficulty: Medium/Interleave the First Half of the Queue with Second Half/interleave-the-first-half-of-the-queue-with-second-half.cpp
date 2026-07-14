class Solution {
public:
    void rearrangeQueue(queue<int> &q) {
        stack<int> st;
        int halfsize = q.size() / 2;
        
        // 1. Push first half to stack
        for (int i = 0; i < halfsize; i++) {
            st.push(q.front());
            q.pop();
        }
        
        // 2. Push stack back to queue
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
        }
        
        // 3. ADD THIS STEP: Move the front elements (the second half) to the back
        for (int i = 0; i < halfsize; i++) {
            q.push(q.front());
            q.pop();
        }
        
        // 4. Push first half (now reversed at front of queue) back to stack
        for (int i = 0; i < halfsize; i++) {
            st.push(q.front());
            q.pop();
        }
        
        // 5. Interleave
        while (!st.empty()) {
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};
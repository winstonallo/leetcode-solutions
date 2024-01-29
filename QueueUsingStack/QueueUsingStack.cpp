class MyQueue{
    private:
        stack<int> newTop, oldTop;
        void shiftStacks(){
            if (oldTop.empty()){
                while (!newTop.empty()){
                    oldTop.push(newTop.top());
                    newTop.pop();
                }
            }
        }

    public:
        MyQueue(){
        }
        
        void push(int x){
            newTop.push(x);
        }
        
        int pop(){
            shiftStacks();
            if (!oldTop.empty()){
                int value = oldTop.top();
                oldTop.pop();
                return value;
            }
            throw runtime_error("Stack is empty");
        }
        
        int peek(){
            shiftStacks();
            if (!oldTop.empty()){
                return oldTop.top();
            }
            throw runtime_error("Stack is empty");
        }
        
        bool empty(){
            return newTop.empty() && oldTop.empty();
        }
};
//栈
struct stack {
	int a[N], t;
	
	stack() {
		t = 0;
	}
	
	char top() {
		return a[t - 1];
	}
	
	void pop() {
		--t;
	} 
	
	void push(char x) {
		a[t] = x;
		++t;
	}
	
	bool empty() {
		return t == 0;
	}
};
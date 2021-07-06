//队列
struct Queue {
	ll q[N];
	int head, tail;
	
	Queue() {
		head = 0;
		tail = 0;
	}
	
	void push(ll x) {
		q[tail] = x;
		++tail;
	}
	
	ll front() {
		if (head < tail) {
			return q[head];
		}
		else {
			return inf;
		}
	}
	
	void pop() {
		++head;
	}
};
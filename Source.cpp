class MinStack {
	std::stack<int>stack;
	std::stack<int>min;
public:
	void push(int x) {
		if (!min.empty() && min.top() < x)
			min.push(min.top());
		else
			min.push(x);
		stack.push(x);
	}

	void pop() {
		stack.pop();
		min.pop();
	}

	int top() {
		return stack.top();
	}

	int getMin() {
		return min.top();
	}
};

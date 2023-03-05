#include <stdbool.h>

int static const stacksize{ 8 };

class Stack
{
public:
	Stack(char elems[stacksize], int top);
	~Stack();

	void init(Stack *s);
	void print(const Stack *s);
	void push(Stack *s, char c);
	char pop(Stack *s);

	bool is_empty(const Stack *s);
	bool is_full(const Stack* s);

private:
	char m_elems[stacksize];
	int m_top;
};

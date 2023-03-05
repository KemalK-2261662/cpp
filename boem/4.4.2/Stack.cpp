#include "stack.h"
#include <iostream>

using namespace std;

Stack::Stack(char elems[stacksize], int top) : m_elems{ elems[stacksize] }, m_top{ top }
{

}
Stack::~Stack()
{
	delete[] m_elems;
}
void Stack::init(Stack* s)
{
	s->m_top = -1;
}
void Stack::print(const Stack* s)
{
	for (int i{}; i <= s->m_top; i++)
	{
		cout << s->m_elems[i];
	}
}
void Stack::push(Stack* s, char c)
{
	if (!is_full(s))
	{
		++s->m_top;
		s->m_elems[s->m_top] = c;
	}
}
char Stack::pop(Stack* s)
{
	char c{ '\0' };

	if (!is_empty(s))
	{
		c = s->m_elems[s->m_top];
		--s->m_top;
	}
	return c;
}
bool Stack::is_empty(const Stack* s)
{
	return s->m_top == -1;
}
bool Stack::is_full(const Stack* s)
{
	return s->m_top == (stacksize - 1);
}
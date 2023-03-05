#include <iostream>
#include <string.h>
#include "stack.h"

using namespace std;

void verify_nesting(char expression[])
{
	int l = strlen(expression);

	Stack s{expression,0};
	s.init(&s);

	for (int i{}; i < l; i++)
	{
		if (expression[i] == '(')
		{
			if (s.is_full(&s))
			{
				cout << "Stack too small!\n";
				return;
			}
			else
			{
				s.push(&s, '(');
			}
		}
		else if (expression[i] == ')')
		{
			if (s.is_empty(&s))
			{
				cout << "Not correctly opened!\n";
				return;
			}
			else
			{
				s.pop(&s);
			}
		}
	}
	if (s.is_empty(&s))
	{
		cout << "Correct!\n";
	}
	else
	{
		cout << "Not correctly closed!";
		s.print(&s);
		cout << "\n";
	}
}

int main()
{
	char boem[]{ "((2 + 3) * 5)" };
	char zoem[]{ "((2+3)*5)*2)" };
	char poem[]{ "((2+3)*5" };
	verify_nesting(boem);
	verify_nesting(zoem);
	verify_nesting(poem);
	return 0;
}
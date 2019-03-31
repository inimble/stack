#include"turn.h"
#include<iostream>
#include<stack>

std::string turn(std::string str)
{
	std::stack<char> stack;
	std::stack<char> stack2;

	int j = 0;
	for (int i = 0; str[i]; i++)
	{
		if (isnum(str[i])) stack2.push(str[i]);
		else if (str[i] == '(') stack.push(str[i]);
		else if (str[i] == ')')
		{
			while (stack.top() != '(')
			{
				stack2.push(stack.top());
				stack.pop();
			}
			stack.pop();
		}
		else if (isOperator(str[i]))
		{
			if (stack.empty() || stack.top() == '(') stack.push(str[i]);
			else if (compare(str[i], stack.top()) > 0) stack.push(str[i]);
			else
			{
				while (true)
				{
					stack2.push(stack.top());
					stack.pop();
					if (stack.empty() || stack.top() == '(')
					{
						stack.push(str[i]);
						break;
					}
					else if (compare(str[i], stack.top()) > 0)
					{
						stack.push(str[i]);
						break;
					}
				}
			}
		}
	}
	while (!stack.empty()) 
	{
		stack2.push(stack.top());
		stack.pop();
	}

	std::string suffix = std::string(stack2.size(), 'a');
	int i = 0;
	while (!stack2.empty()) {
		suffix[i] = stack2.top();
		stack2.pop();
		i++;
	}
	reverse(begin(suffix), end(suffix));
	return suffix;
}


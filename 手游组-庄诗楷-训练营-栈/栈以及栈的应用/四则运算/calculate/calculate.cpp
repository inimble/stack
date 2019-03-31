#include<iostream>
#include<string>
#include<stack>
#include "calculate.h"


int Calculate(std::string str)
{
	std::stack<int> num;
	for (int i = 0; str[i]; i++)
	{
		if (isnum(str[i]))num.push(str[i]-'0');
		else if (isOperator(str[i]))
		{
			int a = num.top();
			num.pop();
			int b = num.top();
			num.pop();
			int result;
			if (str[i] == '+') 
			{
				result = b + a;
			}
			else if (str[i] == '-') 
			{
				result = b - a; 
			}
			else if (str[i] == '*') 
			{
				result = b * a;
			}
			else if (str[i] == '/') 
			{
				result = b / a;
			}
			num.push(result);
		}
	}
	return num.top();
}

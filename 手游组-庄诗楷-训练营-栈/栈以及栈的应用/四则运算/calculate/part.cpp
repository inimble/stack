#include"part.h"

bool isnum(char c)
{
	int a = c - '0';
	if (a >= 0 && a <= 9) return true;
	else return false;
}

bool isOperator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/') return true;
	else return false;
}

int compare(char op1, char op2)
{
	switch (op1) {
	case '+': case '-':
		return (op2 == '*' || op2 == '/' ? -1 : 0);
		break;
	case '*': case '/':
		return (op2 == '-' || op2 == '+' ? 1 : 0);
	}
	return -1;
}
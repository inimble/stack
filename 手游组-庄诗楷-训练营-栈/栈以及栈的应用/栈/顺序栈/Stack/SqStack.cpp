#include<iostream>
#include "SqStack.h"

SqStack::SqStack()
{
	top = -1;
}

SqStack::~SqStack()
{
	if (arr)
	{
		delete[] arr;
		arr = NULL;
	}
}

bool SqStack::isEmptyStack()
{
	if (top == -1)return true;
	else return false;
}

void SqStack::initStack(int n)
{
	if (n <= 0)std::cout << "输入的值有误！" << std::endl;
	else
	{
		arr = new int[n];
		size = n;
		if (!arr)
		{
			std::cout << "分配空间出错!" << std::endl;
		}
	}
}

void SqStack::getTopStack()
{
	if (top < 0) std::cout << "栈内无元素" << std::endl;
	else std::cout << "栈顶元素为：" << arr[top] << std::endl;
}

void SqStack::clearStack()
{
	if (top < 0)std::cout << "栈已为空" << std::endl;
	else
	{
		for (top; top >= 0; top--)
		{
			arr[top] = 0;
		}
	}
}

void SqStack::stackLength()
{
	std::cout << "栈的长度为：" << top + 1 << std::endl;
}

void SqStack::pushStack()
{
	if (top == size - 1)std::cout << "栈已满" << std::endl;
	else
	{
		std::cout << "请输入您想入栈的值：";
		int n;
		std::cin >> n;
		if (std::cin.good() != 1)
		{
			std::cerr << "输入值错误！" << std::endl;
			system("pause");
		}
		else
		{
			top += 1;
			arr[top] = n;
		}
	}
}

int SqStack::popStack()
{
	if (top < 0)std::cout << "栈为空" << std::endl;
	else
	{
		int n = arr[top];
		arr[top] = 0;
		top -= 1;
		return n;
	}
}

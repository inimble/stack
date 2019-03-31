#include<iostream>
#include"LinkStack.h"

LinkStack::LinkStack()
{
	top = NULL;
}

LinkStack::~LinkStack()
{
	node *ptr = NULL;
	while (top != NULL)
	{
		ptr = top->next;
		delete top;
		top = ptr;
	}
}

bool LinkStack::isEmptyLStack()
{
	if (size == 0) return true;
	else return false;
}

void LinkStack::getTopLStack()
{
	if (size == 0)std::cout << "栈为空" << std::endl;
	else std::cout << "栈顶元素为：" << top->data << std::endl;
}

void LinkStack::clearLStack()
{
	node *ptr = NULL;
	if (size == 0)std::cout << "栈已为空" << std::endl;
	else
	{
		if (size == 1)top = nullptr, size = 0;
		else
		{
			while (top->next)
			{
				ptr = top->next;
				delete top;
				top = ptr;
				size--;
			}
			top = nullptr;
			size--;
		}
		std::cout << "栈已清空" << std::endl;
	}
}

void LinkStack::LStackLength()
{
	std::cout << "栈的长度为：" << size << std::endl;
}

void LinkStack::pushLStack()
{
	node *ptr = new node;
	int n;
	std::cout << "输入您希望入栈的值：";
	std::cin >> n;
	if (std::cin.good() != 1)
	{
		std::cerr << "输入值错误！" << std::endl;
		system("pause");
	}
	else
	{
		ptr->data = n;
		ptr->next = top;
		top = ptr;
		size++;
	}
}

int LinkStack::popLStack()
{
	if (size == 0)return 0;
	else
	{
		if (size == 1)
		{
			int n = top->data;
			top = nullptr;
			size--;
			return n;
		}
		else
		{
			int n = top->data;
			node *ptr = top->next;
			delete top;
			top = ptr;
			size--;
			return n;
		}
	}
}

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
	if (size == 0)std::cout << "ջΪ��" << std::endl;
	else std::cout << "ջ��Ԫ��Ϊ��" << top->data << std::endl;
}

void LinkStack::clearLStack()
{
	node *ptr = NULL;
	if (size == 0)std::cout << "ջ��Ϊ��" << std::endl;
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
		std::cout << "ջ�����" << std::endl;
	}
}

void LinkStack::LStackLength()
{
	std::cout << "ջ�ĳ���Ϊ��" << size << std::endl;
}

void LinkStack::pushLStack()
{
	node *ptr = new node;
	int n;
	std::cout << "������ϣ����ջ��ֵ��";
	std::cin >> n;
	if (std::cin.good() != 1)
	{
		std::cerr << "����ֵ����" << std::endl;
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

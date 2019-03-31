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
	if (n <= 0)std::cout << "�����ֵ����" << std::endl;
	else
	{
		arr = new int[n];
		size = n;
		if (!arr)
		{
			std::cout << "����ռ����!" << std::endl;
		}
	}
}

void SqStack::getTopStack()
{
	if (top < 0) std::cout << "ջ����Ԫ��" << std::endl;
	else std::cout << "ջ��Ԫ��Ϊ��" << arr[top] << std::endl;
}

void SqStack::clearStack()
{
	if (top < 0)std::cout << "ջ��Ϊ��" << std::endl;
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
	std::cout << "ջ�ĳ���Ϊ��" << top + 1 << std::endl;
}

void SqStack::pushStack()
{
	if (top == size - 1)std::cout << "ջ����" << std::endl;
	else
	{
		std::cout << "������������ջ��ֵ��";
		int n;
		std::cin >> n;
		if (std::cin.good() != 1)
		{
			std::cerr << "����ֵ����" << std::endl;
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
	if (top < 0)std::cout << "ջΪ��" << std::endl;
	else
	{
		int n = arr[top];
		arr[top] = 0;
		top -= 1;
		return n;
	}
}

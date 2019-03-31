#include<iostream>
#include<stdlib.h>
#include"main.h"

int main()
{
	SqStack *stack = new SqStack();
	std::cout << "��������ϣ��������ջ�Ĵ�С:";
	int n;
	std::cin >> n;
	if (std::cin.good() != 1)
	{
		std::cerr << "����ֵ����" << std::endl;
		system("pause");
		return 0;
	}
	stack->initStack(n);
	std::cout << "����������Ҫ�������" << std::endl;
	std::cout << "1.�ж�ջ�Ƿ�Ϊ��" << std::endl;
	std::cout << "2.�õ�ջ��Ԫ��" << std::endl;
	std::cout << "3.���ջ" << std::endl;
	std::cout << "4.���ջ����" << std::endl;
	std::cout << "5.��ջ" << std::endl;
	std::cout << "6.��ջ" << std::endl;
	std::cout << "0.�˳�" << std::endl;
	std::cout << std::endl;
	int a = 1;
	while (a)
	{
		std::cin >> a;
		if (std::cin.good() != 1)
		{
			std::cerr << "����ֵ����" << std::endl;
			system("pause");
			return 0;
		}
		switch (a)
		{
		case 1:
			if (stack->isEmptyStack())std::cout << "ջΪ��" << std::endl;
			else std::cout << "ջ�ǿ�" << std::endl;
			std::cout << std::endl;
			break;
		case 2:
			stack->getTopStack();
			std::cout << std::endl;
			break;
		case 3:
			stack->clearStack();
			std::cout << std::endl;
			break;
		case 4:
			stack->stackLength();
			std::cout << std::endl;
			break;
		case 5:
			stack->pushStack();
			std::cout << std::endl;
			break;
		case 6:
			std::cout << "��ջ��ֵΪ��" << stack->popStack() << std::endl;
			std::cout << std::endl;
			break;
		}
	}

	system("pause");
}
#include<iostream>
#include"main.h"

int main()
{
	LinkStack stack;
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
			if (stack.isEmptyLStack())std::cout << "ջΪ��" << std::endl;
			else std::cout << "ջ�ǿ�" << std::endl;
			std::cout << std::endl;
			break;
		case 2:
			stack.getTopLStack();
			std::cout << std::endl;
			break;
		case 3:
			stack.clearLStack();
			std::cout << std::endl;
			break;
		case 4:
			stack.LStackLength();
			std::cout << std::endl;
			break;
		case 5:
			stack.pushLStack();
			std::cout << std::endl;
			break;
		case 6:
			std::cout << "��ջ��ֵΪ��" << stack.popLStack() << std::endl;
			std::cout << std::endl;
			break;
		}
	}

	system("pause");
}
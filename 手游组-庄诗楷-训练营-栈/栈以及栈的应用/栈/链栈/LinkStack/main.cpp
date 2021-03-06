#include<iostream>
#include"main.h"

int main()
{
	LinkStack stack;
	std::cout << "请输入您想要做的序号" << std::endl;
	std::cout << "1.判断栈是否为空" << std::endl;
	std::cout << "2.得到栈顶元素" << std::endl;
	std::cout << "3.清空栈" << std::endl;
	std::cout << "4.检测栈长度" << std::endl;
	std::cout << "5.入栈" << std::endl;
	std::cout << "6.出栈" << std::endl;
	std::cout << "0.退出" << std::endl;
	std::cout << std::endl;
	int a = 1;
	while (a)
	{
		std::cin >> a;
		if (std::cin.good() != 1)
		{
			std::cerr << "输入值错误！" << std::endl;
			system("pause");
			return 0;
		}
		switch (a)
		{
		case 1:
			if (stack.isEmptyLStack())std::cout << "栈为空" << std::endl;
			else std::cout << "栈非空" << std::endl;
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
			std::cout << "出栈的值为：" << stack.popLStack() << std::endl;
			std::cout << std::endl;
			break;
		}
	}

	system("pause");
}
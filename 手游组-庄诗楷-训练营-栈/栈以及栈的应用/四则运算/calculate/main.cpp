#include<iostream>
#include<stdlib.h>
#include<string>
#include"main.h"

int main()
{
	std::cout << "请输入四则运算式子：";
	std::string str;
	std::string Str;
	std::cin >> str;
	std::cout << std::endl;
	Str = turn(str);
	int result;
	result = Calculate(Str);
	std::cout << str << "=" << result << std::endl << std::endl;
	system("pause");
	return 0;
}
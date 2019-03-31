#ifndef __TURN_H__
#define __TURN_H__
#include<string>
#include"part.h"

bool isnum(char c);

bool isOperator(char c);

int compare(char op1, char op2);

std::string turn(std::string str);

#endif
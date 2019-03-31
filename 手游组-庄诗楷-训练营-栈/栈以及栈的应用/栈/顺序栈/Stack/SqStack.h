#ifndef __SQSTACK_H__
#define __SQSTACK_H__

class SqStack
{
public:
	//顺序栈(基于数组的)
	SqStack();//初始化栈
	~SqStack();//销毁栈
	bool isEmptyStack();//判断栈是否为空
	void initStack(int n);//构建栈
	void getTopStack(); //得到栈顶元素
	void clearStack();//清空栈
	void stackLength();//检测栈长度
	void pushStack();//入栈
	int popStack();//出栈
	int size;
	int top;

private:
	int *arr;
};

#endif

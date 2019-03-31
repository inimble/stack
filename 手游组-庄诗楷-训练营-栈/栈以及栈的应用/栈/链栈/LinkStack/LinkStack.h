#ifndef __LINKSTACK_H__
#define __LINKSTACK_H__

struct node
{
	int data;
	node *next;
};

class LinkStack
{
public:
	LinkStack();
	~LinkStack();
	//链栈
	bool isEmptyLStack();//判断栈是否为空
	void getTopLStack();//得到栈顶元素
	void clearLStack();//清空栈
	void LStackLength();//检测栈长度
	void pushLStack();//入栈
	int popLStack();//出栈

private:
	int size = 0;
	node* top;
};
#endif

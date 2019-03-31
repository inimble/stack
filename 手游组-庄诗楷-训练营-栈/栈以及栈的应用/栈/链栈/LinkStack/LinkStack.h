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
	//��ջ
	bool isEmptyLStack();//�ж�ջ�Ƿ�Ϊ��
	void getTopLStack();//�õ�ջ��Ԫ��
	void clearLStack();//���ջ
	void LStackLength();//���ջ����
	void pushLStack();//��ջ
	int popLStack();//��ջ

private:
	int size = 0;
	node* top;
};
#endif

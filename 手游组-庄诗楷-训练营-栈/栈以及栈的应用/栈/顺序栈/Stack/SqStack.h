#ifndef __SQSTACK_H__
#define __SQSTACK_H__

class SqStack
{
public:
	//˳��ջ(���������)
	SqStack();//��ʼ��ջ
	~SqStack();//����ջ
	bool isEmptyStack();//�ж�ջ�Ƿ�Ϊ��
	void initStack(int n);//����ջ
	void getTopStack(); //�õ�ջ��Ԫ��
	void clearStack();//���ջ
	void stackLength();//���ջ����
	void pushStack();//��ջ
	int popStack();//��ջ
	int size;
	int top;

private:
	int *arr;
};

#endif

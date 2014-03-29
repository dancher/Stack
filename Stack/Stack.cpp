#include "iostream"
#include "locale"
#include "conio.h"
using namespace std;
/**
@class Stack
@brief ����� ����
@detailed ����� �������� ����:
�������� ��������-element,��������� 
�� �������� ������� �����-next,
��������� �� ������� ����� Top
*/
class Stack
{
int element;
Stack* next;
Stack* Top;

public:
Stack();
void push();
int getTopElement();
void pop();
void print();
};
/**
@brief ����������� ��� ����������
*/
Stack::Stack()
{   
	Top=0;
}
/**
@brief ����� ��������� �������� � ����
*/
void Stack::push()
{   
	Stack* tmp;
	tmp=(Stack*)malloc(1*sizeof(Stack));
	cout<<"������� ������� "<<"\n";
	cin>>tmp->element;
	tmp->next=Top;
	Top=tmp;
}

/**
@brief ����� ��������� �������� "��������" �������� � �����
*/
int Stack::getTopElement()
{
  return Top->element;
}

/**
@brief ����� �������� �������� �� �����
*/
void Stack::pop()
{
	Stack* tmp=Top->next;
	free(Top);
	tmp=Top;	
}
/**
@brief ����� ������ �����
*/
void Stack::print()
{
	Stack* tmp;
	if (!Top) 
	{
		cout<<"���� ����";
		return;
	}
	for (tmp=Top; tmp!=0;tmp=tmp->next)
	{
		cout<<tmp->element<<"\n";
	}
}
/**
@brief ������� main()
@detailed �������� ���� S, ���������� 
�� n ��������� � ��������� �� �����.
(n �������� � ����������)
*/
void main()
{   
	setlocale(LC_ALL,"rus");
	Stack S;
	int n;
	cout<<"������� ����� ��������� � ����� ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		S.push();
	}
	cout<<"\n�������� � �����:\n";
	S.print();
	getch();
}
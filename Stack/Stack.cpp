#include "iostream"
#include "locale"
#include "conio.h"
using namespace std;
/**
@class Stack
@brief Класс стек
@detailed Класс содержит поля:
значение элемента-element,указатель 
на следющий элемент стека-next,
указатель на вершину стека Top
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
@brief конструктор без параметров
*/
Stack::Stack()
{   
	Top=0;
}
/**
@brief метод помещения элемента в стек
*/
void Stack::push()
{   
	Stack* tmp;
	tmp=(Stack*)malloc(1*sizeof(Stack));
	cout<<"введите элемент "<<"\n";
	cin>>tmp->element;
	tmp->next=Top;
	Top=tmp;
}

/**
@brief метод получения значения "верхнего" элемента в стеке
*/
int Stack::getTopElement()
{
  return Top->element;
}

/**
@brief метод удаления элемента из стека
*/
void Stack::pop()
{
	Stack* tmp=Top->next;
	free(Top);
	tmp=Top;	
}
/**
@brief метод печати стека
*/
void Stack::print()
{
	Stack* tmp;
	if (!Top) 
	{
		cout<<"Стек пуст";
		return;
	}
	for (tmp=Top; tmp!=0;tmp=tmp->next)
	{
		cout<<tmp->element<<"\n";
	}
}
/**
@brief Функция main()
@detailed Создаётся стек S, сосотоящий 
из n элементов и выводится на экран.
(n вводится с клавиатуры)
*/
void main()
{   
	setlocale(LC_ALL,"rus");
	Stack S;
	int n;
	cout<<"введите число элементов в стеке ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		S.push();
	}
	cout<<"\nЭлементы в стеке:\n";
	S.print();
	getch();
}
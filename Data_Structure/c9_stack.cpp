#include "c9_stack.h"
#include <stdio.h>


void IPush(IstackType* Sptr, int Item)
{
	if (IsFull_Istack(Sptr)) printf("Stack is Full\n");
	else Sptr->Stack[Sptr->Top++] = Item;
}

int IPop(IstackType* Sptr)
{
	if (IsEmpty_Istack(Sptr))
	{
		printf("Stack is Empty\n");
		return -1;
	}
	else return Sptr->Stack[--Sptr->Top];
}




void CPush(CstackType* Sptr, char Item)
{
	if (IsFull_Cstack(Sptr)) printf("Stack is Full\n");
	else Sptr->Stack[Sptr->Top++] = Item;
}


char CPop(CstackType* Sptr)
{

	if (IsEmpty_Cstack(Sptr))

	{

		printf("Stack is Empty\n");
		return -1;

	}

	else return Sptr->Stack[--Sptr->Top];

}


void Init_Istack(IstackType* Sptr)
{

	Sptr->Top = 0;

}




bool IsEmpty_Istack(IstackType* Sptr)

{

	return (Sptr->Top == 0);

}

 

bool IsFull_Istack(IstackType* Sptr)
 

{
 
	return (Sptr->Top == MAX);
 
}



///////////////////////////////////////////
void Init_Cstack(CstackType* Sptr)
{


	Sptr->Top = 0;

}


bool IsEmpty_Cstack(CstackType* Sptr)
{
	return (Sptr->Top == 0);

}



bool IsFull_Cstack(CstackType* Sptr)
{
	return (Sptr->Top == MAX);

}

bool Isempty(IstackType* Sptr)
{
	return (Sptr->Top == 0);
}


// 중위연산 -> 후위연산 변환
bool IsOperator(char op)
{
	return op == '+' ||
		op == '-' ||
		op == '*' ||
		op == '/' ||
		op == '%';
}

int Operator_Priority(char op)
{
	switch (op)
	{
	case '+':
	case '-':
		return 12;
	case '*':
	case '/':
	case '%':
		return 13;
	default:
		return 0;  // 오류 처리나 예외 상황을 위해 0 반환
	}
}

void Postfix(const char* eval)
{
	CstackType symbol;
	Init_Cstack(&symbol);

	int idx = 0;
	while (eval[idx] != '\0')
	{
		if (eval[idx] == '(')
		{
			CPush(&symbol, eval[idx]);
		}
		else if (eval[idx] == ')')
		{
			while (symbol.Stack[symbol.Top - 1] != '(')
			{
				printf("%c", CPop(&symbol));
			}
			CPop(&symbol);  // 여는 괄호 '(' 제거
		}
		else if (IsOperator(eval[idx]))
		{
			while (!IsEmpty_Cstack(&symbol) &&
				Operator_Priority(symbol.Stack[symbol.Top - 1]) >= Operator_Priority(eval[idx]))
			{
				printf("%c", CPop(&symbol));
			}
			CPush(&symbol, eval[idx]);
		}
		else
		{
			printf("%c", eval[idx]);  // 피연산자 출력
		}

		idx++;
	}
	while (!IsEmpty_Cstack(&symbol))
	{
		printf("%c", CPop(&symbol));
	}
	printf("\n");
}
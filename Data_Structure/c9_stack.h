#pragma once
#pragma once

#define _CRT_SECURE_NO_WARNINGS
#define MAX 100
#include <stdio.h>


typedef struct
{
	int Top;
	int Stack[MAX];

}IstackType;


typedef struct
{
	int Top;
	char Stack[MAX];

} CstackType;

typedef struct
{
	int value;
	int type;
} precedence;

void IPush(IstackType* Sptr, int Item);
int IPop(IstackType* Sptr);
void Init_Istack(IstackType* Sptr);
bool IsEmpty_Istack(IstackType* Sptr);
bool IsFull_Istack(IstackType* Sptr);


void CPush(CstackType* Sptr, char Item);
char CPop(CstackType* Sptr);
void Init_Cstack(CstackType* Sptr);
bool IsEmpty_Cstack(CstackType* Sptr);
bool IsFull_Cstack(CstackType* Sptr);


bool IsOperator(char op);
int Operator_Priority(char op);
void Postfix(const char* eval);
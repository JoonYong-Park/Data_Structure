#pragma once
#define MAX 100

// ��� ����



typedef struct A{
	int Top = 0;
	int stack[MAX];
}stackType;

// �Լ� ����
void push(stackType* s, int item); // item Ǫ��
int pop(stackType* s);			   // ���� ž ������ ����
void init(stackType* s);		   // ���� �ʱ�ȭ
bool isEmpty(stackType* s);		   // ������ ����ִ��� Ȯ��
bool isFull(stackType* s);		   // ������ �� á���� Ȯ��

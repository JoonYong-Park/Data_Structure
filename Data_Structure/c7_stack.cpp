#include "c7_stack.h"
#include <stdio.h>

// ���� ����

/*item Ǫ��*/
void push(stackType *s, int item) {
	s ->stack[s -> Top++] = item;
}

/*���� ž item ����*/
int pop (stackType *s) {
	if (isEmpty(s)) {
		return 0;
	}
	return s->stack[--s->Top];
}

/*���� �ʱ�ȭ*/
void init(stackType *s) {
	s->Top = 0;	
}

/*������ ����ִ��� Ȯ��*/
bool isEmpty(stackType* s) {
	return s->Top == 0;
}

/*������ �� á���� Ȯ��*/
bool isFull(stackType* s) {
	return s->Top == MAX;
}
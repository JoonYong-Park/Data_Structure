#include "c7_stack.h"
#include <stdio.h>

// 구현 파일

/*item 푸시*/
void push(stackType *s, int item) {
	s ->stack[s -> Top++] = item;
}

/*스택 탑 item 리턴*/
int pop (stackType *s) {
	if (isEmpty(s)) {
		return 0;
	}
	return s->stack[--s->Top];
}

/*스택 초기화*/
void init(stackType *s) {
	s->Top = 0;	
}

/*스택이 비어있는지 확인*/
bool isEmpty(stackType* s) {
	return s->Top == 0;
}

/*스택이 꽉 찼는지 확인*/
bool isFull(stackType* s) {
	return s->Top == MAX;
}
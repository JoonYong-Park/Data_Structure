#include <stdio.h>
#include "c7_stack.h"

// 동작 파일

int main_7()

{
	stackType stack;

	init(&stack);

	// 스택이 비어있는지 확인
	if(isEmpty(&stack))
		printf("스택이 비어있습니다.\n");
	else
		printf("스택이 비어있지 않습니다.\n");

	// 스택이 가득 찼는지 확인
	if(isFull(&stack))
		printf("스택이 가득 찼습니다.\n");
	else
		printf("스택이 가득 차지 않았습니다.\n");

	// 스택에 item 넣기
	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	
	// 스택 탑 확인
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));

	return 0;
}
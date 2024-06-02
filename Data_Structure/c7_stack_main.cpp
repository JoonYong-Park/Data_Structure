#include <stdio.h>
#include "c7_stack.h"

// ���� ����

int main_7()

{
	stackType stack;

	init(&stack);

	// ������ ����ִ��� Ȯ��
	if(isEmpty(&stack))
		printf("������ ����ֽ��ϴ�.\n");
	else
		printf("������ ������� �ʽ��ϴ�.\n");

	// ������ ���� á���� Ȯ��
	if(isFull(&stack))
		printf("������ ���� á���ϴ�.\n");
	else
		printf("������ ���� ���� �ʾҽ��ϴ�.\n");

	// ���ÿ� item �ֱ�
	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	
	// ���� ž Ȯ��
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));
	printf("%d\n", pop(&stack));

	return 0;
}
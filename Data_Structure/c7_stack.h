#pragma once
#define MAX 100

// 헤더 파일



typedef struct A{
	int Top = 0;
	int stack[MAX];
}stackType;

// 함수 선언
void push(stackType* s, int item); // item 푸시
int pop(stackType* s);			   // 스택 탑 아이템 리턴
void init(stackType* s);		   // 스택 초기화
bool isEmpty(stackType* s);		   // 스택이 비어있는지 확인
bool isFull(stackType* s);		   // 스택이 꽉 찼는지 확인

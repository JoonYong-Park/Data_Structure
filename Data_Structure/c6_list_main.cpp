#include <stdio.h>
#include <malloc.h>

#define _CRT_SECURE_NO_WARNINGS

// 6주차 - 연결리스트(Linked List)


// 연결리스트의 노드 구조체
typedef struct A {
	int data;		// 데이터
	struct A* Next; // 다음 노드의 주소
} node;

typedef node* Nptr; // 노드 포인터
Nptr p, q;			// 노드 포인터 변수

int main_6() {
	
	////// 1. 연결 리스트 기초 //////
	/*p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;
	
	/// 출력
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}*/



	////// 2. 연결리스트 p, q 사용 //////		
	/*p = (node*)malloc(sizeof(node));
	p->data = 11;

	p->Next = (Nptr)malloc(sizeof(node));
	q = p->Next;
	q->data = 22;

	q->Next = (Nptr)malloc(sizeof(node));
	q = q->Next;
	q->data = 33;

	/// 출력
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}
	free(p);
	p = NULL;*/


	////// 간단한 삽입 //////
	/*p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;

	/// 삽입 ///
	//	10 ->       20 -> 30
	//	10 -> 15 -> 20 -> 30
	
	// 1. 노드 생성
	q = (node *)malloc(sizeof(node));
	// 2. 생성된 노드에 아이템 저장
	q->data = 15;
	// 3. 생성된 노드의 next포인터에 뒷노드 연결
	q->Next = p->Next;
	// 4. 앞노드의 next 포인터에 생성된 노드 연결
	p->Next = q;


	/// 삽입후 출력
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}*/




	//// 간단한 삭제 ////
	// 10 -> 20 -> 30
	p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;

	// 리스트 출력 및 확인
	Nptr temp = p;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->Next;
	}
	printf("NULL\n");

	// 전체 리스트 메모리 해제
	while (p != NULL) {
		temp = p;
		p = p->Next;
		free(temp);
	}



	/// 삭제 1
	/*p->Next = p->Next->Next;*/



	// 삭제 2(사진)
	// 1. 삭제할 아이템을 가리키는 포인터
	//  q설정
	q = p->Next;

	// 2. 삭제할 item의 이번 노드의 Next포인터에 다다음 노드의 주소를 저장
	p->Next = q->Next;

	// 3. 포인터 q의 메로리 해제
	free(q);

	

	/// 출력
	while (p->data != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}

	/*printf("%d\n", p->data);
	printf("%d\n", p->Next->data);*/








	return 0;
}
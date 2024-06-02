#include <stdio.h>
#include <malloc.h>

#define _CRT_SECURE_NO_WARNINGS

// 6���� - ���Ḯ��Ʈ(Linked List)


// ���Ḯ��Ʈ�� ��� ����ü
typedef struct A {
	int data;		// ������
	struct A* Next; // ���� ����� �ּ�
} node;

typedef node* Nptr; // ��� ������
Nptr p, q;			// ��� ������ ����

int main_6() {
	
	////// 1. ���� ����Ʈ ���� //////
	/*p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;
	
	/// ���
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}*/



	////// 2. ���Ḯ��Ʈ p, q ��� //////		
	/*p = (node*)malloc(sizeof(node));
	p->data = 11;

	p->Next = (Nptr)malloc(sizeof(node));
	q = p->Next;
	q->data = 22;

	q->Next = (Nptr)malloc(sizeof(node));
	q = q->Next;
	q->data = 33;

	/// ���
	while(p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}
	free(p);
	p = NULL;*/


	////// ������ ���� //////
	/*p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;

	/// ���� ///
	//	10 ->       20 -> 30
	//	10 -> 15 -> 20 -> 30
	
	// 1. ��� ����
	q = (node *)malloc(sizeof(node));
	// 2. ������ ��忡 ������ ����
	q->data = 15;
	// 3. ������ ����� next�����Ϳ� �޳�� ����
	q->Next = p->Next;
	// 4. �ճ���� next �����Ϳ� ������ ��� ����
	p->Next = q;


	/// ������ ���
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}*/




	//// ������ ���� ////
	// 10 -> 20 -> 30
	p = (node*)malloc(sizeof(node));
	p->data = 10;

	p->Next = (Nptr)malloc(sizeof(node));
	p->Next->data = 20;

	p->Next->Next = (Nptr)malloc(sizeof(node));
	p->Next->Next->data = 30;

	p->Next->Next->Next = NULL;

	// ����Ʈ ��� �� Ȯ��
	Nptr temp = p;
	while (temp != NULL) {
		printf("%d -> ", temp->data);
		temp = temp->Next;
	}
	printf("NULL\n");

	// ��ü ����Ʈ �޸� ����
	while (p != NULL) {
		temp = p;
		p = p->Next;
		free(temp);
	}



	/// ���� 1
	/*p->Next = p->Next->Next;*/



	// ���� 2(����)
	// 1. ������ �������� ����Ű�� ������
	//  q����
	q = p->Next;

	// 2. ������ item�� �̹� ����� Next�����Ϳ� �ٴ��� ����� �ּҸ� ����
	p->Next = q->Next;

	// 3. ������ q�� �޷θ� ����
	free(q);

	

	/// ���
	while (p->data != NULL) {
		printf("%d\n", p->data);
		p = p->Next;
	}

	/*printf("%d\n", p->data);
	printf("%d\n", p->Next->data);*/








	return 0;
}
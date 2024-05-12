#include <iostream>
#include <stdio.h>

using namespace std;


// ����ü ����
typedef struct ITEM {
	int a;
}Item;

// ADT ����
class List {

private:
	int count = 0;
	Item* item = NULL;

public:
	// ADT �Լ� ����
	void Create(int size);		  // ���� ���� �Ҵ� �� ����Ʈ ����
	void Destroy();		     	  // ���� �Ҵ� ����

	bool IsEmpty();			      // ����Ʈ�� ����ִ��� Ȯ��
	bool IsFull();				  // ����Ʈ�� �� ���ִ��� Ȯ��

	void Insert(int pos, Item I); // pos ��ġ�� I ����
	void Delete(int POS);		  // ������ �׸� ����	
	void Retrive(Item I);		  // POS ��ġ�� �׸��� I�� ��ȯ

	void Display();		   // ����Ʈ ���
};
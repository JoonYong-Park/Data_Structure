#include "c5_list.h"

// 5���� - ����Ʈ ADT ���� (�迭 ���)



int main() {
	
	// ����Ʈ ADT �׽�Ʈ
	List L; 
	Item I; 
	I.a = 1;

	// �����Ҵ�
	L.Create(5);   
	cout << endl;
	
	// ����
	L.Insert(0,I); 
	L.Insert(1,I);
	L.Insert(1,I);	
	L.Insert(1,I);
	L.Insert(10, I); // ���� �ʰ�
	L.Insert(4,I);
	cout << endl;

	// ����
	L.Delete(1); 
	cout << endl;
	
	// �˻�
	L.Retrive(I); 
	cout << endl;
	
	// ����ִ��� Ȯ��
	cout << "����ִ°�?: "<< L.IsEmpty() << endl;
	cout << "�� ���ִ°�?: "<<L.IsFull() << endl;
	cout << endl;

	// ���
	L.Display(); 
	cout << endl;

	// �����Ҵ� ����
	L.Destroy(); 
	return 0;
	

}

#include "c5_list.h"


/*����Ʈ ����(���� �Ҵ�)*/
void List::Create(int size) {

	if (this->item == NULL) { // ����Ʈ�� ������� ���� ����
		this->item = new Item[size];
		cout <<"CREATE - " << size << " ũ�� ����Ʈ ����" << endl;
	}
	else {                    // ����Ʈ�� �̹� ���� ��
		cout << "CREATE - �̹� ����" << endl;
		return;
	}
}

/*�����Ҵ� ����*/
void List::Destroy() {
	delete(this->item); 
	cout << "DESTROY - ����Ʈ �����Ҵ� ����" << endl;
	this->item = NULL;
}

/*����Ʈ�� ����ִ��� Ȯ��*/
bool List::IsEmpty() {
	if (count == 0) return true;
	else return false;
}

/*����Ʈ�� �� ���ִ��� Ȯ��*/
bool List::IsFull() {
	if (count == 5) return true;
	else return false;
}

/*����*/
void List::Insert(int pos, Item I) {
	if (this->IsFull() == true) {
		cout << "INSRT - ��������" << endl;
		return;
	}
	else {
		if (pos >= 5 || pos < 0) {
			cout << "INSERT - �����ʰ�" << endl;
			return;
		}
		else if (count == pos) {
			this->item[pos].a = I.a;
			count++;
			cout << "INSERT - ����Ʈ ���� ����" << endl;
			return;
		}
		else if (count < pos) {
			cout << "INSERT - ����Ʈ �̰�" << endl;
			return;
		}
		else if (count >= pos + 1) {
			for (int i = 5 - 2; i > pos; i--)
				this->item[i].a = this->item[i - 1].a;
			this->item[pos].a = I.a;
			count++;
			cout << "INSERT - ����Ʈ �߰��� ����" << endl;
			return;
		}
	}
}

/*POS ��ġ�� �׸��� ����*/
void List::Delete(int POS) {
	if (this->IsEmpty() == true) {
		cout << "DELETE - �������" << endl;
		return;
	}
	else {
		if (POS >= 5 || POS < 0) {
			cout << "DELETE - �����ʰ�" << endl;
			return;
		}
		else if (count == POS) {
			this->item[POS].a = NULL;
			count--;
			cout << "DELETE - ����Ʈ ����" << endl;
			return;
		}
		else if (count >= POS + 1) {
			for (int i = POS; i < 5 - 1; i++)
				this->item[i].a = this->item[i + 1].a;
			count--;
			cout << "DELETE - ����Ʈ �߰���" << endl;
			return;
		}
	}
}

/*item �˻�(��ġ�� ��ȯ)*/
void List::Retrive(Item I) {
	for (int i = 0; i < 5; i++) {
		if (this->item[i].a == I.a) {
			cout << "RETRIVE - ��ġ : " << i << endl;
		}
	}
	cout << "RETRIVE - ����" << endl;
}


/*���*/
void List::Display() {
	for (int i = 0; i < count; i++) {
		if (item[i].a != NULL) {
			cout << i << " : " << item[i].a << endl;
		}
		else {
			cout << i << " : " << "NULL" << endl;
		}
	}
}
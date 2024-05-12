#include "c5_list.h"


/*리스트 생성(독적 할당)*/
void List::Create(int size) {

	if (this->item == NULL) { // 리스트가 비어있을 때만 생성
		this->item = new Item[size];
		cout <<"CREATE - " << size << " 크기 리스트 생성" << endl;
	}
	else {                    // 리스트가 이미 있을 때
		cout << "CREATE - 이미 있음" << endl;
		return;
	}
}

/*동적할당 해제*/
void List::Destroy() {
	delete(this->item); 
	cout << "DESTROY - 리스트 동적할당 헤제" << endl;
	this->item = NULL;
}

/*리스트가 비어있는지 확인*/
bool List::IsEmpty() {
	if (count == 0) return true;
	else return false;
}

/*리스트가 꽉 차있는지 확인*/
bool List::IsFull() {
	if (count == 5) return true;
	else return false;
}

/*삽입*/
void List::Insert(int pos, Item I) {
	if (this->IsFull() == true) {
		cout << "INSRT - 꽉차있음" << endl;
		return;
	}
	else {
		if (pos >= 5 || pos < 0) {
			cout << "INSERT - 범위초과" << endl;
			return;
		}
		else if (count == pos) {
			this->item[pos].a = I.a;
			count++;
			cout << "INSERT - 리스트 끝에 삽입" << endl;
			return;
		}
		else if (count < pos) {
			cout << "INSERT - 리스트 이격" << endl;
			return;
		}
		else if (count >= pos + 1) {
			for (int i = 5 - 2; i > pos; i--)
				this->item[i].a = this->item[i - 1].a;
			this->item[pos].a = I.a;
			count++;
			cout << "INSERT - 리스트 중간에 삽입" << endl;
			return;
		}
	}
}

/*POS 위치의 항목을 삭제*/
void List::Delete(int POS) {
	if (this->IsEmpty() == true) {
		cout << "DELETE - 비어있음" << endl;
		return;
	}
	else {
		if (POS >= 5 || POS < 0) {
			cout << "DELETE - 범위초과" << endl;
			return;
		}
		else if (count == POS) {
			this->item[POS].a = NULL;
			count--;
			cout << "DELETE - 리스트 끝에" << endl;
			return;
		}
		else if (count >= POS + 1) {
			for (int i = POS; i < 5 - 1; i++)
				this->item[i].a = this->item[i + 1].a;
			count--;
			cout << "DELETE - 리스트 중간에" << endl;
			return;
		}
	}
}

/*item 검색(위치값 반환)*/
void List::Retrive(Item I) {
	for (int i = 0; i < 5; i++) {
		if (this->item[i].a == I.a) {
			cout << "RETRIVE - 위치 : " << i << endl;
		}
	}
	cout << "RETRIVE - 없음" << endl;
}


/*출력*/
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
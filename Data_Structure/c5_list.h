#include <iostream>
#include <stdio.h>

using namespace std;


// 구조체 선언
typedef struct ITEM {
	int a;
}Item;

// ADT 선언
class List {

private:
	int count = 0;
	Item* item = NULL;

public:
	// ADT 함수 선언
	void Create(int size);		  // 동적 공간 할당 후 리스트 생성
	void Destroy();		     	  // 동적 할당 해제

	bool IsEmpty();			      // 리스트가 비어있는지 확인
	bool IsFull();				  // 리스트가 꽉 차있는지 확인

	void Insert(int pos, Item I); // pos 위치에 I 삽입
	void Delete(int POS);		  // 마지막 항목 삭제	
	void Retrive(Item I);		  // POS 위치의 항목을 I에 반환

	void Display();		   // 리스트 출력
};
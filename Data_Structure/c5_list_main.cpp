#include "c5_list.h"

// 5주차 - 리스트 ADT 구현 (배열 기반)



int main() {
	
	// 리스트 ADT 테스트
	List L; 
	Item I; 
	I.a = 1;

	// 동적할당
	L.Create(5);   
	cout << endl;
	
	// 삽입
	L.Insert(0,I); 
	L.Insert(1,I);
	L.Insert(1,I);	
	L.Insert(1,I);
	L.Insert(10, I); // 범위 초과
	L.Insert(4,I);
	cout << endl;

	// 삭제
	L.Delete(1); 
	cout << endl;
	
	// 검색
	L.Retrive(I); 
	cout << endl;
	
	// 비어있는지 확인
	cout << "비어있는가?: "<< L.IsEmpty() << endl;
	cout << "꽉 차있는가?: "<<L.IsFull() << endl;
	cout << endl;

	// 출력
	L.Display(); 
	cout << endl;

	// 동적할당 해제
	L.Destroy(); 
	return 0;
	

}

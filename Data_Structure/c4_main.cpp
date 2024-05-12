#include <stdio.h>
#include <string.h> 
#include <iostream> 
#include <string.h>
#include "c4.h"

#define _CRT_SECURE_NO_WARNINGS 
using namespace std;

// 4주차 - 재귀 호출 + 구조체
// 재귀 호출 : 함수가 자기 자신을 호출하는 것
// 구조체 : 서로 다른 자료형을 묶어서 하나의 자료형으로 만들어주는 것

int main_4() {
	
	// 구조체	
	// 고객 정보 입력 및 출력
	Customer C;
	C.InPersons();  // 고객 정보 입력
	C.OutPersons(); // 고객 정보 출력

	
	Person2 P;
	P.InPersons2();  // 고객 정보 입력
	P.OutPersons2(); // 고객 정보 출력

	return 0;
}
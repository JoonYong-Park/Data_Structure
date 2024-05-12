#pragma once

// 인터페이스 파일(헤더 파일)

// 구조체 선언
typedef struct Person {

    char name[10];
    int age;
    float salary;

}human_being;

// 클래스 선언
class Customer {
    human_being P[2];
public:
    void InPersons();
    void OutPersons();
};


 /***************************/
// 구조체 선언
typedef struct date {
	int month;
	int day;
	int year;
}date;

// 구조체 선언 2
typedef struct {
	char name[10];
	int age;
	int salary;
	date dob;
}human; 

// 클래스 선언
class Person2 {
	human H;
public:
	void InPersons2();
	void OutPersons2();
};
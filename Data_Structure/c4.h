#pragma once

// �������̽� ����(��� ����)

// ����ü ����
typedef struct Person {

    char name[10];
    int age;
    float salary;

}human_being;

// Ŭ���� ����
class Customer {
    human_being P[2];
public:
    void InPersons();
    void OutPersons();
};


 /***************************/
// ����ü ����
typedef struct date {
	int month;
	int day;
	int year;
}date;

// ����ü ���� 2
typedef struct {
	char name[10];
	int age;
	int salary;
	date dob;
}human; 

// Ŭ���� ����
class Person2 {
	human H;
public:
	void InPersons2();
	void OutPersons2();
};
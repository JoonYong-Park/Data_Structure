#include <stdio.h>
#include "c4.h"
#include <iostream>
using namespace std;

// 구현(implementation) 파일


void Customer::InPersons() {
    for (int i = 0; i < 2; i++) {
        printf("이름 입력:");
        scanf_s("%s",  P[i].name, 10);
        printf("나이 입력:");
        scanf_s("%d", &P[i].age);
        printf("급여 입력:");
        scanf_s("%f", &P[i].salary);
    }
}


void Customer::OutPersons() {
    for (int i = 0; i < 2; i++) {
        printf("이름: %s\n", P[i].name);
        printf("나이: %d\n", P[i].age);
        printf("급여: %f\n", P[i].salary);
        printf("\n");
    }
}

void Person2::InPersons2() {
    cout << "Enter name: ";
    cin.getline(H.name, sizeof(H.name)); // 이름 입력받기

    cout << "Enter age: ";
    cin >> H.age; // 나이 입력받기

    cout << "Enter salary: ";
    cin >> H.salary; // 급여 입력받기

    // 생년월일 입력받기
    cout << "Enter date of birth (year month day): ";
    cin >> H.dob.year >> H.dob.month >> H.dob.day ;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 버퍼 클리어
}

void Person2::OutPersons2() {
    cout << "Name: " << H.name << "\n";
    cout << "Age: " << H.age << "\n";
    cout << "Salary: $" << H.salary << "\n";
    cout << "Date of Birth: " << H.dob.year << "/" << H.dob.month << "/" << H.dob.day  << "\n";
}